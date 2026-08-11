/* Ghidra address: 004b19c0 */
/* Ghidra symbol: FUN_004b19c0 */


void FUN_004b19c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_004b2480(lVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_004b23e0(param_2,param_1);
    }
  }
  return;
}

