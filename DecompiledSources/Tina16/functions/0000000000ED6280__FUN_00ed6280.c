/* Ghidra address: 00ed6280 */
/* Ghidra symbol: FUN_00ed6280 */


void FUN_00ed6280(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

