/* Ghidra address: 01773d60 */
/* Ghidra symbol: FUN_01773d60 */


void FUN_01773d60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  *(undefined4 *)(lVar1 + 0x2a) = 0;
  FUN_010afec0(lVar1);
  return;
}

