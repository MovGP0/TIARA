/* Ghidra address: 01bd6510 */
/* Ghidra symbol: FUN_01bd6510 */


void FUN_01bd6510(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xb2];
  param_1[0xb2] = 0;
  FUN_00410f20(lVar1);
  (**(code **)(*param_1 + 0x3c0))(param_1);
  FUN_01bd59b0(param_1);
  return;
}

