/* Ghidra address: 00ee4370 */
/* Ghidra symbol: FUN_00ee4370 */


void FUN_00ee4370(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004169a0(&local_10,*(undefined8 *)(param_2 + 8));
  (**(code **)(**(longlong **)(param_1 + 0x290) + 0x78))(*(longlong **)(param_1 + 0x290),local_10);
  FUN_00414480(&local_10);
  return;
}

