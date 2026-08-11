/* Ghidra address: 004321f0 */
/* Ghidra symbol: FUN_004321f0 */


undefined8 FUN_004321f0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if (uVar1 < 0x100) {
    if ((byte)PTR_DAT_0200c3f0[uVar1] < 0x10) {
      uVar3 = CONCAT71(0x23,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) <<
                             (PTR_DAT_0200c3f0[uVar1] & 0x1f) & 0x23e0U) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    bVar2 = FUN_00431e30(uVar1);
    if (bVar2 < 0x10) {
      uVar3 = CONCAT71(0x23,((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar2 & 0x1f) &
                            0x23e0U) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

