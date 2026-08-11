/* Ghidra address: 016ee4b0 */
/* Ghidra symbol: FUN_016ee4b0 */


void FUN_016ee4b0(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                 longlong param_5)

{
  longlong lVar1;
  
  if (param_5 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_2 & 0xff) * 8);
    FUN_01b05690(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (param_4 & 0xff) * 8),
                 *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + -1 + (param_4 & 0xff)));
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_5 + 0x40) + -8 + (param_2 & 0xff) * 8);
    FUN_01b05690(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (param_4 & 0xff) * 8),
                 *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + -1 + (param_4 & 0xff)));
  }
  return;
}

