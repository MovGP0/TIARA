/* Ghidra address: 004b0f60 */
/* Ghidra symbol: FUN_004b0f60 */


int FUN_004b0f60(longlong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = (*(int *)(param_1 + 8) + 0x1f) / 0x20;
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4) != -1) {
        bVar3 = 0;
        do {
          if (0x1f < bVar3 ||
              (1 << (bVar3 & 0x1f) & *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4))
              == 0) {
            iVar1 = iVar2 * 0x20 + (uint)bVar3;
            if (iVar1 < *(int *)(param_1 + 8)) {
              return iVar1;
            }
            return *(int *)(param_1 + 8);
          }
          bVar3 = bVar3 + 1;
        } while (bVar3 != 0x20);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return *(int *)(param_1 + 8);
}

