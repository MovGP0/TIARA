/* Ghidra address: 0134efb0 */
/* Ghidra symbol: thunk_FUN_0134efb9 */


undefined4 thunk_FUN_0134efb9(void)

{
  int iVar1;
  longlong lVar2;
  
  while ((&DAT_021078e8)[(int)(DAT_021080e8 & 0x1ff)] == -1) {
    DAT_021080e8 = DAT_021080e8 + 1;
  }
  iVar1 = (&DAT_021078e8)[(int)(DAT_021080e8 & 0x1ff)];
  lVar2 = (longlong)iVar1;
  (&DAT_021078e8)[(int)(DAT_021080e8 & 0x1ff)] = *(undefined4 *)(DAT_021080f0 + 4 + lVar2 * 8);
  *(int *)(DAT_021080f0 + 4 + lVar2 * 8) = DAT_021080fc;
  DAT_021080fc = iVar1;
  DAT_02108100 = DAT_02108100 + -1;
  return *(undefined4 *)(DAT_021080f0 + lVar2 * 8);
}

