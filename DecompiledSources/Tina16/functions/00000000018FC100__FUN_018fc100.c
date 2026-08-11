/* Ghidra address: 018fc100 */
/* Ghidra symbol: FUN_018fc100 */


void FUN_018fc100(void)

{
  DAT_021106e8 = DAT_021106e8 + -1;
  if (DAT_021106e8 == -1) {
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_018fc008,&PTR_FUN_0063d930);
    FUN_01822750(L"PascalScript",
                 L"<?xml version=\"1.0\"?><language text=\"PascalScript\"><parser><commentline1 text=\"//\"/><commentblock1 text=\"{,}\"/><commentblock2 text=\"(*,*)\"/><stringquotes text=\"\'\"/><hexsequence text=\"$\"/><keywords><and/><array/><begin/><break/><case/><const/><continue/><div/><do/><downto/><else/><end/><except/><exit/><finally/><for/><function/><goto/><if/><in/><is/><label/><mod/><not/><of/><or/><procedure/><program/><repeat/><shl/><shr/><then/><to/><try/><until/><uses/><var/><while/><with/><xor/></keywords><errors><err1 text=\"Identifier expected\"/><err2 text=\"Expression expected\"/><err3 text=\"Statement expected\"/><err4 text=\"\':\' expected\"/><err5 text=\"\';\' expected\"/><err6 text=\"\'.\' expected\"/><err7 text=\"\')\' expected\"/><err8 text=\"\']\' expected\"/><err9 text=\"\'=\' expected\"/><err10 text=\"\'BEGIN\' expected\"/><err11 text=\"\'END\' expected\"/><err12 text=\"\'OF\' expected\"/><err13 text=\"\'THEN\' expected\"/><err14 text=\"\'UNTIL\' expected\"/><err15 text=\"\'TO\' or \'DOWNTO\' expected\"/><err16 text=\"\'DO\' expected\"/><err17 text=\"\'FINALLY\' or \'EXCEPT\' expected\"/><err18 text=\"\'[\' expected\"/><err19 text=\"\'..\' expected\"/><err20 text=\"\'&#62;\' expected\"/></errors></parser><types/><empty/><program><optional><keyword text=\"PROGRAM\"/><ident err=\"err1\"/><char text=\";\" err=\"err5\"/></optional><optional><usesclause/></optional><block/><char text=\".\" err=\"err6\"/></program><usesclause node=\"uses\"><keyword text=\"USES\"/><loop text=\",\"><string add=\"file\" err=\"err1\"/></loop><char text=\";\" err=\"err5\"/></usesclause><block><optionalloop><declsection/></optionalloop><compoundstmt err=\"err10\"/></block><declsection><switch><constsection/><varsection/><proceduredeclsection/></switch></declsection><constsection><keyword text=\"CONST\"/><loop><constantdecl/></loop></constsection><constantdecl node=\"const\"><ident add=\"ident\" err=\"err1\" term=\"1\"/><char text=\"=\" err=\"err9\"/><expression err=\"err2\"/><char text=\";\" err=\"err5\"/></constantdecl><varsection><keyword text=\"VAR\"/><loop><varlist/><char text=\";\" err=\"err5\"/></loop></varsection><varlist node=\"var\"><loop text=\",\"><ident add=\"ident\" ..." /* TRUNCATED STRING LITERAL */
                );
  }
  return;
}

