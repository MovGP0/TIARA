/* Ghidra address: 01b4c5c0 */
/* Ghidra symbol: FUN_01b4c5c0 */


void FUN_01b4c5c0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x14b8));
  FUN_01b4c570(param_1);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x10));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

