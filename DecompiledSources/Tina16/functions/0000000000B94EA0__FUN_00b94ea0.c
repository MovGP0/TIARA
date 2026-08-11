/* Ghidra address: 00b94ea0 */
/* Ghidra symbol: FUN_00b94ea0 */


void FUN_00b94ea0(longlong *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    (**(code **)(*param_1 + 8))(param_1,0xffffffff,0);
  }
  else {
    FUN_00409a70(param_1[1] + (longlong)(param_2 + 1) * 8,param_1[1] + (longlong)param_2 * 8,
                 (longlong)((((int)param_1[2] - param_2) + -1) * 8));
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  return;
}

