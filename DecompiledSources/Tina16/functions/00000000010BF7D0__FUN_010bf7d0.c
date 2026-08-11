/* Ghidra address: 010bf7d0 */
/* Ghidra symbol: FUN_010bf7d0 */


undefined8 FUN_010bf7d0(short param_1)

{
  int iVar1;
  
  iVar1 = -5;
  while ((iVar1 < 5 && (*(short *)(&DAT_01f12146 + (longlong)iVar1 * 2) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                  *(short *)(&DAT_01f12146 + (longlong)iVar1 * 2) == param_1);
}

