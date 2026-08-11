// Exports one Ghidra-decompiled function per C file.
// @category TIARA

import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.HashSet;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class ExportFunctions extends GhidraScript
{
    private static final int DECOMPILE_TIMEOUT_SECONDS = 120;
    private static final int MAX_SYMBOL_LENGTH = 80;

    @Override
    protected void run() throws Exception
    {
        var arguments = getScriptArgs();
        if (arguments.length != 1 && arguments.length != 3)
        {
            throw new IllegalArgumentException(
                "Expected an output directory and optional minimum and maximum addresses.");
        }

        var outputDirectory = Path.of(arguments[0]).toAbsolutePath().normalize();
        Address minimumAddress = null;
        Address maximumAddress = null;
        if (arguments.length == 3)
        {
            minimumAddress = currentProgram.getAddressFactory().getAddress(arguments[1]);
            maximumAddress = currentProgram.getAddressFactory().getAddress(arguments[2]);
            if (minimumAddress == null || maximumAddress == null)
            {
                throw new IllegalArgumentException("The address filter is invalid.");
            }
        }

        Files.createDirectories(outputDirectory);

        var partialIndex = outputDirectory.resolve("function-index.csv.partial");
        var finalIndex = outputDirectory.resolve("function-index.csv");
        var expectedFiles = new HashSet<String>();

        var decompiler = createDecompiler();
        try (var indexWriter = Files.newBufferedWriter(
            partialIndex,
            StandardCharsets.UTF_8))
        {
            writeIndexHeader(indexWriter);
            exportFunctions(
                decompiler,
                outputDirectory,
                indexWriter,
                expectedFiles,
                minimumAddress,
                maximumAddress);
        }
        finally
        {
            decompiler.dispose();
        }

        Files.move(
            partialIndex,
            finalIndex,
            StandardCopyOption.REPLACE_EXISTING,
            StandardCopyOption.ATOMIC_MOVE);

        removeStaleFunctionFiles(outputDirectory, expectedFiles);
        println("Function export complete: " + finalIndex);
    }

    private DecompInterface createDecompiler()
    {
        var decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);

        if (!decompiler.openProgram(currentProgram))
        {
            throw new IllegalStateException(
                "Cannot open the program in the decompiler: " + decompiler.getLastMessage());
        }

        return decompiler;
    }

    private void exportFunctions(
        DecompInterface decompiler,
        Path outputDirectory,
        BufferedWriter indexWriter,
        Set<String> expectedFiles,
        Address minimumAddress,
        Address maximumAddress) throws IOException
    {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        long functionCount = currentProgram.getFunctionManager().getFunctionCount();
        monitor.initialize(functionCount);
        monitor.setMessage("Exporting decompiled functions");

        long exportedCount = 0;
        long failureCount = 0;
        long processedCount = 0;
        long visitedCount = 0;

        while (functions.hasNext() && !monitor.isCancelled())
        {
            Function function = functions.next();
            Address entryPoint = function.getEntryPoint();
            visitedCount++;
            monitor.setProgress(visitedCount);

            if (minimumAddress != null &&
                (entryPoint.compareTo(minimumAddress) < 0 || entryPoint.compareTo(maximumAddress) > 0))
            {
                continue;
            }

            String symbol = function.getSymbol().getName(true);
            String fileName = createFileName(entryPoint, symbol);

            DecompileResults result = decompiler.decompileFunction(
                function,
                DECOMPILE_TIMEOUT_SECONDS,
                monitor);

            if (result.decompileCompleted() && result.getDecompiledFunction() != null)
            {
                var cPath = outputDirectory.resolve(fileName);
                writeFunction(cPath, entryPoint, symbol, result.getDecompiledFunction().getC());
                expectedFiles.add(fileName);
                writeIndexRow(indexWriter, entryPoint, symbol, fileName, "ok", "");
                exportedCount++;
            }
            else
            {
                writeIndexRow(
                    indexWriter,
                    entryPoint,
                    symbol,
                    "",
                    "failed",
                    result.getErrorMessage());
                failureCount++;
            }

            processedCount++;
        }

        if (monitor.isCancelled())
        {
            throw new IllegalStateException("Function export was cancelled.");
        }

        println(
            "Processed " + processedCount + " functions: " + exportedCount +
            " exported, " + failureCount + " failed.");
    }

    private void writeFunction(
        Path cPath,
        Address entryPoint,
        String symbol,
        String decompiledCode) throws IOException
    {
        try (var writer = Files.newBufferedWriter(cPath, StandardCharsets.UTF_8))
        {
            writer.write("/* Ghidra address: " + entryPoint + " */");
            writer.newLine();
            writer.write("/* Ghidra symbol: " + sanitizeComment(symbol) + " */");
            writer.newLine();
            writer.newLine();
            writer.write(decompiledCode);
            if (!decompiledCode.endsWith("\n"))
            {
                writer.newLine();
            }
        }
    }

    private void writeIndexHeader(BufferedWriter writer) throws IOException
    {
        writer.write("address,symbol,file,status,message");
        writer.newLine();
    }

    private void writeIndexRow(
        BufferedWriter writer,
        Address entryPoint,
        String symbol,
        String fileName,
        String status,
        String message) throws IOException
    {
        writer.write(csv(entryPoint.toString()));
        writer.write(',');
        writer.write(csv(symbol));
        writer.write(',');
        writer.write(csv(fileName));
        writer.write(',');
        writer.write(csv(status));
        writer.write(',');
        writer.write(csv(message));
        writer.newLine();
        writer.flush();
    }

    private String createFileName(Address address, String symbol)
    {
        var addressPart = String.format("%016X", address.getOffset());
        var symbolPart = symbol.replaceAll("[^A-Za-z0-9._-]", "_");
        symbolPart = symbolPart.replaceAll("[. ]+$", "");

        if (symbolPart.isBlank())
        {
            symbolPart = "unnamed";
        }

        if (symbolPart.length() > MAX_SYMBOL_LENGTH)
        {
            symbolPart = symbolPart.substring(0, MAX_SYMBOL_LENGTH);
        }

        return addressPart + "__" + symbolPart + ".c";
    }

    private String csv(String value)
    {
        var safeValue = value == null ? "" : value;
        safeValue = safeValue.replace("\r", " ").replace("\n", " ");
        return "\"" + safeValue.replace("\"", "\"\"") + "\"";
    }

    private String sanitizeComment(String value)
    {
        return value.replace("*/", "* /").replace("\r", " ").replace("\n", " ");
    }

    private void removeStaleFunctionFiles(Path outputDirectory, Set<String> expectedFiles)
        throws IOException
    {
        try (var files = Files.list(outputDirectory))
        {
            files.filter(path -> path.getFileName().toString().endsWith(".c"))
                .filter(path -> !expectedFiles.contains(path.getFileName().toString()))
                .forEach(this::deleteStaleFile);
        }
    }

    private void deleteStaleFile(Path path)
    {
        try
        {
            Files.delete(path);
        }
        catch (IOException exception)
        {
            throw new IllegalStateException("Cannot delete stale function file: " + path, exception);
        }
    }
}
