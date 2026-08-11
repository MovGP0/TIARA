/* Ghidra address: 00c742a0 */
/* Ghidra symbol: FUN_00c742a0 */


void FUN_00c742a0(longlong *param_1,int param_2)

{
  if ((param_2 != (int)param_1[0xa7]) && (-2 < param_2)) {
    *(int *)(param_1 + 0xa7) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

