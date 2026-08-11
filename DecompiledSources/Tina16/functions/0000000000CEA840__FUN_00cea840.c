/* Ghidra address: 00cea840 */
/* Ghidra symbol: FUN_00cea840 */


void FUN_00cea840(longlong *param_1)

{
  longlong lVar1;
  
  FUN_00882a80(param_1);
  lVar1 = FUN_00ce8c10(&PTR_FUN_00ce6390,1,param_1);
  param_1[0x15] = lVar1;
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

