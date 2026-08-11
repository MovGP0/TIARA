/* Ghidra address: 01a782f0 */
/* Ghidra symbol: FUN_01a782f0 */


undefined8 * FUN_01a782f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_70 = auStack_98;
  if (*(char *)(*(longlong *)(param_1 + 0x7b8) + 0xa9) == '\0') {
    local_40 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x7b0) + 0xa9) == '\0') {
      local_3c = 0;
    }
    else {
      local_3c = *(int *)(*(longlong *)(param_1 + 0x7b0) + 0x9c);
    }
    local_38 = FUN_0064d0b0(param_1);
    local_38 = local_38 + -2;
    local_34 = FUN_0064d120(param_1);
    if (*(char *)(*(longlong *)(param_1 + 0xa68) + 0xa9) != '\0') {
      local_34 = FUN_0064d120(param_1);
      local_34 = local_34 - *(int *)(*(longlong *)(param_1 + 0xa68) + 0x9c);
      if (*(char *)(*(longlong *)(param_1 + 0xbd8) + 0xa9) != '\0') {
        local_34 = local_34 - *(int *)(*(longlong *)(param_1 + 0xbd8) + 0x9c);
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0xc08) + 0xa9) != '\0') {
      local_34 = *(int *)(*(longlong *)(param_1 + 0xc08) + 0x94);
    }
  }
  else {
    local_40 = 0;
    local_3c = 0;
    local_38 = *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x98) + -2;
    local_34 = *(int *)(*(longlong *)(param_1 + 0x7c0) + 0x9c);
    local_70 = auStack_98;
  }
  if (local_38 - local_40 < DAT_01fcab3c) {
    local_38 = local_40 + DAT_01fcab3c;
  }
  if (local_34 - local_3c < DAT_01fcab40) {
    local_34 = local_3c + DAT_01fcab40;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x910) + 0x80) != '\0') {
    local_68 = FUN_0069e8a0();
    iVar1 = FUN_0069df40(local_68);
    iVar2 = FUN_0069df10(local_68);
    if ((double)iVar1 / (double)iVar2 <=
        (double)(local_38 - local_40) / (double)(local_34 - local_3c)) {
      local_3c = local_3c + 5;
      local_34 = local_34 + -5;
      local_50 = (double)local_40;
      local_48 = (double)local_38;
      local_58 = (double)local_3c;
      local_60 = (double)local_34;
      iVar1 = FUN_0069df40(local_68);
      iVar2 = FUN_0069df10(local_68);
      iVar1 = FUN_0040c840(((local_48 - local_50) -
                           ((local_60 - local_58) * (double)iVar1) / (double)iVar2) / 2.0);
      local_40 = local_40 + iVar1;
      iVar1 = FUN_0069df40(local_68);
      iVar2 = FUN_0069df10(local_68);
      iVar1 = FUN_0040c840(((local_48 - local_50) -
                           ((local_60 - local_58) * (double)iVar1) / (double)iVar2) / 2.0);
      local_38 = local_38 - iVar1;
    }
    else {
      local_40 = local_40 + 5;
      local_38 = local_38 + -5;
      local_50 = (double)local_40;
      local_48 = (double)local_38;
      local_58 = (double)local_3c;
      local_60 = (double)local_34;
      iVar1 = FUN_0069df10(local_68);
      iVar2 = FUN_0069df40(local_68);
      iVar1 = FUN_0040c840(((local_60 - local_58) -
                           ((local_48 - local_50) * (double)iVar1) / (double)iVar2) / 2.0);
      local_3c = local_3c + iVar1;
      iVar1 = FUN_0069df10(local_68);
      iVar2 = FUN_0069df40(local_68);
      iVar1 = FUN_0040c840(((local_60 - local_58) -
                           ((local_48 - local_50) * (double)iVar1) / (double)iVar2) / 2.0);
      local_34 = local_34 - iVar1;
    }
  }
  FUN_01a89e80(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x1058) + 0xa9) != '\0') {
    local_38 = (local_38 - *(int *)(*(longlong *)(param_1 + 0x1058) + 0x98)) + 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1060) + 0xa9) != '\0') {
    local_34 = (local_34 - *(int *)(*(longlong *)(param_1 + 0x1060) + 0x9c)) + 1;
  }
  *param_2 = CONCAT44(local_3c,local_40);
  param_2[1] = CONCAT44(local_34,local_38);
  return param_2;
}

