/* Ghidra address: 005b3660 */
/* Ghidra symbol: FUN_005b3660 */


void FUN_005b3660(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b4540(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) < iVar1 + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

