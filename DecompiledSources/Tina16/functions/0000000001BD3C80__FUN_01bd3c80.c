/* Ghidra address: 01bd3c80 */
/* Ghidra symbol: FUN_01bd3c80 */


void FUN_01bd3c80(longlong param_1)

{
  code *pcVar1;
  
  FUN_00650b30(param_1);
  if (*(char *)(param_1 + 0x361) != '\0') {
    pcVar1 = (code *)FUN_00411550(param_1,0xffe9);
    (*pcVar1)(param_1);
  }
  return;
}

