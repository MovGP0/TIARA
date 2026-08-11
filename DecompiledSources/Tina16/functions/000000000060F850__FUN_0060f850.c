/* Ghidra address: 0060f850 */
/* Ghidra symbol: FUN_0060f850 */


void FUN_0060f850(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_005ffb10(*(undefined8 *)(param_1 + 8),0);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

