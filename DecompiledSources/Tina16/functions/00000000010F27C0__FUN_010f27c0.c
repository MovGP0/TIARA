/* Ghidra address: 010f27c0 */
/* Ghidra symbol: FUN_010f27c0 */


void FUN_010f27c0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar9 = 0;
  plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d8),0);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  plVar4 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d8),1);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  iVar7 = *(int *)(param_1 + 0x6f0);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x6e0),iVar8);
      iVar7 = iVar7 + (uint)*(ushort *)(lVar5 + 0x12);
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x438);
  (**(code **)(*plVar4 + 0x48))(plVar4,iVar7,0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  lVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x6e0),uVar3);
  uVar10 = (uint)*(byte *)(lVar5 + 0x14);
  iVar7 = 0;
  if (-1 < (int)(uVar10 - 1)) {
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x6e0);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))
                        (*(longlong **)(param_1 + 0x6d0));
      uVar6 = FUN_01d347d0(uVar1,uVar3);
      FUN_010f20b0(uVar1,uVar6,iVar7,*(undefined8 *)(param_1 + 0x6f8),&local_30,&local_38,
                   &PTR_DAT_010f2b64);
      while (iVar2 = FUN_004170c0(&DAT_010f2b78,local_30,1), 0 < iVar2) {
        iVar2 = FUN_004170c0(&DAT_010f2b78,local_30,1);
        FUN_00416dc0(&local_40,local_30,1,iVar2 + -1);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,iVar9,local_40);
        uVar3 = FUN_004170c0(&DAT_010f2b78,local_30,1);
        FUN_00416e20(&local_30,1,uVar3);
        FUN_00416880(&local_50,local_38);
        iVar2 = FUN_004170c0(&DAT_010f2b78,local_50,1);
        FUN_00415ad0(&local_48,local_38,1,iVar2 + -1);
        FUN_00416880(&local_58,local_48);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,iVar9,local_58);
        FUN_00416880(&local_60,local_38);
        uVar3 = FUN_004170c0(&DAT_010f2b78,local_60,1);
        FUN_00415b50(&local_38,1,uVar3);
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d8),iVar9);
  FUN_00414560(&local_60,3);
  FUN_004144d0(&local_48);
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(&local_30);
  return;
}

