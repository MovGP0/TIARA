/* Ghidra address: 00c8eea0 */
/* Ghidra symbol: FUN_00c8eea0 */


void FUN_00c8eea0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x50))(param_1);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[9];
  param_1[9] = 0;
  FUN_00410f20(lVar1);
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

