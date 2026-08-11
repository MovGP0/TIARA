/* Ghidra address: 004e64a0 */
/* Ghidra symbol: FUN_004e64a0 */


void FUN_004e64a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004e6630(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_004e5570(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

