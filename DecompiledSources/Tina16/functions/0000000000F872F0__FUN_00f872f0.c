/* Ghidra address: 00f872f0 */
/* Ghidra symbol: FUN_00f872f0 */


void FUN_00f872f0(longlong param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_0043fba0(&local_18,*(undefined4 *)(param_1 + 0x704),4);
  FUN_00416ba0(&local_10,&DAT_00f873c8,local_18);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_10);
  FUN_0043f750(&local_20,*(undefined4 *)(param_1 + 0x700));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_20);
  FUN_00414560(&local_20,3);
  return;
}

