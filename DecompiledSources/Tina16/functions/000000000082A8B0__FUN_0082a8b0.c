/* Ghidra address: 0082a8b0 */
/* Ghidra symbol: FUN_0082a8b0 */


void FUN_0082a8b0(longlong param_1)

{
  code *pcVar1;
  
  FUN_00650b30(param_1);
  if (*(char *)(param_1 + 0x328) != '\0') {
    pcVar1 = (code *)FUN_00411550(param_1,0xffe9);
    (*pcVar1)(param_1);
  }
  return;
}

