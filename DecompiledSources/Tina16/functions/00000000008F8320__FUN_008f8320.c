/* Ghidra address: 008f8320 */
/* Ghidra symbol: FUN_008f8320 */


undefined8 FUN_008f8320(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  if ((*(int *)(param_1 + 8) < (int)uVar3) || (uVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = 1;
    do {
      bVar4 = *(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)iVar2 * 2) ==
              *(short *)(param_2 + -2 + (longlong)iVar2 * 2);
      uVar1 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),bVar4);
      iVar2 = iVar2 + 1;
      if (!bVar4) {
        return uVar1;
      }
    } while (iVar2 <= (int)uVar3);
  }
  return uVar1;
}

