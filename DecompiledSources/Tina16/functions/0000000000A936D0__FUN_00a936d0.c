/* Ghidra address: 00a936d0 */
/* Ghidra symbol: FUN_00a936d0 */


undefined8 FUN_00a936d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (*(byte *)(param_1 + 0x60) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x60) & 0x1f)
            & 0x60U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if (*(byte *)(param_1 + 0x4c) < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x4c) & 0x1f)
      ;
      bVar3 = (uVar1 & 0xc) != 0;
      uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar3);
    }
    else {
      uVar2 = 0;
      bVar3 = false;
    }
    if (!bVar3) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return 0;
}

