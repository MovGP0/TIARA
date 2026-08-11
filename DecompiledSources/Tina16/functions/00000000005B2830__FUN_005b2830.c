/* Ghidra address: 005b2830 */
/* Ghidra symbol: FUN_005b2830 */


void FUN_005b2830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_005b4770(lVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_005b3800(param_2,param_1);
    }
  }
  return;
}

