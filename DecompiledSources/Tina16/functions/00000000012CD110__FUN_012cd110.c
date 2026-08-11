/* Ghidra address: 012cd110 */
/* Ghidra symbol: FUN_012cd110 */


void FUN_012cd110(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20[0] = param_2;
  FUN_00442f70(&local_10,*(undefined8 *)(param_1 + 0x720),local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_10);
  local_18 = 0;
  local_20[0] = param_3;
  FUN_00442f70(&local_28,*(undefined8 *)(param_1 + 0x728),local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_28);
  local_18 = 0;
  local_20[0] = param_4;
  FUN_00442f70(&local_30,*(undefined8 *)(param_1 + 0x730),local_20,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_30);
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_10);
  return;
}

