/* Ghidra address: 00f6f150 */
/* Ghidra symbol: FUN_00f6f150 */


void FUN_00f6f150(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(undefined4 *)(param_1 + 0x98 + (longlong)iVar1 * 8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c + (longlong)iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

