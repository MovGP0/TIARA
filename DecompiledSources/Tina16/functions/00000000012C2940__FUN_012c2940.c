/* Ghidra address: 012c2940 */
/* Ghidra symbol: FUN_012c2940 */


undefined1 * FUN_012c2940(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *local_res8 [4];
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  bool local_6b;
  bool local_6a;
  bool local_69;
  undefined8 local_68;
  bool local_5b;
  bool local_5a;
  bool local_59;
  undefined8 local_58;
  bool local_4f;
  bool local_4e;
  bool local_4d;
  wchar_t *local_48;
  undefined **local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_80 = auStack_138;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (undefined **)0x0;
  local_48 = (wchar_t *)0x0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  local_28 = (undefined1 *)FUN_012c28a0(0x20);
  local_20 = local_28;
  (**(code **)(*local_res8[0] + 0xe8))(local_res8[0],&local_30,L"action");
  (**(code **)(*local_30 + 0x68))(local_30);
  (**(code **)(*local_30 + 0x70))(local_30,&local_88);
  FUN_0041b890(&local_38,local_88,&DAT_012c3526);
  while (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x100))(local_38,&local_40,L"mode");
    (**(code **)(*local_38 + 0x100))(local_38,&local_48,L"action");
    if (local_40 == (undefined **)&DAT_012c355c) {
      local_4d = true;
    }
    else if (local_40 == (undefined **)0x0) {
      local_4d = false;
    }
    else {
      iVar3 = FUN_0043e420(local_40,&DAT_012c355c);
      local_4d = iVar3 == 0;
    }
    if (local_4d != false) {
      *local_20 = 1;
      (**(code **)(*local_38 + 0x100))(local_38,&local_90,L"cornertest");
      uVar1 = FUN_0043fed0(local_90,0);
      local_20[9] = uVar1;
      if (local_48 == L"Save") {
        local_4e = true;
      }
      else if (local_48 == (wchar_t *)0x0) {
        local_4e = false;
      }
      else {
        iVar3 = FUN_0043e420(local_48,L"Save");
        local_4e = iVar3 == 0;
      }
      if (local_4e == false) {
        if (local_48 == L"Compare") {
          local_4f = true;
        }
        else if (local_48 == (wchar_t *)0x0) {
          local_4f = false;
        }
        else {
          iVar3 = FUN_0043e420(local_48,L"Compare");
          local_4f = iVar3 == 0;
        }
        if (local_4f != false) {
          local_20[6] = 1;
          (**(code **)(*local_38 + 0x100))(local_38,&local_98,L"curve");
          FUN_00416910(local_20 + 0xc,local_98,0xff);
          if (local_20[0xc] == '\0') {
            (**(code **)(*local_38 + 0x100))(local_38,&local_a0,L"refcurve");
            FUN_00416910(local_20 + 0xc,local_a0,0xff);
          }
          (**(code **)(*local_38 + 0x100))(local_38,&local_a8,L"testcurve");
          FUN_00416910(local_20 + 0x10c,local_a8,0xff);
          (**(code **)(*local_38 + 0x100))(local_38,&local_b0,L"tolerance");
          local_58 = local_b0;
          uVar4 = FUN_00448650(local_b0,PTR_DAT_02004830);
          *(undefined8 *)(local_20 + 0x610) = uVar4;
          (**(code **)(*local_38 + 0x100))(local_38,&local_b8,L"points");
          uVar2 = FUN_0043fc50(local_b8,0x400);
          *(undefined4 *)(local_20 + 0x628) = uVar2;
        }
      }
      else {
        local_20[3] = 1;
      }
    }
    if (local_40 == &PTR_DAT_012c365c) {
      local_59 = true;
    }
    else if (local_40 == (undefined **)0x0) {
      local_59 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_40,&PTR_DAT_012c365c);
      local_59 = iVar3 == 0;
    }
    if (local_59 != false) {
      local_20[1] = 1;
      (**(code **)(*local_38 + 0x100))(local_38,&local_c0,L"cornertest");
      uVar1 = FUN_0043fed0(local_c0,0);
      local_20[10] = uVar1;
      if (local_48 == L"Save") {
        local_5a = true;
      }
      else if (local_48 == (wchar_t *)0x0) {
        local_5a = false;
      }
      else {
        iVar3 = FUN_0043e420(local_48,L"Save");
        local_5a = iVar3 == 0;
      }
      if (local_5a == false) {
        if (local_48 == L"Compare") {
          local_5b = true;
        }
        else if (local_48 == (wchar_t *)0x0) {
          local_5b = false;
        }
        else {
          iVar3 = FUN_0043e420(local_48,L"Compare");
          local_5b = iVar3 == 0;
        }
        if (local_5b != false) {
          local_20[7] = 1;
          (**(code **)(*local_38 + 0x100))(local_38,&local_c8,L"curve");
          FUN_00416910(local_20 + 0x20c,local_c8,0xff);
          if (local_20[0x20c] == '\0') {
            (**(code **)(*local_38 + 0x100))(local_38,&local_d0,L"refcurve");
            FUN_00416910(local_20 + 0x20c,local_d0,0xff);
          }
          (**(code **)(*local_38 + 0x100))(local_38,&local_d8,L"testcurve");
          FUN_00416910(local_20 + 0x30c,local_d8,0xff);
          (**(code **)(*local_38 + 0x100))(local_38,&local_e0,L"tolerance");
          local_68 = local_e0;
          uVar4 = FUN_00448650(local_e0,PTR_DAT_02004830);
          *(undefined8 *)(local_20 + 0x618) = uVar4;
        }
      }
      else {
        local_20[4] = 1;
      }
    }
    if (local_40 == (undefined **)&LAB_012c3670) {
      local_69 = true;
    }
    else if (local_40 == (undefined **)0x0) {
      local_69 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_40,&LAB_012c3670);
      local_69 = iVar3 == 0;
    }
    if (local_69 != false) {
      local_20[2] = 1;
      (**(code **)(*local_38 + 0x100))(local_38,&local_e8,L"cornertest");
      uVar1 = FUN_0043fed0(local_e8,0);
      local_20[0xb] = uVar1;
      if (local_48 == L"Save") {
        local_6a = true;
      }
      else if (local_48 == (wchar_t *)0x0) {
        local_6a = false;
      }
      else {
        iVar3 = FUN_0043e420(local_48,L"Save");
        local_6a = iVar3 == 0;
      }
      if (local_6a == false) {
        if (local_48 == L"Compare") {
          local_6b = true;
        }
        else if (local_48 == (wchar_t *)0x0) {
          local_6b = false;
        }
        else {
          iVar3 = FUN_0043e420(local_48,L"Compare");
          local_6b = iVar3 == 0;
        }
        if (local_6b != false) {
          local_20[8] = 1;
          (**(code **)(*local_38 + 0x100))(local_38,&local_f0,L"curve");
          FUN_00416910(local_20 + 0x40c,local_f0,0xff);
          if (local_20[0x40c] == '\0') {
            (**(code **)(*local_38 + 0x100))(local_38,&local_f8,L"refcurve");
            FUN_00416910(local_20 + 0x40c,local_f8,0xff);
          }
          (**(code **)(*local_38 + 0x100))(local_38,&local_100,L"testcurve");
          FUN_00416910(local_20 + 0x50c,local_100,0xff);
          (**(code **)(*local_38 + 0x100))(local_38,&local_108,L"tolerance");
          local_78 = local_108;
          uVar4 = FUN_00448650(local_108,PTR_DAT_02004830);
          *(undefined8 *)(local_20 + 0x620) = uVar4;
        }
      }
      else {
        local_20[5] = 1;
      }
    }
    (**(code **)(*local_30 + 0x70))(local_30,&local_110);
    FUN_0041b890(&local_38,local_110,&DAT_012c3526);
  }
  FUN_0041b800(&local_110);
  FUN_00414560(&local_108,0x10);
  FUN_0041b800(&local_88);
  FUN_00414560(&local_48,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res8);
  return local_28;
}

