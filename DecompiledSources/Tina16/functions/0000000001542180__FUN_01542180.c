/* Ghidra address: 01542180 */
/* Ghidra symbol: FUN_01542180 */


void FUN_01542180(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

