/* Ghidra address: 00af6af0 */
/* Ghidra symbol: FUN_00af6af0 */


void FUN_00af6af0(longlong param_1,int param_2)

{
  if ((param_2 != *(int *)(param_1 + 0x4c4)) && (-1 < param_2)) {
    if (param_2 < *(int *)(param_1 + 0x4c4)) {
      FUN_00af6b30(param_1);
    }
    FUN_00a77860(param_1,param_2);
  }
  return;
}

