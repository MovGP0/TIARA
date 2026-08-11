/* Ghidra address: 004323a0 */
/* Ghidra symbol: FUN_004323a0 */


ulonglong FUN_004323a0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80) {
    if (uVar1 - 0x30 < 0x10) {
      uVar3 = CONCAT71(3,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
                          ((byte)(uVar1 - 0x30) & 0x1f) & 0x3ffU) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  else if (uVar1 < 0x100) {
    if ((byte)(PTR_DAT_0200c3f0[uVar1] - 8) < 8) {
      uVar2 = 1 << (PTR_DAT_0200c3f0[uVar1] - 8 & 0x1f);
      uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xe0) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar4 = FUN_00431e30((ulonglong)uVar1);
    bVar5 = (char)uVar4 - 8;
    if (bVar5 < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar5 & 0x1f);
      uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xe0) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

