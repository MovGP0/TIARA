/* Ghidra address: 0080b120 */
/* Ghidra symbol: FUN_0080b120 */


undefined8 FUN_0080b120(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (PTR_DAT_02005bd0[0xd] != '\0') {
    if (*(byte *)(param_1 + 0x79) < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)PTR_DAT_02005bd0 >> 8),1) <<
              (*(byte *)(param_1 + 0x79) & 0x1f);
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

