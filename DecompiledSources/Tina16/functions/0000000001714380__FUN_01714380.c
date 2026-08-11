/* Ghidra address: 01714380 */
/* Ghidra symbol: FUN_01714380 */


void FUN_01714380(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
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
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(lVar4 + 8) = uVar5;
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  FUN_017109f0(&local_68,&local_res18);
  FUN_00ea9ef0(local_60,local_68);
  FUN_00415dd0(lVar4 + 0x18,local_60[0],0);
  FUN_017109f0(&local_38,&local_res18);
  if (local_res18 != 0) {
    iVar1 = FUN_004170c0(&DAT_01714a70,local_res18,1);
    if (0 < iVar1) {
      uVar2 = FUN_004170c0(&DAT_01714a70,local_res18,1);
      FUN_00416dc0(&local_70,local_res18,1,uVar2);
      FUN_00416ad0(&local_38,local_70);
    }
  }
  FUN_00415dd0(lVar4 + 0x20,local_38,0);
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    FUN_00414bf0(lVar4 + 0x20,"[Internal]");
  }
  FUN_00416880(&local_78,*(undefined8 *)(lVar4 + 0x20));
  iVar1 = FUN_004170c0(&DAT_01714a98,local_78,1);
  if (0 < iVar1) {
    iVar3 = 0;
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x20) + -4);
    }
    FUN_00415b50(lVar4 + 0x20,iVar1,iVar3 - iVar1);
  }
  FUN_00414480(lVar4 + 0x30);
  FUN_004144d0(lVar4 + 0x28);
  FUN_00414480(lVar4 + 0x38);
  *(undefined1 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x4c) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  iVar1 = FUN_00415a60(*(undefined8 *)(lVar4 + 0x20),"[Internal]");
  if (iVar1 != 0) {
    FUN_00416880(&local_80,*(undefined8 *)(lVar4 + 0x20));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xb0))
                      (*(longlong **)(param_1 + 0x70),local_80);
    if (iVar3 == -1) {
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00416880(&local_88,*(undefined8 *)(lVar4 + 0x20));
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x80))
                (*(longlong **)(param_1 + 0x70),local_88,plVar6);
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                         (*(longlong **)(param_1 + 0x70),iVar3);
    }
    (**(code **)(*plVar6 + 0x78))(plVar6,local_res10);
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))
            (*(longlong **)(param_1 + 0x20),local_res10,lVar4);
  FUN_00414b50(local_30,*(undefined8 *)(lVar4 + 0x40));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xb8))
                      (*(longlong **)(param_1 + 0x48),local_30[0]);
    if (iVar1 == -1) {
      FUN_00416880(&local_98,*(undefined8 *)(lVar4 + 0x20));
      FUN_00416cd0(&local_90,3,local_30[0],&DAT_01714aa8,local_98);
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))(*(longlong **)(param_1 + 0x48),local_90)
      ;
    }
    else {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x48),&local_38,iVar1);
      FUN_00416880(&local_a0,*(undefined8 *)(lVar4 + 0x20));
      iVar3 = FUN_004170c0(local_a0,local_38,1);
      if (iVar3 == 0) {
        FUN_00416880(&local_a8,*(undefined8 *)(lVar4 + 0x20));
        FUN_00416cd0(&local_38,3,local_38,&DAT_01714ab8,local_a8);
        FUN_004b5450(*(undefined8 *)(param_1 + 0x48),iVar1,local_38);
      }
    }
  }
  iVar1 = FUN_004413f0(&DAT_01714ac8,local_res10);
  if (iVar1 < 1) {
    FUN_00414b50(&local_40,local_res10);
    FUN_004144d0(&local_48);
  }
  else {
    FUN_00416dc0(&local_b0,local_res10,1,iVar1 + -1);
    FUN_0043ea00(&local_40,local_b0);
    uVar2 = 0;
    if (local_res10 != 0) {
      uVar2 = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_c0,local_res10,iVar1 + 1,uVar2);
    FUN_0043ea00(&local_b8,local_c0);
    FUN_00415dd0(&local_48,local_b8,0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb0))
                    (*(longlong **)(param_1 + 0x88),local_40);
  if (iVar1 == -1) {
    plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))
              (*(longlong **)(param_1 + 0x88),local_40,plVar6);
  }
  else {
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                       (*(longlong **)(param_1 + 0x88),iVar1);
  }
  if (local_48 != 0) {
    FUN_00416880(&local_c8,local_48);
    (**(code **)(*plVar6 + 0x80))(plVar6,local_c8,lVar4);
  }
  FUN_00414560(&local_c8,0xe);
  FUN_00414590(&local_50,2);
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res10,4);
  return;
}

