/* Ghidra address: 00f7bd50 */
/* Ghidra symbol: FUN_00f7bd50 */


void FUN_00f7bd50(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x30));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

