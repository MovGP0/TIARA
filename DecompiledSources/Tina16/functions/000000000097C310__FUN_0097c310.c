/* Ghidra address: 0097c310 */
/* Ghidra symbol: FUN_0097c310 */


void FUN_0097c310(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *local_118;
  wchar_t *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  wchar_t *local_50;
  undefined *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined *local_20;
  
  local_e0 = 0;
  local_e8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_60 = 0;
  local_50 = (wchar_t *)0x0;
  local_58 = (undefined *)0x0;
  local_40 = (wchar_t *)0x0;
  local_48 = (undefined *)0x0;
  local_38 = 0;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  FUN_00978130(param_1,0x11,lVar2);
  local_30 = L"\n<!ENTITY % ";
  local_28 = *(undefined8 *)(param_2 + 0x90);
  local_20 = &DAT_0097cad8;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
  iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xa0),0);
  if (iVar1 == 0) {
    iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xa8),0);
    if (iVar1 == 0) {
      FUN_00415e60(&local_38,DAT_01e32a8e);
      iVar1 = FUN_00417170(local_38,*(undefined8 *)(param_2 + 0x98),1);
      if (iVar1 < 1) {
        FUN_00415e60(&local_50,DAT_01e32a8e);
        local_30 = local_50;
        local_28 = *(undefined8 *)(param_2 + 0x98);
        FUN_00415e60(&local_58,DAT_01e32a8e);
        local_20 = local_58;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
      }
      else {
        FUN_00415e60(&local_40,DAT_01e32a8c);
        local_30 = local_40;
        local_28 = *(undefined8 *)(param_2 + 0x98);
        FUN_00415e60(&local_48,DAT_01e32a8c);
        local_20 = local_48;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
      }
      goto LAB_0097c9bc;
    }
  }
  iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xa0),0);
  if (iVar1 == 0) {
    FUN_00415e60(&local_60,DAT_01e32a8e);
    iVar1 = FUN_00417170(local_60,*(undefined8 *)(param_2 + 0xa8),1);
    if (iVar1 < 1) {
      local_80 = L"SYSTEM ";
      FUN_00415e60(&local_98,DAT_01e32a8e);
      local_78 = local_98;
      local_70 = *(undefined8 *)(param_2 + 0xa8);
      FUN_00415e60(&local_a0,DAT_01e32a8e);
      local_68 = local_a0;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_80,3,0);
    }
    else {
      local_80 = L"SYSTEM ";
      FUN_00415e60(&local_88,DAT_01e32a8c);
      local_78 = local_88;
      local_70 = *(undefined8 *)(param_2 + 0xa8);
      FUN_00415e60(&local_90,DAT_01e32a8c);
      local_68 = local_90;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_80,3,0);
    }
  }
  else {
    iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xa8),0);
    if (iVar1 == 0) {
      local_30 = L" PUBLIC \"";
      local_28 = *(undefined8 *)(param_2 + 0xa0);
      local_20 = &DAT_0097cb0c;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_30,2,0);
    }
    else {
      FUN_00415e60(&local_a8,DAT_01e32a8e);
      iVar1 = FUN_00417170(local_a8,*(undefined8 *)(param_2 + 0xa8),1);
      if (iVar1 < 1) {
        local_110 = L"PUBLIC \"";
        local_108 = *(undefined8 *)(param_2 + 0xa0);
        local_100 = &DAT_0097cb38;
        local_f8 = *(undefined8 *)(param_2 + 0xa8);
        local_f0 = &DAT_0097cb0c;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_110,4,0)
        ;
      }
      else {
        local_d8 = L"PUBLIC \"";
        local_d0 = *(undefined8 *)(param_2 + 0xa0);
        local_c8 = &DAT_0097cb2c;
        FUN_00415e60(&local_e0,DAT_01e32a8c);
        local_c0 = local_e0;
        local_b8 = *(undefined8 *)(param_2 + 0xa8);
        FUN_00415e60(&local_e8,DAT_01e32a8c);
        local_b0 = local_e8;
        if (param_2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_2 + 0x80;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_d8,5,0);
      }
    }
  }
LAB_0097c9bc:
  local_118 = &LAB_0097cb44;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_118,0,0);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,0x11,param_2);
  FUN_004145c0(&local_e8,2);
  FUN_004145c0(&local_a8,5);
  FUN_004145c0(&local_60,6);
  return;
}

