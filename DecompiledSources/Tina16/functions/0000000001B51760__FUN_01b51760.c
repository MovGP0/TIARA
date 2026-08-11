/* Ghidra address: 01b51760 */
/* Ghidra symbol: FUN_01b51760 */


void FUN_01b51760(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
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
  local_20 = CONCAT62(local_20._2_6_,0x66);
  local_18 = 9;
  FUN_00442f70(&local_10,&DAT_01b51a38,&local_20,0);
  FUN_00414ad0(param_2,local_10);
  if (param_1 == '\0') {
    FUN_00de8980(&local_30,0x13c,param_5);
    FUN_00416ad0(&local_30,L" (C)");
    local_20 = local_30;
    local_18 = 0x11;
    FUN_00442f70(&local_28,L"%17s",&local_20,0);
    FUN_00414ad0(param_3,local_28);
    FUN_00de8980(&local_40,0x13d,param_5);
    FUN_00416ad0(&local_40,&DAT_01b51a7c);
    local_20 = local_40;
    local_18 = 0x11;
    FUN_00442f70(&local_38,L"%17s",&local_20,0);
    FUN_00414ad0(param_4,local_38);
  }
  else if (param_1 == '\x01') {
    FUN_00de8980(&local_50,0x13c,param_5);
    FUN_00416ad0(&local_50,L" (A)");
    local_20 = local_50;
    local_18 = 0x11;
    FUN_00442f70(&local_48,L"%17s",&local_20,0);
    FUN_00414ad0(param_3,local_48);
    FUN_00de8980(&local_60,0x13c,param_5);
    FUN_00416ad0(&local_60,L" (B)");
    local_20 = local_60;
    local_18 = 0x11;
    FUN_00442f70(&local_58,L"%17s",&local_20,0);
    FUN_00414ad0(param_4,local_58);
  }
  FUN_00414560(&local_60,8);
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return;
}

