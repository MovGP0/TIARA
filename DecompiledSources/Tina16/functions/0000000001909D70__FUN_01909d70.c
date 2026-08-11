/* Ghidra address: 01909d70 */
/* Ghidra symbol: FUN_01909d70 */


void FUN_01909d70(void)

{
  DAT_021106f4 = DAT_021106f4 + -1;
  if (DAT_021106f4 == -1) {
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_01909c68,&PTR_FUN_0063d930);
    FUN_01822750(L"JScript",
                 L"<?xml version=\"1.0\"?><language text=\"JScript\"><parser><commentline1 text=\"//\"/><commentblock1 text=\"/*,*/\"/><commentblock2 text=\"/*,*/\"/><stringquotes text=\"&#34;\"/><hexsequence text=\"0x\"/><specstrchar text=\"1\"/><declarevars text=\"0\"/><keywords><break/><case/><continue/><default/><delete/><do/><else/><except/><finally/><for/><function/><import/><in/><is/><if/><new/><return/><switch/><try/><var/><while/><with/></keywords><errors><err1 text=\"Identifier expected\"/><err2 text=\"Expression expected\"/><err3 text=\"Statement expected\"/><err4 text=\"\':\' expected\"/><err5 text=\"\';\' expected\"/><err6 text=\"\'.\' expected\"/><err7 text=\"\')\' expected\"/><err8 text=\"\']\' expected\"/><err9 text=\"\'=\' expected\"/><err10 text=\"\'{\' expected\"/><err11 text=\"\'}\' expected\"/><err12 text=\"\'(\' expected\"/><err14 text=\"\'WHILE\' expected\"/><err17 text=\"\'FINALLY\' or \'EXCEPT\' expected\"/><err18 text=\"\'[\' expected\"/><err19 text=\"\'..\' expected\"/><err20 text=\"\'&#62;\' expected\"/></errors></parser><types/><empty/><program><statements/></program><statements node=\"compoundstmt\"><optionalloop><statement/></optionalloop></statements><block><char text=\"{\"/><statements/><char text=\"}\" err=\"err11\"/></block><importstmt node=\"uses\"><keyword text=\"IMPORT\"/><loop text=\",\"><string add=\"file\" err=\"err1\"/></loop></importstmt><varstmt><keyword text=\"VAR\"/><loop text=\",\"><vardecl/></loop></varstmt><vardecl node=\"var\"><ident add=\"ident\"/><optional><array/></optional><optional><initvalue/></optional></vardecl><array node=\"array\"><char text=\"[\"/><loop text=\",\"><arraydim err=\"err2\"/></loop><char text=\"]\" err=\"err8\"/></array><arraydim node=\"dim\"><expression/></arraydim><initvalue node=\"init\"><char text=\"=\"/><expression err=\"err2\"/></initvalue><expression node=\"expr\"><simpleexpression/><optionalloop><relop/><simpleexpression/></optionalloop></expression><simpleexpression><optional><char text=\"-\" add=\"op\" addtext=\"unminus\"/></optional><term/><optionalloop><addop/><term/></optionalloop></simpleexpression><term><factor/><optionalloop><mulop/><factor/></optionalloop></term><factor><swit..." /* TRUNCATED STRING LITERAL */
                );
  }
  return;
}

