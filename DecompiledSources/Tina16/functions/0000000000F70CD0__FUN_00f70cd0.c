/* Ghidra address: 00f70cd0 */
/* Ghidra symbol: FUN_00f70cd0 */


void FUN_00f70cd0(longlong param_1)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x120));
    FUN_00f6da40(&local_28,*(undefined1 *)(param_1 + 0x125));
    FUN_00416cd0(&local_10,7,*(undefined8 *)(param_1 + 0x110),&DAT_00f70f5c,&DAT_00f70f70,
                 local_20[0],&DAT_00f70f84,local_28,&DAT_00f70f94);
  }
  else if (*(char *)(param_1 + 0x30) == '\x02') {
    if (*(char *)(param_1 + 0x126) == '\0') {
      FUN_00f6dd20(&local_40,*(undefined1 *)(param_1 + 0x124));
      FUN_00416cd0(&local_10,6,*(undefined8 *)(param_1 + 0x110),&DAT_00f70f84,local_40,&DAT_00f70f84
                   ,*(undefined8 *)(param_1 + 0x118),&DAT_00f70f94);
    }
    else {
      FUN_00f6dd20(&local_30,*(undefined1 *)(param_1 + 0x124));
      FUN_0043f750(&local_38,*(undefined4 *)(param_1 + 0x120));
      FUN_00416cd0(&local_10,6,*(undefined8 *)(param_1 + 0x110),&DAT_00f70f84,local_30,&DAT_00f70f84
                   ,local_38,&DAT_00f70f94);
    }
  }
  FUN_00f6f0a0(param_1,&local_50);
  FUN_00416ba0(&local_48,local_10,local_50);
  FUN_00f6f540(param_1,local_48);
  FUN_00414560(&local_50,7);
  FUN_00414480(&local_10);
  return;
}

