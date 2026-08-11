/* Ghidra address: 00614880 */
/* Ghidra symbol: FUN_00614880 */


void FUN_00614880(longlong param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xfff6);
    (*pcVar1)(param_1);
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}

