/* Ghidra address: 016eeb40 */
/* Ghidra symbol: FUN_016eeb40 */


double FUN_016eeb40(longlong param_1,longlong param_2,ulonglong param_3,byte param_4,
                   undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_3 & 0xff) * 8);
  iVar2 = FUN_01b05600(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_4 * 8),
                       param_5);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (ulonglong)param_4 * 8);
  if (*(byte *)(lVar1 + 5) < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_01b05600(lVar1,param_6);
  }
  return *(double *)(param_2 + (longlong)iVar2 * 8) - *(double *)(param_2 + (longlong)iVar3 * 8);
}

