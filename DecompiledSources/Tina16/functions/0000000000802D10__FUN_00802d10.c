/* Ghidra address: 00802d10 */
/* Ghidra symbol: FUN_00802d10 */


ulonglong FUN_00802d10(undefined8 param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = 0;
  lVar4 = FUN_007ff990(param_1);
  if (lVar4 != 0) {
    pcVar5 = (code *)FUN_00411550(lVar4,0xffcf);
    uVar2 = (*pcVar5)(lVar4,param_2);
    uVar7 = (ulonglong)uVar2;
  }
  iVar3 = FUN_007ff9d0();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (((byte)uVar7 & param_2) != 0) {
        return uVar7;
      }
      lVar6 = FUN_007ffa40(param_1,iVar8);
      if (lVar4 != lVar6) {
        pcVar5 = (code *)FUN_00411550(lVar6,0xffcf);
        bVar1 = (*pcVar5)(lVar6,param_2);
        uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar1);
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (((byte)uVar7 & param_2) == 0) {
    uVar2 = FUN_00659ed0(param_1,param_2);
    uVar7 = (ulonglong)uVar2;
  }
  return uVar7;
}

