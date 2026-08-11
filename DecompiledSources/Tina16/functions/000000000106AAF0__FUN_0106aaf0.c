/* Ghidra address: 0106aaf0 */
/* Ghidra symbol: FUN_0106aaf0 */


undefined8 FUN_0106aaf0(undefined8 param_1,undefined8 param_2)

{
  FUN_00414ad0(param_2,
               L"// Syntax Highlighting\r\nvoid __fastcall TForm1::Button1Click(TObject *Sender)\r\n{\r\n  int number = 123456;\r\n  char c = \'a\';\r\n  Caption = \"The number is \" + IntToStr(i);\r\n  for (int i = 0; i <= number; i++)\r\n  {\r\n    x -= 0xff;\r\n    x -= 023;\r\n    x += 1.0;\r\n    x += @; /* illegal character */\r\n  }\r\n  #ifdef USE_ASM\r\n    asm\r\n    {\r\n      ASM MOV AX, 0x1234\r\n      ASM MOV i, AX\r\n    }\r\n  #endif\r\n}"
              );
  return param_2;
}

