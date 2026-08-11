/* Ghidra address: 01ca0f80 */
/* Ghidra symbol: FUN_01ca0f80 */


void FUN_01ca0f80(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int local_7c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1528) + 0x310);
  lVar9 = *(longlong *)(param_1 + 0x1528);
  FUN_00498370(local_58,*(undefined4 *)(lVar9 + 0x90),*(undefined4 *)(lVar9 + 0x94),
               *(undefined4 *)(lVar9 + 0x98),*(undefined4 *)(lVar9 + 0x9c));
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_58);
  lVar9 = *(longlong *)(param_1 + 0x1508);
  FUN_00498350(&local_38,*(int *)(lVar9 + 0x90),*(int *)(lVar9 + 0x94),
               *(int *)(lVar9 + 0x90) + *(int *)(lVar9 + 0x98),
               *(int *)(lVar9 + 0x94) + *(int *)(lVar9 + 0x9c));
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x2500) + 0x10);
  local_7c = 0;
  if (-1 < iVar10 + -1) {
    do {
      plVar8 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),local_7c);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2e0))(plVar8);
      local_48 = local_38;
      uStack_40 = local_30;
      lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),local_7c);
      if (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) == lVar9) {
        FUN_005fdab0(plVar1[0x10],0xff000014);
        FUN_00498350(local_58,(int)local_38 + 2,local_38._4_4_ + 2,(int)local_30 + -2,
                     local_30._4_4_ + -2);
        (**(code **)(*plVar1 + 0xa8))(plVar1,local_58);
        FUN_00741000(*(undefined8 *)(*(longlong *)(param_1 + 0x1528) + 0x310),&local_38,0xff000012,
                     0xff000014,1);
        iVar7 = 2;
      }
      else {
        FUN_00741000(*(undefined8 *)(*(longlong *)(param_1 + 0x1528) + 0x310),&local_38,0xff000014,
                     0xff000012,1);
        iVar7 = 1;
      }
      uVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
      iVar4 = thunk_FUN_03f3ed25(uVar3,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
      iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (iVar5 < iVar4) {
        iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
        sVar2 = (short)((longlong)(iVar4 - iVar5) / 2);
      }
      else {
        sVar2 = 0;
      }
      uVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
      uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
      FUN_00498370(local_58,(int)local_38 + iVar7 + (int)sVar2,local_38._4_4_ + iVar7 + (int)sVar2,
                   uVar3,uVar6);
      uVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
      uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
      FUN_00498370(local_68,0,0,uVar3,uVar6);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_58,plVar8,local_68,0x800080);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x1508) + 0x98) + 2;
      local_38._0_4_ = (int)local_48;
      local_38._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 + iVar7);
      local_30._0_4_ = (int)uStack_40;
      local_30._4_4_ = (int)((ulonglong)uStack_40 >> 0x20);
      local_30 = CONCAT44(local_30._4_4_,(int)local_30 + iVar7);
      local_7c = local_7c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

