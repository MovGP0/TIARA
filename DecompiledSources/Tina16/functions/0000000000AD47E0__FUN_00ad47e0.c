/* Ghidra address: 00ad47e0 */
/* Ghidra symbol: FUN_00ad47e0 */


void FUN_00ad47e0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0xf0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
    *(undefined1 *)(*(longlong *)(lVar1 + 0x20) + 0x309) = param_2;
  }
  return;
}

