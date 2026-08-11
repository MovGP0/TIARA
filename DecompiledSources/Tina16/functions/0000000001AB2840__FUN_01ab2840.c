/* Ghidra address: 01ab2840 */
/* Ghidra symbol: FUN_01ab2840 */


void FUN_01ab2840(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01ada1b0(param_1[0xe],param_1);
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_00410f20(param_1[0x16]);
  FUN_01cc8370(param_1[0x19]);
  (**(code **)(*(longlong *)param_1[0x21] + 0x10))((longlong *)param_1[0x21]);
  FUN_00410f20(param_1[0x21]);
  FUN_00410f20(param_1[0x14]);
  FUN_01d2b2f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

