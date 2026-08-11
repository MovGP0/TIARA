/* Ghidra address: 01be54a0 */
/* Ghidra symbol: FUN_01be54a0 */


void FUN_01be54a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x598) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

