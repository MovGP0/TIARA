/* Ghidra address: 010bf810 */
/* Ghidra symbol: FUN_010bf810 */


undefined2 FUN_010bf810(short param_1)

{
  int iVar1;
  
  iVar1 = -5;
  while ((iVar1 < 5 && (*(short *)(&DAT_01f12146 + (longlong)iVar1 * 2) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 < 4) {
    iVar1 = iVar1 + 1;
  }
  return *(undefined2 *)(&DAT_01f12146 + (longlong)iVar1 * 2);
}

