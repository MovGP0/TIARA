/* Ghidra address: 0068b3a0 */
/* Ghidra symbol: FUN_0068b3a0 */


void FUN_0068b3a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d8));
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

