/* Ghidra address: 007dd370 */
/* Ghidra symbol: FUN_007dd370 */


void FUN_007dd370(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e2ef0(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) < iVar1 + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

