/* Ghidra address: 0161b100 */
/* Ghidra symbol: FUN_0161b100 */


void FUN_0161b100(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

