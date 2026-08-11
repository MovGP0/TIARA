/* Ghidra address: 0094a320 */
/* Ghidra symbol: FUN_0094a320 */


void FUN_0094a320(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_1[1]);
  if (lVar1 != 0) {
    param_1[1] = lVar1;
  }
  return;
}

