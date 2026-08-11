/* Ghidra address: 019b6320 */
/* Ghidra symbol: FUN_019b6320 */


void FUN_019b6320(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    *param_1 = *(longlong *)(lVar1 + 0x3f0);
    FUN_004095f0(lVar1);
    lVar1 = *param_1;
  }
  return;
}

