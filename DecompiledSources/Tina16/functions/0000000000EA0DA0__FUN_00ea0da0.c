/* Ghidra address: 00ea0da0 */
/* Ghidra symbol: FUN_00ea0da0 */


longlong FUN_00ea0da0(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = (*(code *)PTR_FUN_01edf908)(0x440);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar2 = FUN_00626730(uVar8 & 0xffffffff);
      *(undefined1 *)(lVar5 + uVar8) = uVar2;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 != 0x100);
    lVar9 = lVar5 + 0x200;
    uVar8 = 0;
    do {
      iVar3 = FUN_006266d0(uVar8 & 0xffffffff);
      if (iVar3 == 0) {
        uVar2 = FUN_00626730(uVar8 & 0xffffffff);
      }
      else {
        uVar2 = FUN_00626740();
      }
      *(undefined1 *)(lVar5 + 0x100 + uVar8) = uVar2;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 != 0x100);
    uVar7 = 0;
    FUN_00626680(lVar9,0,0x140);
    do {
      bVar6 = (byte)uVar7;
      if (uVar7 - 0x30 < 10) {
        *(byte *)(lVar5 + 0x240 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x240 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_00626710(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x260 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x260 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_006266d0(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x280 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x280 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_00626690(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x2a0 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x2a0 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      if (uVar7 == 0x5f) {
        *(byte *)(lVar5 + 0x2ab) = *(byte *)(lVar5 + 0x2ab) | 0x80;
      }
      iVar3 = FUN_00626700(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar9 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar9 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_00626720(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x220 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x220 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_006266c0(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x2c0 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x2c0 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_006266e0(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x2e0 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x2e0 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_006266f0(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 0x300 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 0x300 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      iVar3 = FUN_006266b0(uVar7);
      if (iVar3 != 0) {
        *(byte *)(lVar5 + 800 + (ulonglong)(uVar7 >> 3)) =
             *(byte *)(lVar5 + 800 + (ulonglong)(uVar7 >> 3)) | (byte)(1 << (bVar6 & 7));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x100);
    uVar8 = 0;
    do {
      iVar3 = FUN_00626700(uVar8 & 0xffffffff);
      iVar4 = FUN_006266a0(uVar8 & 0xffffffff);
      bVar6 = (iVar3 != 0) + 2;
      if (iVar4 == 0) {
        bVar6 = iVar3 != 0;
      }
      bVar1 = bVar6 | 4;
      if (9 < (int)uVar8 - 0x30U) {
        bVar1 = bVar6;
      }
      iVar3 = FUN_00626720(uVar8 & 0xffffffff);
      bVar6 = bVar1 | 8;
      if (iVar3 == 0) {
        bVar6 = bVar1;
      }
      iVar3 = FUN_00626690(uVar8 & 0xffffffff);
      bVar1 = bVar6;
      if (iVar3 != 0) {
        bVar1 = bVar6 + 0x10;
      }
      if ((int)uVar8 == 0x5f) {
        bVar1 = bVar6 + 0x10;
      }
      lVar9 = FUN_00626650(s______________01ee14ec,uVar8 & 0xffffffff,0xd);
      bVar6 = bVar1 + 0x80;
      if (lVar9 == 0) {
        bVar6 = bVar1;
      }
      *(byte *)(lVar5 + 0x340 + uVar8) = bVar6;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 != 0x100);
  }
  return lVar5;
}

