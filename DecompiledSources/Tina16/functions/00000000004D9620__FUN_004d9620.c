/* Ghidra address: 004d9620 */
/* Ghidra symbol: FUN_004d9620 */


void FUN_004d9620(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_18,param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_10,local_18);
  FUN_004d8330(param_1,local_10);
  FUN_00414480(&local_18);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

