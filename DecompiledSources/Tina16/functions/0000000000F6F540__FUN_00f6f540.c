/* Ghidra address: 00f6f540 */
/* Ghidra symbol: FUN_00f6f540 */


void FUN_00f6f540(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(local_20,local_res10[0]);
  FUN_00414ad0(param_1 + 0x1e,local_res10[0]);
  lVar2 = FUN_00f6f4e0(param_1);
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  if (iVar1 < iVar3) {
    FUN_00416dc0(local_20,local_res10[0],1,iVar1 + -3);
    FUN_00416ad0(local_20,&LAB_00f6f634);
  }
  FUN_00414ad0(lVar2 + 0x60,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

