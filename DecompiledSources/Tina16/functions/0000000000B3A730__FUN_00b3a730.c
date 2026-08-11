/* Ghidra address: 00b3a730 */
/* Ghidra symbol: FUN_00b3a730 */


longlong *
FUN_00b3a730(longlong *param_1,longlong param_2,char *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_38 = 0;
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  FUN_00414520(param_1);
  *local_80 = '\0';
  local_1c = 0;
  if (param_2 != 0) {
    local_1c = *(int *)(param_2 + -4);
  }
  if (local_1c < 0x20) {
    uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
    FUN_004134c0(uVar5);
  }
  uVar5 = FUN_00415ab0(param_2);
  FUN_00409a70(uVar5,local_78,2);
  FUN_00409a70(param_2 + 2,param_5,2);
  FUN_00409a70(param_2 + 4,param_6,2);
  FUN_00409a70(param_2 + 6,param_7,2);
  FUN_00409a70(param_2 + 0x1c,&local_2c,4);
  if ((local_2c & 0x100) == 0x100) {
    *local_80 = '\x03';
  }
  else if ((local_2c & 1) == 1) {
    *local_80 = '\x01';
  }
  else {
    *local_80 = '\x04';
  }
  local_20 = 0x21;
  if ((local_2c & 0x14) == 0x14) {
    local_98 = 1;
    local_90 = 0;
    FUN_00b3a500(auStack_b8,&local_40,1,1);
  }
  if ((local_2c & 0x80) == 0x80) {
    local_98 = 1;
    local_90 = 0;
    FUN_00b3a500(auStack_b8,&local_48,1,1);
  }
  cVar2 = *local_80;
  if (cVar2 == '\x01') {
    FUN_00415d10(&local_28,0x10,0);
    if (local_1c < local_20 + 0xf) {
      uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
      FUN_004134c0(uVar5);
    }
    uVar5 = FUN_00414df0(&local_28);
    FUN_00409a70(param_2 + -1 + (longlong)local_20,uVar5,0x10);
    cVar2 = FUN_0043e2c0(param_2 + -1 + (longlong)local_20,&DAT_01e857d0,0x10);
    if (cVar2 != '\0') {
      *local_80 = '\x02';
    }
    if (*local_80 == '\x01') {
      cVar2 = FUN_0043e2c0(param_2 + -1 + (longlong)local_20,&DAT_01e857c0,0x10);
      if (cVar2 == '\0') {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
        FUN_004134c0(uVar5);
      }
    }
    iVar1 = local_20 + 0x10;
    if (*local_80 == '\x01') {
      local_98 = 1;
      local_90 = 0;
      local_20 = iVar1;
      FUN_00b3a500(auStack_b8,&local_50,0,1);
      FUN_00414b90(local_88,local_50);
      iVar1 = local_20;
    }
    else if (*local_80 == '\x02') {
      iVar3 = local_20 + 0x15;
      local_20 = iVar1;
      if (local_1c < iVar3) {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
        FUN_004134c0(uVar5);
      }
      local_20 = local_20 + 2;
      local_98 = 0;
      local_90 = 0;
      FUN_00b3a500(auStack_b8,&local_58,1,1);
      FUN_00414be0(&local_38,local_58);
      if (local_1c < local_20 + 0x17) {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
        FUN_004134c0(uVar5);
      }
      iVar1 = local_20 + 0x18;
      iVar3 = local_20 + 0x1b;
      local_20 = iVar1;
      if (local_1c < iVar3) {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0x10);
        FUN_004134c0(uVar5);
      }
      FUN_00409a70(param_2 + -1 + (longlong)local_20,&local_30,4);
      local_20 = local_20 + 4;
      if (local_30 == 0) {
        FUN_00414b90(local_88,local_38);
        iVar1 = local_20;
      }
      else {
        local_98 = 1;
        local_90 = 2;
        FUN_00b3a500(auStack_b8,&local_60,0,0);
        FUN_00414b90(local_88,local_60);
        uVar4 = 0;
        if (*local_88 != 0) {
          uVar4 = *(uint *)(*local_88 + -4) >> 1;
        }
        uVar6 = 0;
        if (local_38 != 0) {
          uVar6 = *(uint *)(local_38 + -4) >> 1;
        }
        iVar1 = local_20;
        if (uVar4 < uVar6) {
          FUN_00414b90(local_88,local_38);
          iVar1 = local_20;
        }
      }
    }
  }
  else if (cVar2 == '\x03') {
    local_98 = 1;
    local_90 = 0;
    FUN_00b3a500(auStack_b8,&local_68,1,1);
    FUN_00414b90(local_88,local_68);
    iVar1 = local_20;
  }
  else {
    iVar1 = local_20;
    if ((cVar2 == '\x04') && ((local_2c & 8) == 8)) {
      local_98 = 1;
      local_90 = 0;
      FUN_00b3a500(auStack_b8,&local_70,1,1);
      FUN_00414b90(local_88,local_70);
      iVar1 = local_20;
    }
  }
  local_20 = iVar1;
  FUN_004145c0(&local_70,8);
  FUN_004144d0(&local_28);
  return local_88;
}

