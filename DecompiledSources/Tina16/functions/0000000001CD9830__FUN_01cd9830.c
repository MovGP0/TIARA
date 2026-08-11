/* Ghidra address: 01cd9830 */
/* Ghidra symbol: FUN_01cd9830 */


void FUN_01cd9830(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_00410f20(param_1[0xe]);
  FUN_01d2d2e0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

