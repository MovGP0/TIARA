/* Ghidra address: 01cdf600 */
/* Ghidra symbol: FUN_01cdf600 */


void FUN_01cdf600(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_00410f20(param_1[0xe]);
  FUN_00410f20(param_1[0xf]);
  FUN_00410f20(param_1[0x10]);
  FUN_00410f20(param_1[0x11]);
  FUN_01d2aed0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

