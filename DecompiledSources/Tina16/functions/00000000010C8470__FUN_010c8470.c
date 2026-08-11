/* Ghidra address: 010c8470 */
/* Ghidra symbol: FUN_010c8470 */


void FUN_010c8470(longlong param_1)

{
  char cVar1;
  
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) ^ 0x8000000000000000;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000000000000;
  cVar1 = FUN_010c7e80(param_1);
  if (cVar1 != '\0') {
    FUN_010c7a80(param_1);
  }
  return;
}

