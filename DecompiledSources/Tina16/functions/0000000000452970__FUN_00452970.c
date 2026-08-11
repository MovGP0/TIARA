/* Ghidra address: 00452970 */
/* Ghidra symbol: FUN_00452970 */


undefined8 FUN_00452970(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043fbc0(&local_10,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)param_3 * 0x1c),
               8);
  FUN_00416ba0(param_2,PTR_DAT_01dbe7d8,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

