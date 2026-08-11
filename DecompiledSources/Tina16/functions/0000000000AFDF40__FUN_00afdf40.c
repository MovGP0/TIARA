/* Ghidra address: 00afdf40 */
/* Ghidra symbol: FUN_00afdf40 */


undefined8 FUN_00afdf40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  int local_48;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_38 = param_2;
  iVar2 = FUN_00aa6a10(*(undefined8 *)(param_1 + 0x8b0));
  if (iVar2 < 1) {
    FUN_004144d0(local_38);
  }
  else {
    FUN_00af6e30(param_1,&local_20);
    iVar3 = FUN_00afe5b0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0x9c));
    iVar2 = FUN_00afe5b0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0xa0));
    lVar1 = *(longlong *)(param_1 + 0x8c8);
    if (lVar1 != 0) {
      iVar3 = iVar3 - *(int *)(lVar1 + 0x34);
      iVar2 = iVar2 - *(int *)(lVar1 + 0x34);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(*(longlong *)(lVar1 + 0x28) + 0x18);
      }
      if (iVar4 == 0x4b0) {
        bVar5 = true;
      }
      else {
        if (*(longlong *)(lVar1 + 0x28) == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = *(int *)(*(longlong *)(lVar1 + 0x28) + 0x18);
        }
        bVar5 = iVar4 == 0x4b1;
      }
      if ((bVar5) && (iVar3 = iVar3 / 2, 0 < iVar2)) {
        iVar2 = iVar2 / 2;
      }
    }
    if (iVar2 < 0) {
      iVar2 = 0;
      if (local_20 != 0) {
        iVar2 = *(int *)(local_20 + -4);
      }
      if (*(short *)(local_20 + -2 + (longlong)iVar2 * 2) == 0x3e) {
        FUN_00416ad0(&local_20,&LAB_00afe0f4);
        iVar2 = iVar2 + 1;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
    local_48 = iVar2;
    FUN_00afdd80(auStack_68,local_30,local_20,iVar3 + 1);
    FUN_00414bf0(local_38,local_30[0]);
  }
  FUN_004144d0(local_30);
  FUN_00414480(&local_20);
  return local_38;
}

