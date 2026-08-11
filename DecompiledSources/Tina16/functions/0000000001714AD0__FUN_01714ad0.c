/* Ghidra address: 01714ad0 */
/* Ghidra symbol: FUN_01714ad0 */


void FUN_01714ad0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
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
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
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
  FUN_017109f0(&local_48,&local_res18);
  FUN_00ea9ef0(&local_40,local_48);
  FUN_00415dd0(lVar4 + 0x18,local_40,0);
  FUN_017109f0(&local_38,&local_res18);
  if (local_res18 != 0) {
    iVar1 = FUN_004170c0(&DAT_01714fb0,local_res18,1);
    if (0 < iVar1) {
      uVar2 = FUN_004170c0(&DAT_01714fb0,local_res18,1);
      FUN_00416dc0(&local_50,local_res18,1,uVar2);
      FUN_00416ad0(&local_38,local_50);
    }
  }
  FUN_00415dd0(lVar4 + 0x20,local_38,0);
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    FUN_00414bf0(lVar4 + 0x20,"[Internal]");
  }
  FUN_00416880(&local_58,*(undefined8 *)(lVar4 + 0x20));
  iVar1 = FUN_004170c0(&DAT_01714fd8,local_58,1);
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
    FUN_00416880(&local_60,*(undefined8 *)(lVar4 + 0x20));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))
                      (*(longlong **)(param_1 + 0x78),local_60);
    if (iVar3 == -1) {
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00416880(&local_68,*(undefined8 *)(lVar4 + 0x20));
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x80))
                (*(longlong **)(param_1 + 0x78),local_68,plVar6);
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                         (*(longlong **)(param_1 + 0x78),iVar3);
    }
    (**(code **)(*plVar6 + 0x78))(plVar6,local_res10);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
            (*(longlong **)(param_1 + 0x28),local_res10,lVar4);
  FUN_00414b50(&local_30,*(undefined8 *)(lVar4 + 0x40));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb8))
                      (*(longlong **)(param_1 + 0x50),local_30);
    if (iVar1 == -1) {
      FUN_00416880(&local_78,*(undefined8 *)(lVar4 + 0x20));
      FUN_00416cd0(&local_70,3,local_30,&DAT_01714fe8,local_78);
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))(*(longlong **)(param_1 + 0x50),local_70)
      ;
    }
    else {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x50),&local_38,iVar1);
      FUN_00416880(&local_80,*(undefined8 *)(lVar4 + 0x20));
      iVar3 = FUN_004170c0(local_80,local_38,1);
      if (iVar3 == 0) {
        FUN_00416880(&local_88,*(undefined8 *)(lVar4 + 0x20));
        FUN_00416cd0(&local_38,3,local_38,&LAB_01714ff8,local_88);
        FUN_004b5450(*(undefined8 *)(param_1 + 0x50),iVar1,local_38);
      }
    }
  }
  FUN_00414560(&local_88,0xc);
  FUN_00414560(&local_res10,4);
  return;
}

