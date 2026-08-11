/* Ghidra address: 01d3c840 */
/* Ghidra symbol: FUN_01d3c840 */


void FUN_01d3c840(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x38),(longlong)(*(int *)(param_1 + 0x40) * 8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

