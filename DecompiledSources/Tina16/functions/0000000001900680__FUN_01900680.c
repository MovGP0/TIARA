/* Ghidra address: 01900680 */
/* Ghidra symbol: FUN_01900680 */


void FUN_01900680(void)

{
  DAT_021106ec = DAT_021106ec + -1;
  if (DAT_021106ec == -1) {
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_01900588,&PTR_FUN_0063d930);
    FUN_01822750(L"C++Script",
                 L"<?xml version=\"1.0\"?><language text=\"C++Script\"><parser><commentline1 text=\"//\"/><commentblock1 text=\"/*,*/\"/><commentblock2 text=\"/*,*/\"/><stringquotes text=\"&#34;\"/><hexsequence text=\"0x\"/><specstrchar text=\"1\"/><casesensitive text=\"1\"/><keywords><break/><case/><continue/><define/><default/><delete/><do/><else/><except/><finally/><for/><in/><is/><if/><new/><return/><switch/><try/><while/></keywords><errors><err1 text=\"Identifier expected\"/><err2 text=\"Expression expected\"/><err3 text=\"Statement expected\"/><err4 text=\"\':\' expected\"/><err5 text=\"\';\' expected\"/><err6 text=\"\'.\' expected\"/><err7 text=\"\')\' expected\"/><err8 text=\"\']\' expected\"/><err9 text=\"\'=\' expected\"/><err10 text=\"\'{\' expected\"/><err11 text=\"\'}\' expected\"/><err12 text=\"\'(\' expected\"/><err13 text=\"\'DEFINE\' expected\"/><err14 text=\"\'WHILE\' expected\"/><err17 text=\"\'FINALLY\' or \'EXCEPT\' expected\"/><err18 text=\"\'[\' expected\"/><err19 text=\"\'..\' expected\"/><err20 text=\"\'&#62;\' expected\"/></errors></parser><types><int type=\"integer\"/><long type=\"integer\"/><void type=\"integer\"/><bool type=\"boolean\"/><float type=\"extended\"/></types><empty/><program><optional><usesclause/></optional><optionalloop><declsection/></optionalloop><compoundstmt err=\"err10\"/></program><usesclause node=\"uses\"><char text=\"#\"/><keyword text=\"INCLUDE\"/><loop text=\",\"><string add=\"file\" err=\"err1\"/></loop></usesclause><declsection><switch><constsection/><functiondecl/><sequence><varstmt/><char text=\";\" err=\"err5\"/></sequence></switch></declsection><constsection><char text=\"#\"/><keyword text=\"DEFINE\" err=\"err13\"/><constantdecl/></constsection><constantdecl node=\"const\"><ident add=\"ident\" err=\"err1\"/><expression err=\"err2\"/></constantdecl><varstmt node=\"var\"><ident add=\"type\"/><loop text=\",\"><ident add=\"ident\"/><optional><array/></optional><optional><initvalue/></optional></loop></varstmt><array node=\"array\"><loop><char text=\"[\"/><optionalloop text=\",\"><arraydim err=\"err2\"/></optionalloop><char text=\"]\" err=\"err8\"/></loop></array><arraydim node=\"dim\"><expression/></arraydim><initvalue node=..." /* TRUNCATED STRING LITERAL */
                );
  }
  return;
}

