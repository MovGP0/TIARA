/* Ghidra address: 01ccdb90 */
/* Ghidra symbol: FUN_01ccdb90 */


void FUN_01ccdb90(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_00410f20(param_1[0x13]);
  FUN_00410f20(param_1[0x14]);
  if (param_1[0x15] != 0) {
    FUN_00410f20(param_1[0x15]);
  }
  if (param_1[0x16] != 0) {
    FUN_00410f20(param_1[0x16]);
  }
  FUN_00410f20(param_1[0x1f]);
  FUN_00410f20(param_1[0x22]);
  FUN_01d2d2e0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

