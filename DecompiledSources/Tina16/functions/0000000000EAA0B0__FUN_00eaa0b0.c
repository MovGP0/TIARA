/* Ghidra address: 00eaa0b0 */
/* Ghidra symbol: FUN_00eaa0b0 */


undefined8 FUN_00eaa0b0(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  undefined1 auStack_88 [32];
  undefined *local_68;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_88;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_14 = FUN_004170c0(&DAT_00eaa2cc,local_res10[0],1);
  while (0 < local_14) {
    local_4c = local_14 + 1;
    local_18 = FUN_004170c0(&DAT_00eaa2cc,local_res10[0],local_4c);
    local_10 = 0;
    FUN_00416dc0(&local_38,local_res10[0],1,local_14 + -1);
    FUN_00416dc0(&local_40,local_res10[0],local_4c,(local_18 - local_14) + -1);
    local_68 = &DAT_00eaa2dc;
    FUN_00416cd0(&local_10,3,local_38,local_40);
    local_1c = 0;
    if (local_res10[0] != 0) {
      local_1c = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416dc0(&local_48,local_res10[0],local_18 + 1,local_1c);
    FUN_00416ba0(local_res10,local_10,local_48);
    FUN_00414480(&local_10);
    local_14 = FUN_004170c0(&DAT_00eaa2cc,local_res10[0],1);
  }
  FUN_0043ea00(param_1,local_res10[0]);
  FUN_00414560(&local_48,3);
  FUN_00414480(local_res10);
  return param_1;
}

