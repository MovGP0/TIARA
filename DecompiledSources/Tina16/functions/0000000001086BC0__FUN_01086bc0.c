/* Ghidra address: 01086bc0 */
/* Ghidra symbol: FUN_01086bc0 */


void FUN_01086bc0(longlong param_1)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_01086b70(param_1,local_20);
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x4c48),local_20[0],L".dat");
  FUN_00442620(param_1 + 0x3c12,local_10);
  _new_mcu_program(*(undefined8 *)(param_1 + 0xb20),param_1 + 0x3c12);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

