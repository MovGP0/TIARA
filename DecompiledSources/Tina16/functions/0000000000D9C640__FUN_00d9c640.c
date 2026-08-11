/* Ghidra address: 00d9c640 */
/* Ghidra symbol: FUN_00d9c640 */


undefined1
FUN_00d9c640(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,byte param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  undefined1 local_88;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  undefined1 *local_40;
  undefined1 local_29;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_b8;
  local_29 = 1;
  local_20 = *(longlong **)(param_2 + 0x180);
  local_70 = param_2;
  local_28 = FUN_0060f770(&DAT_005faf70,1,param_3,6);
  uVar1 = (ulonglong)param_5;
  if (uVar1 < 0x14) {
    if (uVar1 == 0x13) {
      FUN_00d9c5c0(auStack_b8,3,1);
      goto code_r0x00d9cbbd;
    }
    if (uVar1 < 0xb) {
      if (uVar1 == 10) {
        FUN_00d9c5c0(auStack_b8,5,0);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 < 6) {
        if (uVar1 == 5) {
          FUN_00d9c5c0(auStack_b8,0,3);
          goto code_r0x00d9cbbd;
        }
        if (uVar1 == 2) {
          FUN_00d9c5c0(auStack_b8,0,0);
          goto code_r0x00d9cbbd;
        }
        if (uVar1 == 3) {
          FUN_00d9c5c0(auStack_b8,0,1);
          goto code_r0x00d9cbbd;
        }
        if (uVar1 == 4) {
          FUN_00d9c5c0(auStack_b8,0,2);
          goto code_r0x00d9cbbd;
        }
      }
      else {
        if (uVar1 == 6) {
          FUN_00d9c5c0(auStack_b8,0,5);
          goto code_r0x00d9cbbd;
        }
        if (uVar1 == 7) {
          FUN_00d9c5c0(auStack_b8,0,6);
          goto code_r0x00d9cbbd;
        }
      }
    }
    else if (uVar1 < 0xf) {
      if (uVar1 == 0xe) {
        FUN_00d9c5c0(auStack_b8,5,5);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0xb) {
        FUN_00d9c5c0(auStack_b8,5,1);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0xc) {
        FUN_00d9c5c0(auStack_b8,5,2);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0xd) {
        FUN_00d9c5c0(auStack_b8,5,3);
        goto code_r0x00d9cbbd;
      }
    }
    else {
      if (uVar1 == 0xf) {
        FUN_00d9c5c0(auStack_b8,5,6);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0x12) {
        FUN_00d9c5c0(auStack_b8,3,0);
        goto code_r0x00d9cbbd;
      }
    }
  }
  else if (uVar1 < 0x1d) {
    if (uVar1 == 0x1c) {
      FUN_00d9c5c0(auStack_b8,4,2);
      goto code_r0x00d9cbbd;
    }
    if (uVar1 < 0x18) {
      if (uVar1 == 0x17) {
        FUN_00d9c5c0(auStack_b8,3,6);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0x14) {
        FUN_00d9c5c0(auStack_b8,3,2);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0x15) {
        FUN_00d9c5c0(auStack_b8,3,3);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0x16) {
        FUN_00d9c5c0(auStack_b8,3,5);
        goto code_r0x00d9cbbd;
      }
    }
    else {
      if (uVar1 == 0x1a) {
        FUN_00d9c5c0(auStack_b8,4,0);
        goto code_r0x00d9cbbd;
      }
      if (uVar1 == 0x1b) {
        FUN_00d9c5c0(auStack_b8,4,1);
        goto code_r0x00d9cbbd;
      }
    }
  }
  else if (uVar1 < 0x22) {
    if (uVar1 == 0x1d) {
      FUN_00d9c5c0(auStack_b8,4,3);
      goto code_r0x00d9cbbd;
    }
    if (uVar1 == 0x1e) {
      FUN_00d9c5c0(auStack_b8,4,5);
      goto code_r0x00d9cbbd;
    }
    if (uVar1 == 0x1f) {
      FUN_00d9c5c0(auStack_b8,4,6);
      goto code_r0x00d9cbbd;
    }
  }
  else {
    if ((uVar1 - 0x22 < 6) || (uVar1 - 0x2a < 6)) {
      FUN_00d835b0(local_58,param_6,1,0);
      local_98 = L"ToolBar";
      (**(code **)(*local_20 + 0x380))(local_20,1,*(undefined8 *)(local_28 + 8),local_58);
      goto code_r0x00d9cbbd;
    }
    if (uVar1 - 0x32 < 3) {
      if (param_5 == 0x32) {
        local_98 = L"SpeedButton\\Chevron";
        local_90 = L"Glyph";
        local_88 = 0;
        FUN_00d8eda0(local_70,param_3,param_6,param_7);
      }
      else if (param_5 == 0x33) {
        local_98 = L"SpeedButton\\Chevron";
        local_90 = L"Glyph";
        local_88 = 5;
        FUN_00d8eda0(local_70,param_3,param_6,param_7);
      }
      else if (param_5 == 0x34) {
        local_98 = L"SpeedButton\\Chevron";
        local_90 = L"Glyph";
        local_88 = 6;
        FUN_00d8eda0(local_70,param_3,param_6,param_7);
      }
      else {
        local_29 = 0;
      }
      goto code_r0x00d9cbbd;
    }
  }
  FUN_00d83590(local_68,param_6);
  local_98 = L"ToolBar";
  (**(code **)(*local_20 + 0x378))(local_20,1,*(undefined8 *)(local_28 + 8),local_68);
code_r0x00d9cbbd:
  FUN_00410f20(local_28);
  return local_29;
}

