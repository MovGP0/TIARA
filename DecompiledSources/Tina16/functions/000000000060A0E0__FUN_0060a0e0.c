/* Ghidra address: 0060a0e0 */
/* Ghidra symbol: FUN_0060a0e0 */


undefined8 FUN_0060a0e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (*(short *)(*(longlong *)(param_1 + 0x60) + 0x6e) == 0x20) {
    if (*(byte *)(param_1 + 0x68) < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),1) <<
              (*(byte *)(param_1 + 0x68) & 0x1f);
      bVar3 = (uVar1 & 6) != 0;
      uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar3);
    }
    else {
      uVar2 = 0;
      bVar3 = false;
    }
    if (bVar3) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return 0;
}

