/* Ghidra address: 00a3e7f0 */
/* Ghidra symbol: FUN_00a3e7f0 */


int FUN_00a3e7f0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_34;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00a3ecc0(param_1);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_0041ddd0(local_20,&PTR_PTR_00a3d768);
    FUN_00a3d980(local_20[0]);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (-1 < param_2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
    if (param_2 < iVar2) goto LAB_00a3e892;
  }
  FUN_0041ddd0(&local_28,&PTR_PTR_00a3d778);
  uVar4 = FUN_0044d490(&PTR_FUN_005f23c8,1,local_28);
  FUN_004134c0(uVar4);
LAB_00a3e892:
  thunk_FUN_03a15344();
  local_34 = param_2;
  if (0 < *(int *)(lVar1 + 8)) {
    local_34 = (*(int *)(lVar1 + 8) - param_2) + -1;
  }
  iVar3 = FUN_00a3d9f0(*(undefined4 *)(lVar1 + 4),*(undefined2 *)(lVar1 + 0xe),0x20);
  iVar2 = *(int *)(param_1 + 0x20);
  FUN_00414560(&local_28,2);
  return iVar2 + local_34 * iVar3;
}

