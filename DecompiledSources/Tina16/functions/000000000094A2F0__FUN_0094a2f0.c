/* Ghidra address: 0094a2f0 */
/* Ghidra symbol: FUN_0094a2f0 */


void FUN_0094a2f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,param_1[1]);
  if (lVar1 != 0) {
    param_1[1] = lVar1;
  }
  return;
}

