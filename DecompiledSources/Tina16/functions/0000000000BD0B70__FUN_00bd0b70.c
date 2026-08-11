/* Ghidra address: 00bd0b70 */
/* Ghidra symbol: FUN_00bd0b70 */


void FUN_00bd0b70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28;
      *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
      *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfd;
      *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 4;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

