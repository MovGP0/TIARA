/* Ghidra address: 01af17e0 */
/* Ghidra symbol: FUN_01af17e0 */


void FUN_01af17e0(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    FUN_00648720(&local_10,*(undefined8 *)(param_1 + 0x7c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_10);
  }
  else {
    FUN_00648780(&local_18,*(undefined8 *)(param_1 + 0x7c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_18);
  }
  FUN_00414560(&local_18,2);
  return;
}

