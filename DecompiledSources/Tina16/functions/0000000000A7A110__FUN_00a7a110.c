/* Ghidra address: 00a7a110 */
/* Ghidra symbol: FUN_00a7a110 */


void FUN_00a7a110(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((char)param_1[0x13] != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1);
  }
  FUN_00a7a360(param_1,0);
  FUN_00410f20(param_1[0x15]);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

