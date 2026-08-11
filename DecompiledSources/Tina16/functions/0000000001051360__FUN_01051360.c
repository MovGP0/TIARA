/* Ghidra address: 01051360 */
/* Ghidra symbol: FUN_01051360 */


void FUN_01051360(longlong param_1)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_50 = 0;
  local_20[0] = 0;
  local_48 = 0;
  local_10 = 0;
  FUN_01600370(&local_10,*(undefined4 *)(param_1 + 0x9a0));
  if (*(int *)(param_1 + 0x918) == 1) {
    FUN_00f8c960(*(undefined8 *)(param_1 + 0x9d8),&local_48);
    local_40 = local_48;
    local_38 = 0x11;
    local_30 = local_10;
    local_28 = 0x11;
    FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x8e0),&local_40,1);
    FUN_0064de00(param_1,local_20[0]);
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x8d0);
    local_38 = 0x11;
    local_30 = local_10;
    local_28 = 0x11;
    FUN_00442f70(&local_50,*(undefined8 *)(param_1 + 0x8e0),&local_40,1);
    FUN_0064de00(param_1,local_50);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

