/* Ghidra address: 016b0ba0 */
/* Ghidra symbol: FUN_016b0ba0 */


void FUN_016b0ba0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_01b202f0(*(longlong *)(param_1 + 0x30));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

