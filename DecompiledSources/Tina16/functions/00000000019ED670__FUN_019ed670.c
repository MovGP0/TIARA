/* Ghidra address: 019ed670 */
/* Ghidra symbol: FUN_019ed670 */


undefined8
FUN_019ed670(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined8 param_5)

{
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_2a;
  undefined1 local_29 [9];
  undefined8 local_20;
  undefined8 *local_18;
  char local_9;
  
  local_40 = auStack_1b8;
  local_178 = 0;
  local_180 = 0;
  local_68 = 0;
  local_170 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_198 = local_29;
  local_190 = &local_2a;
  local_18 = (undefined8 *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),param_2,param_3,&local_9);
  if (local_9 == '\x03') {
    FUN_004167a0(&local_48,local_18[1]);
    FUN_00b8f030(local_48);
    local_20 = *local_18;
    FUN_016b9450(&local_50,*local_18);
    FUN_00416880(param_5,local_50);
    *param_4 = 0;
  }
  else if (local_9 == '\x06') {
    FUN_004167a0(&local_58,local_18[1]);
    FUN_00b8f030(local_58);
    local_20 = *local_18;
    FUN_016b9450(&local_60,*local_18);
    FUN_00416880(param_5,local_60);
    *param_4 = 0;
  }
  else {
    local_20 = 0;
    FUN_00414480(param_5);
    *param_4 = 0;
  }
  FUN_00414590(&local_180,3);
  FUN_00414590(&local_68,2);
  FUN_00414480(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  return local_20;
}

