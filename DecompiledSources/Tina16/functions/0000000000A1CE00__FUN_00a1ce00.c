/* Ghidra address: 00a1ce00 */
/* Ghidra symbol: FUN_00a1ce00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1ce00(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  
  iVar18 = *(int *)((longlong)param_1 + 0x24);
  uVar1 = *(uint *)((longlong)param_1 + 0x4c);
  uVar20 = (ulonglong)uVar1;
  if (iVar18 != 100) {
    lVar17 = *param_1;
    *(undefined4 *)(lVar17 + 0x28) = 0x14;
    *(int *)(lVar17 + 0x2c) = iVar18;
    (**(code **)*param_1)();
  }
  if (uVar1 == 3) {
    uVar15 = 10;
    if ((int)param_1[10] != 3) {
LAB_00a1ce4a:
      uVar15 = uVar1 * 4 + 2;
    }
  }
  else {
    if ((int)uVar1 < 5) goto LAB_00a1ce4a;
    uVar15 = uVar1 * 6;
  }
  puVar13 = (uint *)param_1[0x3f];
  if ((puVar13 == (uint *)0x0) || ((int)param_1[0x40] < (int)uVar15)) {
    uVar12 = 10;
    if (9 < (int)uVar15) {
      uVar12 = (ulonglong)uVar15;
    }
    *(int *)(param_1 + 0x40) = (int)uVar12;
    puVar13 = (uint *)(**(code **)param_1[1])(param_1,0,uVar12 * 0x24);
    param_1[0x3f] = (longlong)puVar13;
  }
  param_1[0x1f] = (longlong)puVar13;
  *(uint *)(param_1 + 0x1e) = uVar15;
  uVar4 = uRam0000000001e6fe98;
  uVar3 = _DAT_01e6fe90;
  if (uVar1 == 3) {
    lVar17 = param_1[10];
    *puVar13 = 3;
    if ((int)lVar17 == 3) {
      puVar13[1] = 0;
      puVar13[2] = 1;
      puVar13[3] = 2;
      uVar3 = uRam0000000001e6fe98;
      *(undefined8 *)(puVar13 + 5) = _DAT_01e6fe90;
      *(undefined8 *)(puVar13 + 7) = uVar3;
      puVar13[9] = 1;
      uVar3 = uRam0000000001e6fed8;
      puVar13[10] = 0;
      *(undefined8 *)(puVar13 + 0xe) = _DAT_01e6fed0;
      *(undefined8 *)(puVar13 + 0x10) = uVar3;
      puVar13[0x12] = 1;
      uVar4 = uRam0000000001e6ff28;
      uVar3 = _DAT_01e6ff20;
      puVar13[0x13] = 2;
      *(undefined8 *)(puVar13 + 0x17) = _DAT_01e6ff20;
      *(undefined8 *)(puVar13 + 0x19) = uVar4;
      puVar13[0x1b] = 1;
      puVar13[0x1c] = 1;
      *(undefined8 *)(puVar13 + 0x20) = uVar3;
      *(undefined8 *)(puVar13 + 0x22) = uVar4;
      puVar13[0x24] = 1;
      uVar3 = uRam0000000001e6fee8;
      puVar13[0x25] = 0;
      *(undefined8 *)(puVar13 + 0x29) = _DAT_01e6fee0;
      *(undefined8 *)(puVar13 + 0x2b) = uVar3;
      puVar13[0x2d] = 1;
      puVar13[0x2e] = 0;
      puVar13[0x32] = 1;
      puVar13[0x33] = 0x3f;
      puVar13[0x34] = 2;
      puVar13[0x35] = 1;
      puVar13[0x36] = 3;
      puVar13[0x37] = 0;
      puVar13[0x38] = 1;
      uVar3 = uRam0000000001e6ff08;
      puVar13[0x39] = 2;
      *(undefined8 *)(puVar13 + 0x3b) = _DAT_01e6ff00;
      *(undefined8 *)(puVar13 + 0x3d) = uVar3;
      puVar13[0x3f] = 1;
      uVar4 = uRam0000000001e6ff18;
      uVar3 = _DAT_01e6ff10;
      puVar13[0x40] = 2;
      *(undefined8 *)(puVar13 + 0x44) = _DAT_01e6ff10;
      *(undefined8 *)(puVar13 + 0x46) = uVar4;
      puVar13[0x48] = 1;
      puVar13[0x49] = 1;
      *(undefined8 *)(puVar13 + 0x4d) = uVar3;
      *(undefined8 *)(puVar13 + 0x4f) = uVar4;
      puVar13[0x51] = 1;
      puVar13[0x52] = 0;
      *(undefined8 *)(puVar13 + 0x56) = uVar3;
      *(undefined8 *)(puVar13 + 0x58) = uVar4;
      return;
    }
LAB_00a1cfcb:
    iVar11 = iRam0000000001e6fecc;
    iVar10 = iRam0000000001e6fec8;
    iVar9 = iRam0000000001e6fec4;
    iVar8 = _DAT_01e6fec0;
    iVar7 = iRam0000000001e6febc;
    iVar6 = iRam0000000001e6feb8;
    iVar5 = iRam0000000001e6feb4;
    iVar18 = _DAT_01e6feb0;
    if (uVar1 < 8) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar20 - (uVar1 & 7);
      puVar14 = puVar13 + 5;
      uVar12 = uVar16;
      uVar15 = _DAT_01e6fea0;
      uVar19 = uRam0000000001e6fea4;
      uVar21 = uRam0000000001e6fea8;
      uVar22 = uRam0000000001e6feac;
      do {
        puVar14[-4] = uVar15;
        puVar14[-3] = uVar19;
        puVar14[-2] = uVar21;
        puVar14[-1] = uVar22;
        *puVar14 = uVar15 + iVar18;
        puVar14[1] = uVar19 + iVar5;
        puVar14[2] = uVar21 + iVar6;
        puVar14[3] = uVar22 + iVar7;
        uVar15 = uVar15 + iVar8;
        uVar19 = uVar19 + iVar9;
        uVar21 = uVar21 + iVar10;
        uVar22 = uVar22 + iVar11;
        puVar14 = puVar14 + 8;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      if ((uVar1 & 7) == 0) goto LAB_00a1d0fc;
    }
    do {
      puVar13[uVar16 + 1] = (uint)uVar16;
      uVar16 = uVar16 + 1;
    } while (uVar20 != uVar16);
LAB_00a1d0fc:
    uVar3 = uRam0000000001e6fe98;
    *(undefined8 *)(puVar13 + 5) = _DAT_01e6fe90;
    *(undefined8 *)(puVar13 + 7) = uVar3;
    bVar2 = true;
    lVar17 = 1;
  }
  else {
    if ((int)uVar1 < 5) {
      *puVar13 = uVar1;
      if (0 < (int)uVar1) goto LAB_00a1cfcb;
      goto LAB_00a1d0fc;
    }
    uVar15 = uVar1 & 3;
    uVar19 = 0;
    puVar14 = puVar13;
    if (2 < uVar1 - 1) {
      uVar19 = 0;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar19;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        puVar14[9] = 1;
        puVar14[10] = uVar19 + 1;
        *(undefined8 *)(puVar14 + 0xe) = uVar3;
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        puVar14[0x12] = 1;
        puVar14[0x13] = uVar19 + 2;
        *(undefined8 *)(puVar14 + 0x17) = uVar3;
        *(undefined8 *)(puVar14 + 0x19) = uVar4;
        puVar14[0x1b] = 1;
        puVar14[0x1c] = uVar19 + 3;
        *(undefined8 *)(puVar14 + 0x20) = uVar3;
        *(undefined8 *)(puVar14 + 0x22) = uVar4;
        puVar14 = puVar14 + 0x24;
        uVar19 = uVar19 + 4;
      } while (uVar1 - uVar15 != uVar19);
    }
    uVar4 = uRam0000000001e6fe98;
    uVar3 = _DAT_01e6fe90;
    if (uVar15 != 0) {
      iVar18 = -uVar15;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar19;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
    lVar17 = (ulonglong)(uVar1 - 1) + 1;
    bVar2 = false;
  }
  uVar4 = uRam0000000001e6fed8;
  uVar3 = _DAT_01e6fed0;
  puVar13 = puVar13 + lVar17 * 9;
  if (0 < (int)uVar1) {
    uVar21 = uVar1 - 1;
    uVar19 = uVar1 & 3;
    uVar15 = 0;
    puVar14 = puVar13;
    if (2 < uVar21) {
      uVar15 = 0;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        puVar14[9] = 1;
        puVar14[10] = uVar15 + 1;
        *(undefined8 *)(puVar14 + 0xe) = uVar3;
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        puVar14[0x12] = 1;
        puVar14[0x13] = uVar15 + 2;
        *(undefined8 *)(puVar14 + 0x17) = uVar3;
        *(undefined8 *)(puVar14 + 0x19) = uVar4;
        puVar14[0x1b] = 1;
        puVar14[0x1c] = uVar15 + 3;
        *(undefined8 *)(puVar14 + 0x20) = uVar3;
        *(undefined8 *)(puVar14 + 0x22) = uVar4;
        puVar14 = puVar14 + 0x24;
        uVar15 = uVar15 + 4;
      } while (uVar1 - uVar19 != uVar15);
    }
    uVar4 = uRam0000000001e6fed8;
    uVar3 = _DAT_01e6fed0;
    if (uVar19 != 0) {
      iVar18 = -uVar19;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
    uVar4 = uRam0000000001e6fee8;
    uVar3 = _DAT_01e6fee0;
    lVar17 = (ulonglong)uVar21 + 1;
    puVar13 = puVar13 + lVar17 * 9;
    uVar15 = 0;
    puVar14 = puVar13;
    if (2 < uVar21) {
      uVar15 = 0;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        puVar14[9] = 1;
        puVar14[10] = uVar15 + 1;
        *(undefined8 *)(puVar14 + 0xe) = uVar3;
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        puVar14[0x12] = 1;
        puVar14[0x13] = uVar15 + 2;
        *(undefined8 *)(puVar14 + 0x17) = uVar3;
        *(undefined8 *)(puVar14 + 0x19) = uVar4;
        puVar14[0x1b] = 1;
        puVar14[0x1c] = uVar15 + 3;
        *(undefined8 *)(puVar14 + 0x20) = uVar3;
        *(undefined8 *)(puVar14 + 0x22) = uVar4;
        puVar14 = puVar14 + 0x24;
        uVar15 = uVar15 + 4;
      } while (uVar1 - uVar19 != uVar15);
    }
    uVar4 = uRam0000000001e6fee8;
    uVar3 = _DAT_01e6fee0;
    if (uVar19 != 0) {
      iVar18 = -uVar19;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
    uVar4 = uRam0000000001e6fef8;
    uVar3 = _DAT_01e6fef0;
    puVar13 = puVar13 + lVar17 * 9;
    uVar15 = 0;
    puVar14 = puVar13;
    if (2 < uVar21) {
      uVar15 = 0;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        puVar14[9] = 1;
        puVar14[10] = uVar15 + 1;
        *(undefined8 *)(puVar14 + 0xe) = uVar3;
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        puVar14[0x12] = 1;
        puVar14[0x13] = uVar15 + 2;
        *(undefined8 *)(puVar14 + 0x17) = uVar3;
        *(undefined8 *)(puVar14 + 0x19) = uVar4;
        puVar14[0x1b] = 1;
        puVar14[0x1c] = uVar15 + 3;
        *(undefined8 *)(puVar14 + 0x20) = uVar3;
        *(undefined8 *)(puVar14 + 0x22) = uVar4;
        puVar14 = puVar14 + 0x24;
        uVar15 = uVar15 + 4;
      } while (uVar1 - uVar19 != uVar15);
    }
    uVar4 = uRam0000000001e6fef8;
    uVar3 = _DAT_01e6fef0;
    if (uVar19 != 0) {
      iVar18 = -uVar19;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar15;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
    puVar13 = puVar13 + lVar17 * 9;
  }
  uVar4 = uRam0000000001e6ff08;
  uVar3 = _DAT_01e6ff00;
  if (!bVar2) {
    uVar15 = uVar1 & 3;
    uVar19 = 0;
    puVar14 = puVar13;
    if (2 < uVar1 - 1) {
      uVar19 = 0;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar19;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        puVar14[9] = 1;
        puVar14[10] = uVar19 + 1;
        *(undefined8 *)(puVar14 + 0xe) = uVar3;
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        puVar14[0x12] = 1;
        puVar14[0x13] = uVar19 + 2;
        *(undefined8 *)(puVar14 + 0x17) = uVar3;
        *(undefined8 *)(puVar14 + 0x19) = uVar4;
        puVar14[0x1b] = 1;
        puVar14[0x1c] = uVar19 + 3;
        *(undefined8 *)(puVar14 + 0x20) = uVar3;
        *(undefined8 *)(puVar14 + 0x22) = uVar4;
        puVar14 = puVar14 + 0x24;
        uVar19 = uVar19 + 4;
      } while (uVar1 - uVar15 != uVar19);
    }
    uVar4 = uRam0000000001e6ff08;
    uVar3 = _DAT_01e6ff00;
    if (uVar15 != 0) {
      iVar18 = -uVar15;
      do {
        *puVar14 = 1;
        puVar14[1] = uVar19;
        *(undefined8 *)(puVar14 + 5) = uVar3;
        *(undefined8 *)(puVar14 + 7) = uVar4;
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
    lVar17 = (ulonglong)(uVar1 - 1) + 1;
    uVar3 = _DAT_01e6ff10;
    uVar4 = uRam0000000001e6ff18;
    goto joined_r0x00a1d40f;
  }
  *puVar13 = uVar1;
  iVar11 = iRam0000000001e6fecc;
  iVar10 = iRam0000000001e6fec8;
  iVar9 = iRam0000000001e6fec4;
  iVar8 = _DAT_01e6fec0;
  iVar7 = iRam0000000001e6febc;
  iVar6 = iRam0000000001e6feb8;
  iVar5 = iRam0000000001e6feb4;
  iVar18 = _DAT_01e6feb0;
  if (0 < (int)uVar1) {
    if (uVar1 < 8) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar20 - (uVar1 & 7);
      puVar14 = puVar13 + 5;
      uVar12 = uVar16;
      uVar15 = _DAT_01e6fea0;
      uVar19 = uRam0000000001e6fea4;
      uVar21 = uRam0000000001e6fea8;
      uVar22 = uRam0000000001e6feac;
      do {
        puVar14[-4] = uVar15;
        puVar14[-3] = uVar19;
        puVar14[-2] = uVar21;
        puVar14[-1] = uVar22;
        *puVar14 = uVar15 + iVar18;
        puVar14[1] = uVar19 + iVar5;
        puVar14[2] = uVar21 + iVar6;
        puVar14[3] = uVar22 + iVar7;
        uVar15 = uVar15 + iVar8;
        uVar19 = uVar19 + iVar9;
        uVar21 = uVar21 + iVar10;
        uVar22 = uVar22 + iVar11;
        puVar14 = puVar14 + 8;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      if ((uVar1 & 7) == 0) goto LAB_00a1d48d;
    }
    do {
      puVar13[uVar16 + 1] = (uint)uVar16;
      uVar16 = uVar16 + 1;
    } while (uVar20 != uVar16);
  }
LAB_00a1d48d:
  uVar3 = uRam0000000001e6ff08;
  *(undefined8 *)(puVar13 + 5) = _DAT_01e6ff00;
  *(undefined8 *)(puVar13 + 7) = uVar3;
  lVar17 = 1;
  uVar3 = _DAT_01e6ff10;
  uVar4 = uRam0000000001e6ff18;
joined_r0x00a1d40f:
  _DAT_01e6ff10 = uVar3;
  uRam0000000001e6ff18 = uVar4;
  if (0 < (int)uVar1) {
    puVar13 = puVar13 + lVar17 * 9;
    uVar15 = uVar1 & 3;
    uVar19 = 0;
    if (2 < uVar1 - 1) {
      uVar19 = 0;
      do {
        *puVar13 = 1;
        puVar13[1] = uVar19;
        *(undefined8 *)(puVar13 + 5) = uVar3;
        *(undefined8 *)(puVar13 + 7) = uVar4;
        puVar13[9] = 1;
        puVar13[10] = uVar19 + 1;
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        *(undefined8 *)(puVar13 + 0x10) = uVar4;
        puVar13[0x12] = 1;
        puVar13[0x13] = uVar19 + 2;
        *(undefined8 *)(puVar13 + 0x17) = uVar3;
        *(undefined8 *)(puVar13 + 0x19) = uVar4;
        puVar13[0x1b] = 1;
        puVar13[0x1c] = uVar19 + 3;
        *(undefined8 *)(puVar13 + 0x20) = uVar3;
        *(undefined8 *)(puVar13 + 0x22) = uVar4;
        puVar13 = puVar13 + 0x24;
        uVar19 = uVar19 + 4;
      } while (uVar1 - uVar15 != uVar19);
    }
    uVar4 = uRam0000000001e6ff18;
    uVar3 = _DAT_01e6ff10;
    if (uVar15 != 0) {
      iVar18 = -uVar15;
      do {
        *puVar13 = 1;
        puVar13[1] = uVar19;
        *(undefined8 *)(puVar13 + 5) = uVar3;
        *(undefined8 *)(puVar13 + 7) = uVar4;
        uVar19 = uVar19 + 1;
        puVar13 = puVar13 + 9;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
    }
  }
  return;
}

