/* Ghidra address: 01d2c800 */
/* Ghidra symbol: FUN_01d2c800 */


void FUN_01d2c800(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),(longlong)(*(int *)(param_1 + 0x58) << 4));
  }
  FUN_01d2aed0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

