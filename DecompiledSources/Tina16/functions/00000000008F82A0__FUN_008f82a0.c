/* Ghidra address: 008f82a0 */
/* Ghidra symbol: FUN_008f82a0 */


bool FUN_008f82a0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  if (*(uint *)(param_1 + 8) == uVar2) {
    if (uVar2 == 0) {
      bVar3 = true;
    }
    else {
      iVar1 = 1;
      do {
        bVar3 = *(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)iVar1 * 2) ==
                *(short *)(param_2 + -2 + (longlong)iVar1 * 2);
        iVar1 = iVar1 + 1;
        if (!bVar3) {
          return bVar3;
        }
      } while (iVar1 <= (int)uVar2);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

