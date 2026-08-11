/* Ghidra address: 010e19d0 */
/* Ghidra symbol: FUN_010e19d0 */


void FUN_010e19d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_010e17c0(*(undefined1 *)(param_1 + 0x7f9),0);
  *(longlong *)(param_1 + 0x8c0) = lVar1;
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(lVar1 + 0x408);
  return;
}

