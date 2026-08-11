/* Ghidra address: 01141480 */
/* Ghidra symbol: FUN_01141480 */


void FUN_01141480(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  FUN_00414610(param_5);
  local_20 = CONCAT62(local_20._2_6_,0x6b);
  local_18 = 9;
  FUN_00442f70(&local_10,&DAT_01141818,&local_20,0);
  FUN_00414ad0(param_2,local_10);
  if (param_1 < 2) {
LAB_01141582:
    if (param_1 < 8 && (1 << (param_1 & 0x1f) & 10U) != 0) {
      FUN_00de8980(&local_30,0x13c,param_5);
      FUN_00416ad0(&local_30,L" (C)");
      local_20 = local_30;
      local_18 = 0x11;
      FUN_00442f70(&local_28,L"%20s",&local_20,0);
      FUN_00414ad0(param_3,local_28);
    }
    else {
      FUN_00de8980(&local_40,0x13c,param_5);
      FUN_00416ad0(&local_40,L" (D)");
      local_20 = local_40;
      local_18 = 0x11;
      FUN_00442f70(&local_38,L"%20s",&local_20,0);
      FUN_00414ad0(param_3,local_38);
    }
    FUN_00de8980(&local_50,0x13d,param_5);
    FUN_00416ad0(&local_50,&DAT_01141878);
    local_20 = local_50;
    local_18 = 0x11;
    FUN_00442f70(&local_48,L"%20s",&local_20,0);
    FUN_00414ad0(param_4,local_48);
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) goto LAB_01141582;
      if (param_1 != 4) goto code_r0x01141798;
    }
    FUN_00de8980(&local_60,0x13c,param_5);
    FUN_00416ad0(&local_60,L" (A)");
    local_20 = local_60;
    local_18 = 0x11;
    FUN_00442f70(&local_58,L"%20s",&local_20,0);
    FUN_00414ad0(param_3,local_58);
    FUN_00de8980(&local_70,0x13c,param_5);
    FUN_00416ad0(&local_70,L" (B)");
    local_20 = local_70;
    local_18 = 0x11;
    FUN_00442f70(&local_68,L"%20s",&local_20,0);
    FUN_00414ad0(param_4,local_68);
  }
code_r0x01141798:
  FUN_00414560(&local_70,10);
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return;
}

