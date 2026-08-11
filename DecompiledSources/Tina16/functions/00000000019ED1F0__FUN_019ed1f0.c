/* Ghidra address: 019ed1f0 */
/* Ghidra symbol: FUN_019ed1f0 */


undefined8 FUN_019ed1f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_22;
  char local_21 [9];
  undefined8 *local_18;
  char local_9;
  
  local_40 = auStack_1c8;
  local_190 = 0;
  local_198 = 0;
  local_80 = 0;
  local_188 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_1a8 = local_21;
  local_1a0 = &local_22;
  local_18 = (undefined8 *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),param_3,param_4,&local_9);
  if (local_9 == '\x03') {
    FUN_004167a0(&local_48,local_18[1]);
    local_30 = FUN_00b8f030(local_48);
    FUN_016b9450(&local_50,local_30);
    FUN_00416880(param_2,local_50);
  }
  else if (local_9 == '\x06') {
    FUN_004167a0(&local_58,local_18[1]);
    local_30 = FUN_00b8f030(local_58);
    FUN_016b9450(&local_60,local_30);
    FUN_00416880(param_2,local_60);
  }
  else if (((local_9 == '\x04') || (local_9 == '\a')) && (local_21[0] == '\x03')) {
    FUN_016b9450(&local_68,*local_18);
    FUN_00416880(param_2,local_68);
  }
  else if ((local_9 == '\x05') && (local_21[0] == '\x03')) {
    FUN_016b9450(&local_70,*local_18);
    FUN_00416880(param_2,local_70);
  }
  else if (local_9 == '\x10') {
    FUN_016b9450(&local_78,*local_18);
    FUN_00416880(param_2,local_78);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414590(&local_198,3);
  FUN_00414590(&local_80,5);
  FUN_00414480(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  return param_2;
}

