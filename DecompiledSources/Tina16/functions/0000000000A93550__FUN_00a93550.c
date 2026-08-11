/* Ghidra address: 00a93550 */
/* Ghidra symbol: FUN_00a93550 */


int * FUN_00a93550(longlong *param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar1 == 0) {
    FUN_00aa6360(param_1[3],param_2);
  }
  else {
    *param_2 = *(int *)(lVar1 + 0x52c);
    param_2[1] = *(int *)(lVar1 + 0x528);
    param_2[2] = *param_2 + *(int *)(lVar1 + 0x514);
    param_2[3] = (param_2[1] + *(int *)(*(longlong *)(lVar1 + 0xa8) + 0x4c)) -
                 *(int *)(*(longlong *)(lVar1 + 0xa8) + 0x48);
  }
  return param_2;
}

