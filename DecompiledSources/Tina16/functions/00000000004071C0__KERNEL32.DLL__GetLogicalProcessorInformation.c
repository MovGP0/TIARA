/* Ghidra address: 004071c0 */
/* Ghidra symbol: KERNEL32.DLL::GetLogicalProcessorInformation */


BOOL __stdcall
GetLogicalProcessorInformation(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,PDWORD ReturnedLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004071c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetLogicalProcessorInformation(Buffer,ReturnedLength);
  return BVar1;
}

