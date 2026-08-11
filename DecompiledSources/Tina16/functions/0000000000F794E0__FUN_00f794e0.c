/* Ghidra address: 00f794e0 */
/* Ghidra symbol: FUN_00f794e0 */


int FUN_00f794e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  longlong local_res10;
  undefined8 local_res18;
  int local_c0;
  int local_bc;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_0043ea00(&local_40,local_res10);
  FUN_00414b50(&local_res10,local_40);
  FUN_00416cd0(&local_res10,3,local_res18,local_res10,&DAT_00f79bf0);
  iVar6 = 1;
  bVar7 = 1;
  while( true ) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
    if (!(bool)(bVar7 & iVar6 < iVar4)) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_48,iVar6);
    FUN_00416cd0(local_30,3,&DAT_00f79bf0,local_48,&DAT_00f79bf0);
    iVar6 = iVar6 + 1;
    FUN_00450070(&local_50,local_30[0],&DAT_00f79c00,&DAT_00f79bf0,1);
    FUN_00414b50(local_30,local_50);
    FUN_004170c0(L"Interrupt Vectors",local_30[0],1);
    FUN_004170c0(L"BIT POSITIONS",local_30[0],1);
    local_bc = FUN_004170c0(local_res10,local_30[0],1);
    iVar4 = FUN_004170c0(&DAT_00f79c6c,local_30[0],1);
    if ((local_bc != 0) && ((iVar4 == 0 || (local_bc < iVar4)))) {
      FUN_0043e130(&local_58,local_30[0]);
      FUN_00414b50(local_30,local_58);
      iVar4 = FUN_004170c0(L".EQU",local_30[0],1);
      if (iVar4 == 0) {
        iVar1 = FUN_004170c0(&DAT_00f79cc4,local_30[0],1);
        iVar4 = 0;
        if (local_30[0] != 0) {
          iVar4 = *(int *)(local_30[0] + -4);
        }
        FUN_005b8850(&local_38,local_30[0],(iVar4 - local_bc) + 1);
        iVar4 = 0;
        if (local_38 != 0) {
          iVar4 = *(int *)(local_38 + -4);
        }
        FUN_005b8820(&local_78,local_38,(iVar1 - local_bc) + -1);
        FUN_00414b50(&local_38,local_78);
        FUN_0043ea00(&local_80,local_38);
        FUN_00414b50(&local_38,local_80);
        FUN_0043ea00(&local_88,local_res10);
        FUN_00414b50(&local_res10,local_88);
        iVar3 = 0;
        if (local_res10 != 0) {
          iVar3 = *(int *)(local_res10 + -4);
        }
        iVar5 = 0;
        if (local_38 != 0) {
          iVar5 = *(int *)(local_38 + -4);
        }
        if (iVar3 == iVar5) {
          iVar4 = 0;
          if (local_30[0] != 0) {
            iVar4 = *(int *)(local_30[0] + -4);
          }
          FUN_005b8850(&local_38,local_30[0],(iVar4 - iVar1) + -3);
          FUN_005b8820(&local_90,local_38,10);
          FUN_00414b50(&local_38,local_90);
          FUN_0043ea00(&local_98,local_38);
          FUN_00414b50(&local_38,local_98);
          iVar4 = FUN_004170c0(&DAT_00f79c6c,local_38,1);
          if (iVar4 != 0) {
            FUN_005b8820(&local_a0,local_38,iVar4 + -1);
            FUN_00414b50(&local_38,local_a0);
          }
          iVar4 = FUN_004170c0(&DAT_00f79cb4,local_38,1);
          FUN_0043ea00(&local_a8,local_38);
          FUN_00414b50(&local_38,local_a8);
          FUN_005b8850(&local_b0,local_38,1);
          iVar1 = FUN_00416db0(local_b0,&DAT_00f79cd8);
          if (iVar1 == 0) {
            iVar1 = 0;
            if (local_38 != 0) {
              iVar1 = *(int *)(local_38 + -4);
            }
            FUN_005b8820(&local_b8,local_38,iVar1 + -1);
            FUN_00414b50(&local_38,local_b8);
          }
        }
        if (iVar4 == 0) {
          local_bc = FUN_0043fc00(local_38);
        }
        else {
          local_bc = FUN_00f79ce0(param_1,local_38);
        }
        bVar7 = 0;
      }
      else {
        iVar1 = FUN_004170c0(&DAT_00f79c94,local_30[0],1);
        iVar4 = 0;
        if (local_30[0] != 0) {
          iVar4 = *(int *)(local_30[0] + -4);
        }
        FUN_005b8850(&local_38,local_30[0],(iVar4 - iVar1) + -1);
        uVar2 = FUN_004170c0(&DAT_00f79bf0,local_38,1);
        FUN_005b8820(&local_60,local_38,uVar2);
        FUN_00414b50(&local_38,local_60);
        FUN_0043ea00(&local_68,local_38);
        FUN_00414b50(&local_38,local_68);
        iVar4 = FUN_004170c0(&DAT_00f79ca4,local_38,1);
        if (iVar4 != 0) {
          iVar4 = 0;
          if (local_38 != 0) {
            iVar4 = *(int *)(local_38 + -4);
          }
          FUN_005b8850(&local_70,local_38,iVar4 + -1);
          FUN_00416ba0(&local_38,local_70,&DAT_00f79cb4);
        }
        local_bc = FUN_00f79ce0(param_1,local_38);
        bVar7 = 0;
      }
    }
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (iVar6 == iVar4) {
    local_c0 = -1;
  }
  else {
    local_c0 = local_bc;
  }
  FUN_00414560(&local_b8,0x12);
  FUN_00414560(&local_res10,2);
  return local_c0;
}

