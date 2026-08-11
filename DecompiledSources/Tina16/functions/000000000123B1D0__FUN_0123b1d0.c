/* Ghidra address: 0123b1d0 */
/* Ghidra symbol: FUN_0123b1d0 */


longlong FUN_0123b1d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fa0);
  if ((*(short *)(param_1 + 0x1fa4) == 0x50) || (*(short *)(param_1 + 0x1fa4) == 0x53)) {
    iVar1 = iVar1 / 2;
  }
  return (ulonglong)(uint)(iVar1 << 2) * 5;
}

