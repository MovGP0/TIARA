/* Ghidra address: 016ee640 */
/* Ghidra symbol: FUN_016ee640 */


undefined8
FUN_016ee640(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_3 & 0xff) * 8);
  iVar2 = FUN_01b05690(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_5 * 8),
                       *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + -1 + (ulonglong)param_5),
                       param_4);
  return *(undefined8 *)(param_2 + (longlong)iVar2 * 8);
}

