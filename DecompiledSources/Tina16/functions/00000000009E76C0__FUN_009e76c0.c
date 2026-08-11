/* Ghidra address: 009e76c0 */
/* Ghidra symbol: FUN_009e76c0 */


void FUN_009e76c0(longlong *param_1)

{
  if ((int)param_1[4] == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,1);
  }
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return;
}

