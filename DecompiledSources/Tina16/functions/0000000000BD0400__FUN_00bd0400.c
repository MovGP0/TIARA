/* Ghidra address: 00bd0400 */
/* Ghidra symbol: FUN_00bd0400 */


void FUN_00bd0400(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)iVar2 * 0x28) & 8) != 0) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)iVar2 * 0x28);
        *pbVar1 = *pbVar1 | 0x10;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

