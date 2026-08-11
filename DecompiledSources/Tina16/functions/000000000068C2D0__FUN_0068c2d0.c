/* Ghidra address: 0068c2d0 */
/* Ghidra symbol: FUN_0068c2d0 */


undefined8 * FUN_0068c2d0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))(*(longlong **)(param_1 + 0x4a0));
  if ((param_3 == 0) || (param_3 < iVar1)) {
    FUN_0068bc00(param_1,param_2,param_3);
  }
  else if (param_3 == iVar1) {
    FUN_0068bc00(param_1,param_2,param_3 + -1);
    FUN_00423b50(param_2,0,*(int *)((longlong)param_2 + 0xc) - *(int *)((longlong)param_2 + 4));
  }
  else {
    FUN_00423010(&local_38,0,0,0,0);
    *param_2 = local_38;
    param_2[1] = uStack_30;
  }
  return param_2;
}

