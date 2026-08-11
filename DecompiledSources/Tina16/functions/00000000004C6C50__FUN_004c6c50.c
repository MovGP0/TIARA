/* Ghidra address: 004c6c50 */
/* Ghidra symbol: FUN_004c6c50 */


void FUN_004c6c50(longlong param_1)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = FUN_00588380(*(undefined8 *)(param_1 + 0x70));
  FUN_00587e00(&local_10,local_20);
  FUN_004c8020(*(undefined8 *)(param_1 + 0x60),local_20[0]);
  FUN_00414480(local_20);
  return;
}

