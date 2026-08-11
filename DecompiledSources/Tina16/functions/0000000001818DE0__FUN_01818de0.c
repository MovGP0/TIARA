/* Ghidra address: 01818de0 */
/* Ghidra symbol: FUN_01818de0 */


void FUN_01818de0(longlong *param_1,int param_2)

{
  FUN_0065abb0(param_1,param_2);
  if (param_2 != (int)param_1[0x96]) {
    (**(code **)(*param_1 + 0x268))(param_1,param_2);
    *(int *)(param_1 + 0x96) = param_2;
  }
  return;
}

