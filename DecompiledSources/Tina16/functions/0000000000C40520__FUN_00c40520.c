/* Ghidra address: 00c40520 */
/* Ghidra symbol: FUN_00c40520 */


undefined8 FUN_00c40520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar3 = 0;
  while( true ) {
    if (iVar3 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),iVar3);
      FUN_00441920(&local_28,*(undefined8 *)(lVar2 + 0x20));
      FUN_004414c0(local_20,local_28,0);
      iVar1 = FUN_0044fdb0(local_res18[0],local_20[0]);
      bVar4 = iVar1 != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),iVar3);
    FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x20));
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return param_2;
}

