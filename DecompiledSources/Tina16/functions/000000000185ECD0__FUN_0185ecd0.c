/* Ghidra address: 0185ecd0 */
/* Ghidra symbol: FUN_0185ecd0 */


void FUN_0185ecd0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined1 *)(lVar1 + 0x8010 + (longlong)*(int *)(lVar1 + 0x9010)) = param_2;
  *(int *)(lVar1 + 0x9010) = *(int *)(lVar1 + 0x9010) + 1;
  return;
}

