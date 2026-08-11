/* Ghidra address: 0162f370 */
/* Ghidra symbol: FUN_0162f370 */


void FUN_0162f370(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0xd8);
  iVar2 = 0;
  iVar3 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0xd0) + (longlong)iVar3 * 4);
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x698) + (longlong)iVar1 * 4) != 1)
      {
        *(int *)(*(longlong *)(param_1 + 0x50) + 0xc0 +
                (longlong)(*(int *)(param_1 + 0x2c) + iVar3) * 4) = iVar1;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x698) + (longlong)iVar1 * 4)
             = 1;
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2;
  return;
}

