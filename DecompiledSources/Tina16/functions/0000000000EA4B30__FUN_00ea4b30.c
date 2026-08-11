/* Ghidra address: 00ea4b30 */
/* Ghidra symbol: FUN_00ea4b30 */


longlong * FUN_00ea4b30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (*(int *)(param_1 + 0x504) < 1) {
    FUN_00ea3290();
  }
  FUN_00ea3ca0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48),param_1,param_2);
  }
  FUN_00414b50(local_20,*param_2);
  iVar2 = FUN_00ea4640(param_1,0);
  uVar3 = FUN_00ea4580(param_1,0);
  FUN_00416e20(param_1 + 0x20,iVar2 + 1,uVar3);
  if (*param_2 != 0) {
    iVar2 = FUN_00ea4640(param_1,0);
    FUN_00416ea0(local_20[0],param_1 + 0x20,iVar2 + 1);
  }
  iVar4 = FUN_00ea4580(param_1,0);
  lVar1 = local_20[0];
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x28) - iVar4) + iVar2;
  iVar4 = FUN_00ea4580(param_1,0);
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + -4);
  }
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) - iVar4) + iVar2;
  FUN_00ea3390(param_1);
  *(undefined4 *)(param_1 + 0x504) = 0;
  FUN_00414480(local_20);
  return param_2;
}

