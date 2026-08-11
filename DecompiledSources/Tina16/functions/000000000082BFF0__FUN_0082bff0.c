/* Ghidra address: 0082bff0 */
/* Ghidra symbol: FUN_0082bff0 */


void FUN_0082bff0(longlong *param_1,int param_2)

{
  if ((param_2 != (int)param_1[0xa6]) && (-2 < param_2)) {
    *(int *)(param_1 + 0xa6) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

