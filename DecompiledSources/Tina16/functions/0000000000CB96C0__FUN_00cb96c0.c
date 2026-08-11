/* Ghidra address: 00cb96c0 */
/* Ghidra symbol: FUN_00cb96c0 */


void FUN_00cb96c0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x1f8))(param_1,0);
  lVar1 = param_1[0x2b];
  param_1[0x2b] = 0;
  FUN_00410f20(lVar1);
  FUN_00cac210(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

