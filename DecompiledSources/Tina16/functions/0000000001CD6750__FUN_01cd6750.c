/* Ghidra address: 01cd6750 */
/* Ghidra symbol: FUN_01cd6750 */


undefined8 FUN_01cd6750(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x122) == '\0') {
    uVar2 = FUN_01cd6670(param_1);
    if ((byte)uVar2 < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f);
      bVar4 = (uVar1 & 1) != 0;
      uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
      bVar4 = false;
    }
    if (bVar4) {
      if (*(byte *)(param_1 + 0x70) < 8) {
        bVar4 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (*(byte *)(param_1 + 0x70) & 0x1f) & 3U) !=
                0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_01cd67b0;
    }
    uVar2 = 0;
  }
  else {
LAB_01cd67b0:
    uVar2 = 1;
  }
  return uVar2;
}

