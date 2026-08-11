/* Ghidra address: 005d2020 */
/* Ghidra symbol: FUN_005d2020 */


undefined8 FUN_005d2020(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong local_res10 [3];
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_38;
  int local_34;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  char local_11;
  undefined8 local_10;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_20 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  FUN_0043ea00(&local_48,local_res10[0]);
  FUN_00414b50(local_res10,local_48);
  FUN_00416780(&local_50,DAT_02011f42);
  FUN_00416780(&local_58,DAT_02011f40);
  FUN_00416ba0(&local_20,local_50,local_58);
  local_24 = FUN_004413f0(local_20,local_res10[0]);
  local_28 = FUN_005d27e0(local_res10[0],&local_11);
  local_2d = 0 < local_24;
  local_38 = 0;
  if (local_res10[0] != 0) {
    local_38 = *(int *)(local_res10[0] + -4);
  }
  local_34 = local_38;
  local_2c = 0;
  if ((bool)local_2d) {
    cVar1 = FUN_005d2c80(local_res10[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_005d2b20(local_res10[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_005d2d40(local_11);
        if (cVar1 == '\0') {
          if (local_24 == local_28) {
            if (local_24 < local_34) {
              local_2c = 1;
            }
            else {
              local_2c = 0;
            }
          }
          else {
            local_2c = local_24 + -1;
          }
        }
        else {
          local_2c = 0;
        }
      }
      else if (*(short *)(local_res10[0] + (longlong)(local_24 + -2) * 2) == DAT_02011f46) {
        cVar1 = FUN_005d2d40(local_11);
        if (cVar1 == '\0') {
          if (local_24 < local_34) {
            local_2c = local_24;
          }
          else {
            local_2c = 0;
          }
        }
        else {
          local_2c = local_24 + -1;
        }
      }
      else if (local_28 < local_24) {
        local_2c = local_24 + -1;
      }
      else {
        local_2c = 0;
      }
    }
    else {
      if (local_11 == '\0') {
        local_28 = local_28 + 2;
      }
      local_28 = FUN_00441450(local_20,local_res10[0],local_28 + 1);
      if (0 < local_28) {
        local_28 = FUN_00441450(local_20,local_res10[0],local_28 + 1);
      }
      if (local_28 == 0) {
        local_2c = 0;
      }
      else {
        local_2c = local_24 + -1;
      }
    }
  }
  else {
    cVar1 = FUN_005d2b20(local_res10[0]);
    if (cVar1 != '\0') {
      FUN_00416780(&local_60,DAT_02011f46);
      local_2c = FUN_004170c0(local_60,local_res10[0],local_28);
      if (local_2c == local_34) {
        local_2c = 0;
      }
    }
  }
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_10,local_res10[0],1,local_2c);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_60,4);
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

