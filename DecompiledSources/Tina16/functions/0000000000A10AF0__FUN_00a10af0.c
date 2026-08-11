/* Ghidra address: 00a10af0 */
/* Ghidra symbol: FUN_00a10af0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a10af0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  int iVar31;
  undefined1 auVar29 [16];
  int iVar32;
  undefined1 auVar30 [16];
  int iVar33;
  ulonglong uVar34;
  
  puVar21 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x58);
  *(undefined8 **)(param_1 + 0x260) = puVar21;
  *puVar21 = &LAB_00a10de0;
  *(undefined4 *)(puVar21 + 2) = 0;
  iVar20 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88);
  *(int *)((longlong)puVar21 + 0x4c) = iVar20;
  if (*(int *)(param_1 + 0x19c) == 2) {
    puVar21[1] = FUN_00a10e00;
    puVar21[3] = FUN_00a10ed0;
    uVar22 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1,1,iVar20);
    puVar25 = *(undefined8 **)(param_1 + 0x260);
  }
  else {
    puVar21[1] = FUN_00a11180;
    puVar21[3] = FUN_00a111c0;
    uVar22 = 0;
    puVar25 = puVar21;
  }
  puVar21[8] = uVar22;
  uVar22 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar25[4] = uVar22;
  uVar22 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar25[5] = uVar22;
  uVar22 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar25[6] = uVar22;
  uVar23 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar25[7] = uVar23;
  iVar19 = iRam0000000001e6f1bc;
  iVar18 = iRam0000000001e6f1b8;
  iVar17 = iRam0000000001e6f1b4;
  iVar16 = _DAT_01e6f1b0;
  uVar15 = uRam0000000001e6f1a8;
  iVar14 = _DAT_01e6f1a0;
  uVar13 = uRam0000000001e6f198;
  iVar12 = _DAT_01e6f190;
  uVar11 = uRam0000000001e6f188;
  iVar10 = _DAT_01e6f180;
  iVar9 = iRam0000000001e6f17c;
  iVar28 = iRam0000000001e6f178;
  iVar26 = iRam0000000001e6f174;
  iVar24 = _DAT_01e6f170;
  uVar8 = uRam0000000001e6f168;
  iVar20 = _DAT_01e6f160;
  uVar2 = puVar25[4];
  uVar3 = puVar25[5];
  uVar4 = puVar25[6];
  if ((uVar2 < uVar3 + 0x400 && uVar3 < uVar2 + 0x400) ||
     (uVar4 < uVar23 + 0x400 && uVar23 < uVar4 + 0x400)) {
    iVar28 = 0x2c8d00;
    iVar26 = 0x5b6900;
    iVar20 = -0xe25100;
    iVar24 = -0xb2f480;
    lVar27 = 0;
    do {
      *(int *)(uVar2 + lVar27) = iVar24 >> 0x10;
      *(int *)(uVar3 + lVar27) = iVar20 >> 0x10;
      *(int *)(uVar4 + lVar27) = iVar26;
      *(int *)(uVar23 + lVar27) = iVar28;
      lVar27 = lVar27 + 4;
      iVar28 = iVar28 + -0x581a;
      iVar26 = iVar26 + -0xb6d2;
      iVar20 = iVar20 + 0x1c5a2;
      iVar24 = iVar24 + 0x166e9;
    } while (lVar27 != 0x400);
  }
  else {
    lVar27 = 0;
    auVar29 = _DAT_01e6f150;
    do {
      iVar33 = auVar29._0_4_;
      uVar34 = auVar29._8_8_;
      iVar31 = auVar29._4_4_;
      iVar32 = auVar29._12_4_;
      auVar5._4_4_ = iVar31;
      auVar5._0_4_ = iVar31;
      auVar5._8_4_ = iVar32;
      auVar5._12_4_ = iVar32;
      piVar1 = (int *)(uVar2 + lVar27 * 4);
      *piVar1 = iVar33 * iVar20 + iVar24 >> 0x10;
      piVar1[1] = iVar31 * iVar20 + iVar26 >> 0x10;
      piVar1[2] = (int)((uVar34 & 0xffffffff) * (ulonglong)uVar8) + iVar28 >> 0x10;
      piVar1[3] = (int)((auVar5._8_8_ & 0xffffffff) * (ulonglong)uVar8) + iVar9 >> 0x10;
      auVar6._4_4_ = iVar31;
      auVar6._0_4_ = iVar31;
      auVar6._8_4_ = iVar32;
      auVar6._12_4_ = iVar32;
      piVar1 = (int *)(uVar3 + lVar27 * 4);
      *piVar1 = iVar33 * iVar10 + iVar24 >> 0x10;
      piVar1[1] = iVar31 * iVar10 + iVar26 >> 0x10;
      piVar1[2] = (int)((uVar34 & 0xffffffff) * (ulonglong)uVar11) + iVar28 >> 0x10;
      piVar1[3] = (int)((auVar6._8_8_ & 0xffffffff) * (ulonglong)uVar11) + iVar9 >> 0x10;
      auVar7._4_4_ = iVar31;
      auVar7._0_4_ = iVar31;
      auVar7._8_4_ = iVar32;
      auVar7._12_4_ = iVar32;
      puVar21 = (undefined8 *)(uVar4 + lVar27 * 4);
      *puVar21 = CONCAT44(iVar31 * iVar12,iVar33 * iVar12);
      *(int *)(puVar21 + 1) = (int)((uVar34 & 0xffffffff) * (ulonglong)uVar13);
      *(int *)((longlong)puVar21 + 0xc) = (int)((auVar7._8_8_ & 0xffffffff) * (ulonglong)uVar13);
      piVar1 = (int *)(uVar23 + lVar27 * 4);
      *piVar1 = iVar33 * iVar14 + iVar24;
      piVar1[1] = iVar31 * iVar14 + iVar26;
      piVar1[2] = (int)((uVar34 & 0xffffffff) * (ulonglong)uVar15) + iVar28;
      piVar1[3] = iVar32 * uVar15 + iVar9;
      lVar27 = lVar27 + 4;
      auVar30._0_4_ = iVar33 + iVar16;
      auVar30._4_4_ = iVar31 + iVar17;
      auVar30._8_4_ = auVar29._8_4_ + iVar18;
      auVar30._12_4_ = iVar32 + iVar19;
      auVar29 = auVar30;
    } while (lVar27 != 0x100);
  }
  return;
}

