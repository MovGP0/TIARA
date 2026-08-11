/* Ghidra address: 007e2fb0 */
/* Ghidra symbol: FUN_007e2fb0 */


void FUN_007e2fb0(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[0x11]) {
    *(int *)(param_1 + 0x11) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

