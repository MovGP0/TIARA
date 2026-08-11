/* Ghidra address: 010ffe70 */
/* Ghidra symbol: FUN_010ffe70 */


void FUN_010ffe70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01cd6670(param_1);
  if (cVar1 == '\0') {
    FUN_0040c770((double)*(int *)(param_1 + 0x14) +
                 (double)(*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) / 2.0);
  }
  else {
    FUN_0040c770((double)*(int *)(param_1 + 0x20) -
                 (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) / 2.0);
  }
  return;
}

