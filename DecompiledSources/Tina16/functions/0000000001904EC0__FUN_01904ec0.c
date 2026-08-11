/* Ghidra address: 01904ec0 */
/* Ghidra symbol: FUN_01904ec0 */


void FUN_01904ec0(void)

{
  DAT_021106f0 = DAT_021106f0 + -1;
  if (DAT_021106f0 == -1) {
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_01904dc0,&PTR_FUN_0063d930);
    FUN_01822750(L"BasicScript",
                 L"<?xml version=\"1.0\"?><language text=\"BasicScript\"><parser><commentline1 text=\"\'\"/><commentline2 text=\"rem\"/><commentblock1 text=\"/\\,/\\\"/><commentblock2 text=\"/\\,/\\\"/><stringquotes text=\"&#34;\"/><hexsequence text=\"0x\"/><declarevars text=\"0\"/><skipeol text=\"0\"/><skipchar text=\"_\"/><keywords><addressof/><and/><as/><byref/><byval/><case/><catch/><delete/><dim/><do/><else/><elseif/><end/><endif/><exit/><finally/><for/><function/><if/><imports/><is/><loop/><mod/><new/><next/><not/><or/><rem/><return/><select/><set/><step/><sub/><then/><to/><try/><wend/><while/><with/><xor/></keywords><errors><err1 text=\"Identifier expected\"/><err2 text=\"Expression expected\"/><err3 text=\"End of line expected\"/><err4 text=\"\':\' expected\"/><err5 text=\"\';\' expected\"/><err6 text=\"\'.\' expected\"/><err7 text=\"\')\' expected\"/><err8 text=\"\']\' expected\"/><err9 text=\"\'=\' expected\"/><err10 text=\"\'TO\' expected\"/><err11 text=\"\'END\' expected\"/><err12 text=\"\'(\' expected\"/><err13 text=\"\'THEN\' expected\"/><err14 text=\"\'WHILE\' expected\"/><err15 text=\"\'CASE\' expected\"/><err16 text=\"\'SELECT\' expected\"/><err17 text=\"\'FINALLY\' or \'CATCH\' expected\"/><err18 text=\"\'[\' expected\"/><err19 text=\"\'..\' expected\"/><err20 text=\"\'&#62;\' expected\"/><err21 text=\"\'WEND\' expected\"/><err22 text=\"\'NEXT\' expected\"/><err23 text=\"\'WITH\' expected\"/><err24 text=\"\'TRY\' expected\"/><err25 text=\"\'SUB\' expected\"/><err26 text=\"\'FUNCTION\' expected\"/><err27 text=\"\'ELSE\' expected\"/><err28 text=\"\'IF\' expected\"/></errors></parser><types><decimal type=\"extended\"/></types><empty/><program><statements/></program><statements node=\"compoundstmt\"><loop><switch><eol/><sequence><statementlist/><eol err=\"err3\"/></sequence></switch></loop></statements><statementlist><loop text=\":\"><statement/></loop></statementlist><importstmt node=\"uses\"><keyword text=\"IMPORTS\"/><loop text=\",\"><string add=\"file\" err=\"err1\"/></loop></importstmt><dimstmt><keyword text=\"DIM\"/><loop text=\",\"><vardecl/></loop></dimstmt><vardecl node=\"var\"><ident add=\"ident\" err=\"err1\" term=\"1\"/><optional><array/></optional><optional><asclause..." /* TRUNCATED STRING LITERAL */
                );
  }
  return;
}

