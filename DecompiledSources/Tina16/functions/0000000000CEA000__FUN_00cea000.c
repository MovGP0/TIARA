/* Ghidra address: 00cea000 */
/* Ghidra symbol: FUN_00cea000 */


void FUN_00cea000(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00cea770(param_1);
  (**(code **)(*param_1 + 0x98))(param_1);
  lVar1 = param_1[0x15];
  param_1[0x15] = 0;
  FUN_00410f20(lVar1);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

