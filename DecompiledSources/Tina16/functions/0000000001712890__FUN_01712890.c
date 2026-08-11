/* Ghidra address: 01712890 */
/* Ghidra symbol: FUN_01712890 */


void FUN_01712890(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  short *local_30;
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  lVar4 = FUN_00418560(0x58,&DAT_0170b9c8);
  FUN_00414ad0(lVar4,param_5);
  FUN_00414ad0(lVar4 + 0x40,local_res20);
  *(undefined1 *)(lVar4 + 0x49) = param_6;
  iVar1 = FUN_004170c0(&DAT_01713080,local_res18,1);
  if (iVar1 == 0) {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar4 + 8) = uVar5;
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    FUN_017109f0(&local_30,&local_res18);
    FUN_004144d0(lVar4 + 0x18);
    FUN_00414bf0(lVar4 + 0x20,"[Internal]");
    while ((local_30 != (short *)0x0 && (*local_30 != 0x5b))) {
      iVar1 = FUN_004170c0(&DAT_017130ac,local_30,1);
      if (iVar1 < 1) {
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x78))(*(longlong **)(lVar4 + 8),local_30);
        (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x78))(*(longlong **)(lVar4 + 0x10),local_30);
      }
      else {
        FUN_00416dc0(&local_50,local_30,1,iVar1 + -1);
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x78))(*(longlong **)(lVar4 + 8),local_50);
        uVar2 = 0;
        if (local_30 != (short *)0x0) {
          uVar2 = *(undefined4 *)(local_30 + -2);
        }
        FUN_00416dc0(&local_58,local_30,iVar1 + 1,uVar2);
        (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x78))(*(longlong **)(lVar4 + 0x10),local_58);
      }
      FUN_00414b50(&local_48,local_30);
      FUN_017109f0(&local_30,&local_res18);
    }
    iVar1 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x28))(*(longlong **)(lVar4 + 8));
    if (0 < iVar1) {
      plVar6 = *(longlong **)(lVar4 + 8);
      iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x98))(plVar6,iVar1 + -1);
      plVar6 = *(longlong **)(lVar4 + 0x10);
      iVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x98))(plVar6,iVar1 + -1);
    }
    if ((local_30 != (short *)0x0) && (*local_30 == 0x5b)) {
      FUN_00ea9ef0(&local_60,local_48);
      FUN_00415dd0(lVar4 + 0x18,local_60,0);
      if (local_res18 != 0) {
        iVar1 = FUN_004170c0(&DAT_017130bc,local_res18,1);
        if (0 < iVar1) {
          uVar2 = FUN_004170c0(&DAT_017130bc,local_res18,1);
          FUN_00416dc0(&local_68,local_res18,1,uVar2);
          FUN_00416ad0(&local_30,local_68);
        }
      }
      iVar1 = FUN_004170c0(&DAT_017130cc,local_30,1);
      if (iVar1 < 1) {
        FUN_00414480(lVar4 + 0x30);
      }
      else {
        iVar3 = 0;
        if (local_30 != (short *)0x0) {
          iVar3 = *(int *)(local_30 + -2);
        }
        FUN_00416dc0(lVar4 + 0x30,local_30,iVar1 + 1,(iVar3 - iVar1) + -1);
        iVar3 = 0;
        if (local_30 != (short *)0x0) {
          iVar3 = *(int *)(local_30 + -2);
        }
        FUN_00416e20(&local_30,iVar1,iVar3 - iVar1);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xb8))
                        (*(longlong **)(param_1 + 0xa8),local_30);
      if (-1 < iVar1) {
        FUN_004b5390(*(undefined8 *)(param_1 + 0xa8),&local_30,iVar1);
      }
      FUN_01715000(param_1,&local_70,local_30);
      FUN_00415dd0(lVar4 + 0x20,local_70,0);
    }
    FUN_004144d0(lVar4 + 0x28);
    FUN_00414480(lVar4 + 0x38);
  }
  else {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar4 + 8) = uVar5;
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    FUN_00414bf0(lVar4 + 0x18,"<AutoShape>");
    FUN_00414bf0(lVar4 + 0x20,"[Internal]");
    FUN_00414480(lVar4 + 0x30);
    FUN_004144d0(lVar4 + 0x28);
    FUN_00414480(lVar4 + 0x38);
  }
  *(undefined1 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x4c) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  iVar1 = FUN_00415a60(*(undefined8 *)(lVar4 + 0x20),"[Internal]");
  if (iVar1 != 0) {
    FUN_00416880(&local_78,*(undefined8 *)(lVar4 + 0x20));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                      (*(longlong **)(param_1 + 0x58),local_78);
    if (iVar3 == -1) {
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00416880(&local_80,*(undefined8 *)(lVar4 + 0x20));
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
                (*(longlong **)(param_1 + 0x58),local_80,plVar6);
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                         (*(longlong **)(param_1 + 0x58),iVar3);
    }
    (**(code **)(*plVar6 + 0x78))(plVar6,local_res10);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),local_res10,lVar4);
  FUN_00414b50(&local_30,*(undefined8 *)(lVar4 + 0x40));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                      (*(longlong **)(param_1 + 0x30),local_30);
    if (iVar1 == -1) {
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x80))
                (*(longlong **)(param_1 + 0x30),local_30,plVar6);
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                         (*(longlong **)(param_1 + 0x30),iVar1);
    }
    FUN_00416880(&local_88,*(undefined8 *)(lVar4 + 0x20));
    iVar1 = (**(code **)(*plVar6 + 0xb8))(plVar6,local_88);
    if (iVar1 == -1) {
      FUN_004156b0(&local_90,*(undefined8 *)(lVar4 + 0x20),&DAT_017130f4);
      FUN_00416880(&local_98,local_90);
      iVar1 = (**(code **)(*plVar6 + 0x78))(plVar6,local_98);
    }
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      FUN_004b5390(plVar6,&local_30,iVar1);
      if (local_30 == (short *)0x0) {
        FUN_00416cd0(&local_30,3,&DAT_01713104,*(undefined8 *)(lVar4 + 0x30),&DAT_01713104);
      }
      else {
        iVar3 = FUN_004170c0(*(undefined8 *)(lVar4 + 0x30),local_30,1);
        if (iVar3 == 0) {
          FUN_00416cd0(&local_30,4,local_30,&LAB_01713114,*(undefined8 *)(lVar4 + 0x30),
                       &DAT_01713104);
        }
      }
      FUN_004b5450(plVar6,iVar1,local_30);
    }
  }
  FUN_00414480(&local_98);
  FUN_004144d0(&local_90);
  FUN_00414560(&local_88,0xc);
  FUN_00414560(&local_res10,4);
  return;
}

