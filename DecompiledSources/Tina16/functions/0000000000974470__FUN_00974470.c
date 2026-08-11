/* Ghidra address: 00974470 */
/* Ghidra symbol: FUN_00974470 */


void FUN_00974470(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_00410f20(param_1[0x13]);
  FUN_00410f20(param_1[0xf]);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

