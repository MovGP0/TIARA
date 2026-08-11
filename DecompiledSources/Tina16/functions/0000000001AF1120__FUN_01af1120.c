/* Ghidra address: 01af1120 */
/* Ghidra symbol: FUN_01af1120 */


void FUN_01af1120(longlong param_1,char param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 != *(char *)(param_1 + 0x7b2)) {
    *(char *)(param_1 + 0x7b2) = param_2;
    FUN_0064e140(param_1,0);
    FUN_00648780(&local_10,*(undefined8 *)(param_1 + 0x7c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_10);
    *(undefined1 *)(param_1 + 0x7a0) = 1;
  }
  FUN_00414480(&local_10);
  return;
}

