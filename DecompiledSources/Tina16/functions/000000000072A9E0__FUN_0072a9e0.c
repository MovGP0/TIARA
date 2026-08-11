/* Ghidra address: 0072a9e0 */
/* Ghidra symbol: FUN_0072a9e0 */


void FUN_0072a9e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x100));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

