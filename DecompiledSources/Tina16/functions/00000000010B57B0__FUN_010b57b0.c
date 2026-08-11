/* Ghidra address: 010b57b0 */
/* Ghidra symbol: FUN_010b57b0 */


void FUN_010b57b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_0149d1a0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(lVar1 + 0x99) = 1;
  *(undefined4 *)(lVar1 + 0x9c) = 0xffffff;
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

