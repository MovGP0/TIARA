/* Ghidra address: 0043e210 */
/* Ghidra symbol: FUN_0043e210 */


int FUN_0043e210(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + -4);
  }
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  iVar3 = iVar4 - iVar5;
  if ((0 < iVar4) && (0 < iVar5)) {
    if (iVar3 < 0) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar5 * 2) {
      do {
        uVar1 = *(uint *)(param_1 + iVar4);
        uVar2 = *(uint *)(param_2 + iVar4);
        if (uVar1 != uVar2) {
          if ((uVar1 & 0xffff) != (uVar2 & 0xffff)) {
            return (uVar1 & 0xffff) - (uVar2 & 0xffff);
          }
          if (uVar1 >> 0x10 != uVar2 >> 0x10) {
            return (uVar1 >> 0x10) - (uVar2 >> 0x10);
          }
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar5 * 2);
    }
  }
  return iVar3;
}

