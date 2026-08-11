/* Ghidra address: 00f20100 */
/* Ghidra symbol: FUN_00f20100 */


void FUN_00f20100(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

