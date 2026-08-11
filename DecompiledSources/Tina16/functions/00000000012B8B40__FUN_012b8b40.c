/* Ghidra address: 012b8b40 */
/* Ghidra symbol: FUN_012b8b40 */


void FUN_012b8b40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res10 [3];
  undefined4 uVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int aiStack_44 [3];
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_017cd4e0(&local_50,*(undefined8 *)(param_1 + 0x750),param_3,*(undefined8 *)(param_1 + 0x748),0
              );
  FUN_017cd4e0(&local_58,*(undefined8 *)(param_1 + 0x750),param_4,*(undefined8 *)(param_1 + 0x748),0
              );
  FUN_00416cd0(&local_30,7,&DAT_012b90fc,local_res10[0],&DAT_012b910c,local_50,&DAT_012b911c,
               local_58,&DAT_012b912c);
  FUN_017cd4e0(&local_60,*(undefined8 *)(param_1 + 0x750),param_4,*(undefined8 *)(param_1 + 0x748),0
              );
  FUN_017cd4e0(&local_68,*(undefined8 *)(param_1 + 0x750),param_3,*(undefined8 *)(param_1 + 0x748),0
              );
  uVar9 = 0;
  FUN_00416cd0(&local_38,7,&DAT_012b90fc,local_res10[0],&DAT_012b910c,local_60,&DAT_012b911c,
               local_68,&DAT_012b912c);
  iVar7 = 1;
  aiStack_44[1] = -1;
  aiStack_44[2] = -1;
  plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  iVar3 = (**(code **)(*plVar5 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,iVar6);
      iVar4 = FUN_004170c0(local_30,local_70,1);
      if (iVar4 < 1) {
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_78,iVar6);
        iVar4 = FUN_004170c0(local_38,local_78,1);
        if (0 < iVar4) goto LAB_012b8e1e;
        bVar2 = false;
      }
      else {
LAB_012b8e1e:
        bVar2 = true;
      }
      if (bVar2) {
        aiStack_44[iVar7] = iVar6;
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar6 = aiStack_44[2];
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  iVar3 = *(int *)(lVar1 + 0x4ec);
  if ((((-1 < aiStack_44[1]) && (aiStack_44[1] < iVar3)) ||
      ((-1 < aiStack_44[2] && (iVar7 = FUN_00848350(lVar1), iVar3 + iVar7 <= iVar6)))) &&
     (iVar3 = FUN_00848350(lVar1), iVar3 < *(int *)(lVar1 + 0x4e0))) {
    FUN_00848d30(lVar1,aiStack_44[1]);
  }
  plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
  iVar3 = (**(code **)(*plVar5 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,iVar6);
      iVar7 = FUN_004170c0(local_30,local_80,1);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      if (iVar7 < 1) {
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_88,iVar6);
        iVar7 = FUN_004170c0(local_38,local_88,1);
        uVar10 = (undefined4)(uVar9 >> 0x20);
        if (0 < iVar7) goto LAB_012b8f42;
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar5 + 0x48))(plVar5,iVar6,0);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_98,0,iVar6);
        uVar9 = uVar9 & 0xffffffff00000000;
        FUN_012b8960(param_1,0,iVar6,local_98,uVar9);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_98,1,iVar6);
        uVar9 = uVar9 & 0xffffffff00000000;
        FUN_012b8960(param_1,1,iVar6,local_98,uVar9);
      }
      else {
LAB_012b8f42:
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x6d0),0);
        (**(code **)(*plVar5 + 0x48))(plVar5,iVar6,1);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_98,0,iVar6);
        uVar8 = CONCAT44(uVar10,0xff);
        FUN_012b8960(param_1,0,iVar6,local_98,uVar8);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_98,1,iVar6);
        uVar9 = CONCAT44(uVar10,0xff);
        FUN_012b8960(param_1,1,iVar6,local_98,uVar9);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_88,8);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

