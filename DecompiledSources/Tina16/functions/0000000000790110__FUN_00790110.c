/* Ghidra address: 00790110 */
/* Ghidra symbol: FUN_00790110 */


void FUN_00790110(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_007902a0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_0078f1e0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

