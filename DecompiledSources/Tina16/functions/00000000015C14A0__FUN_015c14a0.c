/* Ghidra address: 015c14a0 */
/* Ghidra symbol: FUN_015c14a0 */


undefined8
FUN_015c14a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  char local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  bool local_49;
  int local_48;
  int local_44;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  short local_1a;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(param_5);
  FUN_00414480(param_1);
  FUN_015c1220(&local_38,local_res18,0,param_5);
  FUN_015c1220(&local_28,local_38,local_res10,param_5);
  if (local_28 != 0) {
    local_44 = 0;
    if (local_28 != 0) {
      local_44 = *(int *)(local_28 + -4);
    }
    if (*(short *)(local_28 + -2 + (longlong)local_44 * 2) == 0x5c) {
      local_49 = true;
    }
    else {
      local_48 = 0;
      if (local_28 != 0) {
        local_48 = *(int *)(local_28 + -4);
      }
      local_49 = *(short *)(local_28 + -2 + (longlong)local_48 * 2) == 0x2f;
    }
    if (local_49 != false) {
      local_50 = 0;
      if (local_28 != 0) {
        local_50 = *(int *)(local_28 + -4);
      }
      FUN_00416dc0(&local_28,local_28,1,local_50 + -1);
    }
  }
  if (local_28 != 0) {
    local_54 = 0;
    if (local_28 != 0) {
      local_54 = *(int *)(local_28 + -4);
    }
    if (*(short *)(local_28 + -2 + (longlong)local_54 * 2) == 0x2e) {
      local_58 = 0;
      if (local_28 != 0) {
        local_58 = *(int *)(local_28 + -4);
      }
      FUN_00416dc0(&local_28,local_28,1,local_58 + -1);
    }
  }
  if (local_res20 == '\0') {
    FUN_015bf710(local_70,local_28);
    FUN_00414b50(&local_28,local_70[0]);
  }
  else if (local_res20 == '\x01') {
    FUN_015c1190(&local_78,local_38,param_5);
    FUN_015bf6d0(&local_30,local_78,local_28);
    iVar1 = FUN_004170c0(&DAT_015c1ae8,local_30,1);
    if ((iVar1 == 0) && (iVar1 = FUN_004170c0(&LAB_015c1afc,local_30,1), iVar1 == 0)) {
      FUN_00414b50(&local_28,local_30);
    }
  }
  else if (local_res20 == '\x02') {
    FUN_00414b50(&local_28,local_28);
  }
  else if (local_res20 == '\x03') {
    FUN_015bf770(&local_80,local_28);
    FUN_00414b50(&local_28,local_80);
  }
  local_14 = 0;
  local_5c = 0;
  if (local_28 != 0) {
    local_5c = *(int *)(local_28 + -4);
  }
  local_18 = local_5c;
  if (local_res20 != '\x03') {
    local_c = 0;
    iVar1 = local_5c;
    if (-1 < local_5c + -1) {
      do {
        if (*(short *)(local_28 + -2 + (longlong)(local_c + 1) * 2) == 0x3a) {
          local_14 = local_c + 1;
          break;
        }
        local_c = local_c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_5c <= local_14) goto LAB_015c1a47;
    if ((local_14 == 0) && (local_c = 0, -1 < local_5c + -2)) {
      iVar1 = local_5c + -1;
      do {
        if (((*(short *)(local_28 + -2 + (longlong)(local_c + 1) * 2) == 0x2f) ||
            (*(short *)(local_28 + -2 + (longlong)(local_c + 1) * 2) == 0x5c)) &&
           ((*(short *)(local_28 + -2 + (longlong)(local_c + 2) * 2) == 0x2f ||
            (*(short *)(local_28 + -2 + (longlong)(local_c + 2) * 2) == 0x5c)))) {
          local_14 = local_c + 2;
          local_10 = local_14;
          if (local_14 <= local_5c + -1) {
            iVar1 = ((local_5c + -1) - local_14) + 1;
            goto LAB_015c1926;
          }
          break;
        }
        local_c = local_c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    goto LAB_015c1991;
  }
  goto LAB_015c19ce;
  while( true ) {
    local_10 = local_10 + 1;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) break;
LAB_015c1926:
    if ((*(short *)(local_28 + -2 + (longlong)(local_10 + 1) * 2) == 0x2f) ||
       (*(short *)(local_28 + -2 + (longlong)(local_10 + 1) * 2) == 0x5c)) {
      local_14 = local_10 + 1;
      break;
    }
  }
LAB_015c1991:
  if ((*(short *)(local_28 + -2 + (longlong)(local_14 + 1) * 2) == 0x5c) ||
     (*(short *)(local_28 + -2 + (longlong)(local_14 + 1) * 2) == 0x2f)) {
    local_14 = local_14 + 1;
  }
LAB_015c19ce:
  if (local_14 < local_5c) {
    do {
      local_1a = *(short *)(local_28 + -2 + (longlong)(local_14 + 1) * 2);
      if (local_1a == 0x5c) {
        local_1a = 0x2f;
      }
      FUN_00416780(&local_88,local_1a);
      FUN_00416ad0(param_1,local_88);
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
LAB_015c1a47:
  FUN_00414560(&local_88,4);
  FUN_00414560(&local_38,3);
  FUN_00414560(&local_res10,2);
  FUN_00414480(&param_5);
  return param_1;
}

