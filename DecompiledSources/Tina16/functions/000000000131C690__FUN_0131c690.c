/* Ghidra address: 0131c690 */
/* Ghidra symbol: FUN_0131c690 */


void FUN_0131c690(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_0130e180(*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(param_1 + 0x88),
                 *(undefined1 *)(param_1 + 0xb0),*(longlong *)(lVar1 + 0xa0) + 0x492,
                 *(undefined1 *)(*(longlong *)(lVar1 + 0xa0) + 0xe2b),
                 *(undefined1 *)(param_1 + 0xb1));
  }
  return;
}

