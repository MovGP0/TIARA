/* Ghidra address: 006efa40 */
/* Ghidra symbol: FUN_006efa40 */


void FUN_006efa40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006efc30(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) < iVar1 + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

