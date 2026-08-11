/* Ghidra address: 00432150 */
/* Ghidra symbol: FUN_00432150 */


undefined8 FUN_00432150(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80) {
    if (((uVar1 | 0x20) < 0x61) || (0x7a < (uVar1 | 0x20))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  else if (uVar1 < 0x100) {
    if ((byte)PTR_DAT_0200c3f0[uVar1] < 0x10) {
      uVar3 = CONCAT71(3,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
                          (PTR_DAT_0200c3f0[uVar1] & 0x1f) & 0x3e0U) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    bVar2 = FUN_00431e30((ulonglong)uVar1);
    if (bVar2 < 0x10) {
      uVar3 = CONCAT71(3,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar2 & 0x1f) &
                         0x3e0U) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

