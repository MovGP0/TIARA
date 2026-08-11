/* Ghidra address: 00cac210 */
/* Ghidra symbol: FUN_00cac210 */


void FUN_00cac210(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x120))(param_1);
  lVar1 = param_1[0x21];
  param_1[0x21] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0x28];
  param_1[0x28] = 0;
  FUN_00410f20(lVar1);
  FUN_00c8d2a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

