/* Ghidra address: 0064a710 */
/* Ghidra symbol: FUN_0064a710 */


ulonglong FUN_0064a710(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,*(longlong *)(DAT_02012300 + 0x20) != 0);
  if ((*(char *)(param_1 + 0x90) != '\0') && (DAT_0201232c == '\x02')) {
    cVar2 = (**(code **)(*DAT_020122f8 + 0xf8))(DAT_020122f8);
    if ((cVar2 == '\0') && (DAT_020122f8[0x21] != 0)) {
      lVar1 = DAT_020122f8[0x21];
      if (lVar1 != 0) {
        pcVar4 = (code *)FUN_00411550(lVar1,0xffba);
        uVar3 = (*pcVar4)(lVar1,*(undefined8 *)(DAT_02012300 + 0x20),DAT_020122f8);
        uVar5 = (ulonglong)uVar3;
      }
    }
    else {
      uVar5 = CONCAT71(uVar6,1);
    }
  }
  return uVar5 & 0xffffffff;
}

