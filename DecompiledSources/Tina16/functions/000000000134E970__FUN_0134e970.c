/* Ghidra address: 0134e970 */
/* Ghidra symbol: FUN_0134e970 */


void FUN_0134e970(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((param_2 - DAT_021078bc) + 4) / 8;
  iVar2 = ((param_3 - DAT_021078c0) + 4) / 8;
  if ((((-1 < iVar1) && (iVar1 < DAT_021078c4)) && (-1 < iVar2)) && (iVar2 < DAT_021078c8)) {
    *(undefined1 *)(DAT_021078e0 + (longlong)(iVar1 + iVar2 * DAT_021078c4) * 8) = 0xff;
  }
  return;
}

