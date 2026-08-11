/* Ghidra address: 00c40270 */
/* Ghidra symbol: FUN_00c40270 */


void FUN_00c40270(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  for (iVar4 = 0; iVar4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10); iVar4 = iVar4 + 1) {
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),iVar4);
    FUN_0043e130(&local_40,*(undefined8 *)(lVar2 + 0x20));
    FUN_00441920(&local_38,local_40);
    FUN_004414c0(local_30,local_38,0);
    iVar1 = FUN_00416db0(param_2,local_30[0]);
    if (iVar1 == 0) break;
  }
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
  FUN_00414b50(local_20,*(undefined8 *)(lVar2 + 0x20));
  uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
  FUN_00c3fba0(uVar3,local_20[0]);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

