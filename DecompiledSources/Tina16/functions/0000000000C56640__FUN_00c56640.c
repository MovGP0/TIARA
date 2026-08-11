/* Ghidra address: 00c56640 */
/* Ghidra symbol: FUN_00c56640 */


ulonglong FUN_00c56640(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4ec);
  if (7 < iVar1) {
    iVar1 = iVar1 + 4;
  }
  return (ulonglong)*(uint3 *)(param_1 + 0x498 + (longlong)iVar1 * 4);
}

