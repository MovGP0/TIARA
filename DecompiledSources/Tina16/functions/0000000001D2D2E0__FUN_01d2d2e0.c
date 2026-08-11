/* Ghidra address: 01d2d2e0 */
/* Ghidra symbol: FUN_01d2d2e0 */


void FUN_01d2d2e0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_00410f20(param_1[9]);
  FUN_00410f20(param_1[10]);
  FUN_01d2aed0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

