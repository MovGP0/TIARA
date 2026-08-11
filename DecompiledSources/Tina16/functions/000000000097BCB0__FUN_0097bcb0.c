/* Ghidra address: 0097bcb0 */
/* Ghidra symbol: FUN_0097bcb0 */


void FUN_0097bcb0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined *local_20;
  
  local_b8 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  FUN_00978130(param_1,0xf,lVar2);
  local_30 = L"\n<!NOTATION ";
  local_28 = *(undefined8 *)(param_2 + 0x88);
  local_20 = &DAT_0097c294;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
  iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0x90),0);
  if (iVar1 == 0) {
    FUN_00415e60(&local_38,DAT_01e32a8a);
    iVar1 = FUN_00417170(local_38,*(undefined8 *)(param_2 + 0x98),1);
    if (iVar1 < 1) {
      local_58 = L"SYSTEM ";
      FUN_00415e60(&local_70,DAT_01e32a8a);
      local_50 = local_70;
      local_48 = *(undefined8 *)(param_2 + 0x98);
      FUN_00415e60(&local_78,DAT_01e32a8a);
      local_40 = local_78;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_58,3,0);
    }
    else {
      local_58 = L"SYSTEM ";
      FUN_00415e60(&local_60,DAT_01e32a88);
      local_50 = local_60;
      local_48 = *(undefined8 *)(param_2 + 0x98);
      FUN_00415e60(&local_68,DAT_01e32a88);
      local_40 = local_68;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_58,3,0);
    }
  }
  else {
    iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0x98),0);
    if (iVar1 == 0) {
      local_30 = L" PUBLIC \"";
      local_28 = *(undefined8 *)(param_2 + 0x90);
      local_20 = &DAT_0097c2c8;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
    }
    else {
      FUN_00415e60(&local_80,DAT_01e32a8a);
      iVar1 = FUN_00417170(local_80,*(undefined8 *)(param_2 + 0x98),1);
      if (iVar1 < 1) {
        local_e8 = L"PUBLIC \"";
        local_e0 = *(undefined8 *)(param_2 + 0x90);
        local_d8 = &DAT_0097c2f4;
        local_d0 = *(undefined8 *)(param_2 + 0x98);
        local_c8 = &DAT_0097c2c8;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_e8,4,0);
      }
      else {
        local_b0 = L"PUBLIC \"";
        local_a8 = *(undefined8 *)(param_2 + 0x90);
        local_a0 = &DAT_0097c2e8;
        FUN_00415e60(&local_b8,DAT_01e32a88);
        local_98 = local_b8;
        local_90 = *(undefined8 *)(param_2 + 0x98);
        FUN_00415e60(&local_c0,DAT_01e32a88);
        local_88 = local_c0;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_b0,5,0);
      }
    }
  }
  local_f0 = &LAB_0097c300;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_f0,0,0);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,0xf,param_2);
  FUN_004145c0(&local_c0,2);
  FUN_004145c0(&local_80,5);
  FUN_00414520(&local_38);
  return;
}

