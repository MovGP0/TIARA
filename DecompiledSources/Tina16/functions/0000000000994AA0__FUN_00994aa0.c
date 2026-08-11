/* Ghidra address: 00994aa0 */
/* Ghidra symbol: FUN_00994aa0 */


void FUN_00994aa0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

