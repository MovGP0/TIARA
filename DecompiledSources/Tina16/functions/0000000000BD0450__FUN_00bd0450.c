/* Ghidra address: 00bd0450 */
/* Ghidra symbol: FUN_00bd0450 */


void FUN_00bd0450(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)iVar2 * 0x28);
      *pbVar1 = *pbVar1 & 0xf7;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)iVar2 * 0x28);
      *pbVar1 = *pbVar1 & 0xef;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

