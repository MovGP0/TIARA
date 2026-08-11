/* Ghidra address: 010629c0 */
/* Ghidra symbol: FUN_010629c0 */


void FUN_010629c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_120 [9];
  longlong *local_d8;
  longlong *local_d0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_130 = auStack_1b8;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_138 = 0;
  local_140 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_20 = 0;
  local_30 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_120,&DAT_010571b8);
  local_d0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_58 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_010637f0(param_1,*(undefined4 *)(param_1 + 8),local_120);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"GetBoard");
    FUN_004134c0(uVar2);
  }
  local_38 = FUN_0105a4c0(&DAT_01057970,1);
  FUN_0105a7a0(local_38,local_120[0]);
  FUN_01063f80(param_1,local_38);
  local_40 = FUN_0105a0d0(&DAT_01057408,1);
  FUN_00414ad0(local_40 + 0x18,*(undefined8 *)(PTR_DAT_020030c0 + 0x48));
  FUN_00414ad0(local_40 + 0x20,*(undefined8 *)(local_40 + 0x18));
  cVar1 = FUN_0105f390(local_40,local_38,0);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_140,PTR_PTR_02001330);
    local_150 = local_120[0];
    local_148 = 0x11;
    FUN_00442f70(&local_138,local_140,&local_150,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_138);
    FUN_004134c0(uVar2);
  }
  if (local_res10[0] == 0) {
    FUN_0160e170(*(undefined8 *)(param_1 + 0x18),local_40);
  }
  else {
    FUN_00414ad0(local_40 + 0x78,local_res10[0]);
  }
  FUN_0105aba0(local_38,*(undefined8 *)(param_1 + 0x20),local_40,local_120);
  FUN_0105d2f0(local_38,*(undefined8 *)(local_40 + 0x10));
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x10);
  local_bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_b8 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0x10),local_bc);
      cVar1 = FUN_010af9d0(local_b8);
      if ((cVar1 == '\0') && (*(int *)(local_b8 + 0x4c) == 1)) {
        FUN_010af830(local_b8,&local_158);
        (**(code **)(*local_48 + 0x78))(local_48,local_158);
      }
      local_bc = local_bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_88);
  local_d8 = (longlong *)FUN_01b21480(*(undefined8 *)(local_40 + 0x78));
  iVar3 = (**(code **)(*local_d8 + 0x28))();
  local_bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_d8 + 0x18))(local_d8,&local_80,local_bc);
      FUN_0105a1e0(local_40,&local_160,local_80);
      FUN_00416ba0(&local_20,local_160,local_80);
      cVar1 = FUN_00440b00(local_20,1);
      if (cVar1 != '\0') {
        FUN_010627e0(auStack_1b8);
        if (local_88 == 0) {
          FUN_00414b50(&local_88,local_30);
        }
        else {
          local_198 = local_30;
          FUN_00416cd0(&local_88,3,local_88,&DAT_01063614);
        }
      }
      local_bc = local_bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1 + 0x30,local_88);
  FUN_00410f20(local_d8);
  local_d8 = (longlong *)FUN_01b21480(*(undefined8 *)(local_40 + 0x80));
  FUN_00414480(param_1 + 0x38);
  iVar3 = (**(code **)(*local_d8 + 0x28))();
  local_bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_d8 + 0x18))(local_d8,&local_80,local_bc);
      FUN_0105a3c0(local_40,&local_168,local_80);
      FUN_00416ba0(&local_20,local_168,local_80);
      cVar1 = FUN_00440b00(local_20,1);
      if (cVar1 != '\0') {
        FUN_010627e0(auStack_1b8);
        if (local_88 == 0) {
          FUN_00414b50(&local_88,local_30);
        }
        else {
          local_198 = local_30;
          FUN_00416cd0(&local_88,3,local_88,&DAT_01063614);
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          FUN_00414ad0(param_1 + 0x38,local_30);
        }
        else {
          local_198 = local_30;
          FUN_00416cd0(param_1 + 0x38,3,*(undefined8 *)(param_1 + 0x38),&DAT_01063614);
        }
      }
      local_bc = local_bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_d8);
  FUN_00416ba0(&local_a8,*(undefined8 *)(param_1 + 0x20),L"\\main.cpp");
  cVar1 = FUN_00440a20(local_a8,1);
  if (cVar1 != '\0') {
    (**(code **)(*local_50 + 0xd8))(local_50,local_a8);
  }
  local_198 = local_198 & 0xffffffff00000000;
  local_190 = 1;
  local_188 = (wchar_t *)0x0;
  FUN_01062160(param_1,local_58,local_38,local_40);
  local_198._0_4_ = 1;
  local_190 = 1;
  local_188 = L"LiquidCrystal";
  FUN_01062160(param_1,local_58,local_38,local_40);
  local_198 = (ulonglong)local_198._4_4_ << 0x20;
  local_190 = 2;
  local_188 = (wchar_t *)0x0;
  FUN_01062160(param_1,local_58,local_38,local_40);
  cVar1 = FUN_00440a20(local_a8,1);
  if (cVar1 != '\0') {
    (**(code **)(*local_50 + 0x100))(local_50,local_a8);
  }
  (**(code **)(*local_58 + 0x90))(local_58);
  local_198._0_4_ = 1;
  local_190 = 3;
  local_188 = (wchar_t *)0x0;
  FUN_01062160(param_1,local_58,local_38,local_40);
  (**(code **)(*local_58 + 0x90))(local_58);
  local_198 = CONCAT44(local_198._4_4_,2);
  local_190 = 3;
  local_188 = (wchar_t *)0x0;
  FUN_01062160(param_1,local_58,local_38,local_40);
  (**(code **)(*local_28 + 0x90))(local_28);
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x10);
  local_bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_b8 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0x10),local_bc);
      cVar1 = FUN_010af9d0(local_b8);
      if ((cVar1 == '\0') && (*(int *)(local_b8 + 0x4c) == 1)) {
        FUN_010af830(local_b8,&local_90);
        local_198 = local_88;
        FUN_00416cd0(&local_170,3,*(undefined8 *)(local_38 + 0x38),&DAT_01063614);
        local_198 = local_170;
        FUN_010600e0(local_38,local_90,local_28,0);
      }
      local_bc = local_bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_d0 + 0x90))(local_d0);
  (**(code **)(*local_d0 + 0x88))(local_d0,local_28);
  FUN_01063fc0(param_1,local_28,1);
  (**(code **)(*local_28 + 0x90))(local_28);
  FUN_010616b0(local_38,local_28,local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  (**(code **)(*local_d0 + 0x90))(local_d0);
  (**(code **)(*local_d0 + 0x88))(local_d0,local_28);
  FUN_01063fc0(param_1,local_28,0);
  FUN_00410f20(local_d0);
  if (local_38 != 0) {
    FUN_00410f20(local_38);
  }
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
  FUN_00410f20(local_28);
  FUN_00410f20(local_58);
  if (*(longlong *)(local_40 + 0x10) != 0) {
    FUN_00410f20(*(longlong *)(local_40 + 0x10));
  }
  FUN_00414560(&local_170,4);
  FUN_00414560(&local_140,2);
  FUN_00417740(local_120,&DAT_010571b8);
  FUN_00414560(&local_b0,10);
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

