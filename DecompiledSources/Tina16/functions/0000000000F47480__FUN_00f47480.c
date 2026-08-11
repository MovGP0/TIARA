/* Ghidra address: 00f47480 */
/* Ghidra symbol: FUN_00f47480 */


undefined8 FUN_00f47480(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = FUN_0198a580(param_2);
  if ((byte)uVar2 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1aU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar1 = 0;
    do {
      if ((int)*(short *)(param_2 + 0x26 + (longlong)iVar1 * 2) == *(int *)(param_1 + 0x6c)) {
        *(int *)(param_1 + 0x68) = iVar1;
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x15);
  }
  return 0;
}

