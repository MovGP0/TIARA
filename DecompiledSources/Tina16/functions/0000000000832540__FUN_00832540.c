/* Ghidra address: 00832540 */
/* Ghidra symbol: FUN_00832540 */


undefined8
FUN_00832540(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
            int param_6,undefined2 param_7)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  int local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_98;
  local_78 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_5 - param_4 < param_6) {
    local_70 = auStack_98;
    local_49 = FUN_00831a60(param_2,1);
    local_50 = param_5;
    if ((local_49 & 1) != 0) {
      local_50 = param_4;
    }
    local_50 = local_50 + -1;
    FUN_00414480(local_20);
    FUN_00416dc0(local_20,param_3,1,local_50);
    FUN_00414ad0(param_1,local_20[0]);
    FUN_00414480(local_20);
    param_6 = param_6 - (param_5 - param_4);
    local_54 = 1;
    if (0 < param_6) {
      do {
        FUN_00416780(&local_78,param_7);
        FUN_00416ad0(param_1,local_78);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    local_5c = 0;
    if (param_3 != 0) {
      local_5c = *(undefined4 *)(param_3 + -4);
    }
    FUN_00414480(&local_28);
    FUN_00416dc0(&local_28,param_3,local_50 + 1,local_5c);
    FUN_00416ad0(param_1,local_28);
    FUN_00414480(&local_28);
  }
  else if (param_6 < param_5 - param_4) {
    local_70 = auStack_98;
    local_49 = FUN_00831a60(param_2,1);
    if ((local_49 & 1) == 0) {
      FUN_00414480(&local_48);
      FUN_00416dc0(&local_48,param_3,1,param_4 + param_6 + -1);
      local_64 = 0;
      if (param_3 != 0) {
        local_64 = *(undefined4 *)(param_3 + -4);
      }
      FUN_00414480(&local_40);
      FUN_00416dc0(&local_40,param_3,param_5,local_64);
      FUN_00416ba0(param_1,local_48,local_40);
      FUN_00414480(&local_40);
      FUN_00414480(&local_48);
    }
    else {
      FUN_00414480(&local_38);
      FUN_00416dc0(&local_38,param_3,1,param_4 + -1);
      local_60 = 0;
      if (param_3 != 0) {
        local_60 = *(undefined4 *)(param_3 + -4);
      }
      FUN_00414480(&local_30);
      FUN_00416dc0(&local_30,param_3,param_5 - param_6,local_60);
      FUN_00416ba0(param_1,local_38,local_30);
      FUN_00414480(&local_30);
      FUN_00414480(&local_38);
    }
  }
  else {
    FUN_00414ad0(param_1,param_3);
  }
  FUN_00414480(&local_78);
  FUN_00414560(&local_48,6);
  return param_1;
}

