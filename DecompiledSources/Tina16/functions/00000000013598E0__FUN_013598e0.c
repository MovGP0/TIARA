/* Ghidra address: 013598e0 */
/* Ghidra symbol: FUN_013598e0 */


void FUN_013598e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  local_40 = param_1;
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar2 = local_40;
  iVar4 = 0;
  iVar5 = *(int *)(local_40 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_00b94e60(lVar2,iVar4);
      FUN_01359730(auStack_68,uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar2 = local_40;
  iVar4 = 0;
  iVar5 = *(int *)(local_40 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_00b94e60(lVar2,iVar4);
      FUN_013597b0(auStack_68,uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(local_30 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(local_30,iVar4);
      FUN_017ff4f0(*(undefined8 *)(lVar2 + 8),&local_38);
      lVar2 = FUN_004aeac0(local_30,iVar4);
      FUN_0198b6d0(local_40,*(undefined8 *)(lVar2 + 8));
      lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x18a0);
      if (lVar2 != 0) {
        lVar3 = FUN_004aeac0(local_30,iVar4);
        FUN_0198b6a0(lVar2,*(undefined8 *)(lVar3 + 8));
      }
      uVar1 = FUN_004aeac0(local_30,iVar4);
      FUN_004095f0(uVar1);
      FUN_0135ac90(DAT_02108128,local_38);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (0 < *(int *)(local_30 + 0x10)) {
    FUN_00b95360(local_40);
    if (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x18a0) != 0) {
      FUN_00b95360(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x18a0));
    }
  }
  FUN_00410f20(local_30);
  FUN_00414480(&local_38);
  return;
}

