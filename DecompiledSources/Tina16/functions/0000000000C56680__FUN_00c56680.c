/* Ghidra address: 00c56680 */
/* Ghidra symbol: FUN_00c56680 */


ulonglong FUN_00c56680(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4f0);
  if (7 < iVar1) {
    iVar1 = iVar1 + 4;
  }
  return (ulonglong)*(uint3 *)(param_1 + 0x498 + (longlong)iVar1 * 4);
}

