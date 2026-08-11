/* Ghidra address: 013cb350 */
/* Ghidra symbol: FUN_013cb350 */


void FUN_013cb350(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d43440(&local_10,*(undefined4 *)(param_1 + 0x908));
  FUN_00416ba0(param_1 + 0x910,L"MyFunction",local_10);
  FUN_00414480(param_1 + 0x918);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(param_1 + 0x910));
  FUN_00414480(&local_10);
  return;
}

