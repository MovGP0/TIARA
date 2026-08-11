/* Ghidra address: 00b36010 */
/* Ghidra symbol: FUN_00b36010 */


void FUN_00b36010(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28 [2];
  longlong *local_20;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  puVar1 = auStack_88;
  if (param_1 != 0) {
    local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
    local_44 = 0;
    if (param_1 != 0) {
      local_44 = *(undefined4 *)(param_1 + -4);
    }
    uVar3 = FUN_00415ab0(param_1);
    FUN_00b258a0(local_20,uVar3,local_44);
    FUN_004b6dc0(local_20,0);
    FUN_00b25710(local_20,local_28);
    uVar2 = local_28[0] & 7;
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        *(undefined1 *)(*param_2 + 8) = 5;
      }
      else if (uVar2 == 0) {
        *(undefined1 *)(*param_2 + 8) = 0;
      }
      else if (uVar2 == 1) {
        *(undefined1 *)(*param_2 + 8) = 1;
      }
      else if (uVar2 == 2) {
        *(undefined1 *)(*param_2 + 8) = 2;
      }
      else if (uVar2 == 3) {
        *(undefined1 *)(*param_2 + 8) = 3;
      }
    }
    else if (uVar2 == 5) {
      *(undefined1 *)(*param_2 + 8) = 6;
    }
    else if (uVar2 == 6) {
      *(undefined1 *)(*param_2 + 8) = 7;
    }
    else if (uVar2 == 7) {
      *(undefined1 *)(*param_2 + 8) = 8;
    }
    if ((*(char *)(*param_2 + 8) == '\x03') && ((local_28[0] & 0x80) != 0)) {
      *(undefined1 *)(*param_2 + 8) = 4;
    }
    uVar2 = local_28[0] >> 4 & 3;
    if (uVar2 == 0) {
      *(undefined1 *)(*param_2 + 10) = 0;
    }
    else if (uVar2 == 1) {
      *(undefined1 *)(*param_2 + 10) = 1;
    }
    else if (uVar2 == 2) {
      *(undefined1 *)(*param_2 + 10) = 2;
    }
    uVar2 = local_28[0] >> 0x14 & 7;
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        *(undefined1 *)(*param_2 + 9) = 5;
      }
      else if (uVar2 == 0) {
        *(undefined1 *)(*param_2 + 9) = 1;
      }
      else if (uVar2 == 1) {
        *(undefined1 *)(*param_2 + 9) = 2;
      }
      else if (uVar2 == 2) {
        *(undefined1 *)(*param_2 + 9) = 3;
      }
      else if (uVar2 == 3) {
        *(undefined1 *)(*param_2 + 9) = 4;
      }
    }
    else if (uVar2 == 5) {
      *(undefined1 *)(*param_2 + 9) = 6;
    }
    else if (uVar2 == 6) {
      *(undefined1 *)(*param_2 + 9) = 7;
    }
    else if (uVar2 == 7) {
      *(undefined1 *)(*param_2 + 9) = 8;
    }
    *(bool *)(*param_2 + 0xd) = (local_28[0] & 0x100) != 0;
    *(bool *)(*param_2 + 0xe) = (local_28[0] & 0x200) == 0;
    *(bool *)(*param_2 + 0xb) = (local_28[0] & 0x40000) != 0;
    *(bool *)(*param_2 + 0xc) = (local_28[0] & 0x80000) != 0;
    FUN_00b35b60(auStack_88,&local_30);
    FUN_00414b90(*param_2 + 0x10,local_30);
    FUN_00b35b60(auStack_88,&local_30);
    FUN_00414b90(*param_2 + 0x20,local_30);
    FUN_00b35b60(auStack_88,&local_30);
    FUN_00414b90(*param_2 + 0x18,local_30);
    FUN_00b35b60(auStack_88,&local_30);
    FUN_00414b90(*param_2 + 0x28,local_30);
    FUN_00b35cb0(auStack_88,&local_38);
    FUN_00b35cb0(auStack_88,&local_40);
    FUN_00b35f50(auStack_88);
    FUN_00b35d60(auStack_88,&local_58,local_38);
    FUN_00414bf0(*param_2 + 0x30,local_58);
    FUN_00b35d60(auStack_88,&local_60,local_40);
    FUN_00414bf0(*param_2 + 0x38,local_60);
    (**(code **)(*local_20 + -0x20))(local_20,1);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00414590(&local_60,2);
  FUN_00414590(&local_40,2);
  FUN_00414520(&local_30);
  return;
}

