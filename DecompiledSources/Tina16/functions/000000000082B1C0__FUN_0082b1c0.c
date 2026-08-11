/* Ghidra address: 0082b1c0 */
/* Ghidra symbol: FUN_0082b1c0 */


void FUN_0082b1c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0x9c);
  return;
}

