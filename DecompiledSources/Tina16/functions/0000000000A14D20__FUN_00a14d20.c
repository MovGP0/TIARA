/* Ghidra address: 00a14d20 */
/* Ghidra symbol: FUN_00a14d20 */


/* WARNING: Removing unreachable block (ram,0x00a14f37) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a14d20(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  byte abStack_5e8 [136];
  ulonglong local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  byte abStack_148 [264];
  
  param_2 = param_2 >> 2;
  param_3 = param_3 >> 3;
  param_4 = param_4 >> 2;
  iVar1 = param_2 * 0x20 + 4;
  iVar2 = param_3 * 0x20 + 2;
  iVar3 = param_4 * 0x20 + 4;
  uVar8 = *(uint *)(param_1 + 0x9c);
  local_560 = (ulonglong)uVar8;
  local_558 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x30);
  local_550 = param_1;
  if ((int)uVar8 < 1) {
    uVar11 = 0;
  }
  else {
    iVar4 = param_2 * 0x20 + 0x1c;
    iVar5 = param_3 * 0x20 + 0x1e;
    iVar18 = param_4 * 0x20 + 0x1c;
    puVar9 = *(undefined8 **)(param_1 + 0xa0);
    pbVar17 = (byte *)*puVar9;
    pbVar28 = (byte *)puVar9[1];
    pbVar24 = (byte *)puVar9[2];
    iVar15 = 0x7fffffff;
    piVar25 = (int *)&local_548;
    uVar22 = local_560;
    do {
      uVar11 = (uint)*pbVar17;
      if ((int)(uint)*pbVar17 < iVar1) {
        iVar12 = (uVar11 - iVar1) * (uVar11 - iVar1);
        iVar14 = (uVar11 - iVar4) * (uVar11 - iVar4);
      }
      else if (iVar4 < (int)uVar11) {
        iVar12 = (uVar11 - iVar4) * (uVar11 - iVar4);
        iVar14 = (uVar11 - iVar1) * (uVar11 - iVar1);
      }
      else {
        iVar12 = iVar4;
        if (param_2 * 0x40 + 0x20 >> 1 < (int)uVar11) {
          iVar12 = iVar1;
        }
        iVar14 = (uVar11 - iVar12) * (uVar11 - iVar12);
        iVar12 = 0;
      }
      bVar7 = *pbVar28;
      uVar11 = (uint)bVar7;
      if ((int)(uint)bVar7 < iVar2) {
        iVar26 = (uVar11 - iVar2) * 3;
        iVar12 = iVar12 + iVar26 * iVar26;
LAB_00a14e6a:
        iVar26 = iVar5;
      }
      else {
        iVar26 = iVar2;
        if (iVar5 < (int)(uint)bVar7) {
          iVar27 = (uVar11 - iVar5) * 3;
          iVar12 = iVar12 + iVar27 * iVar27;
        }
        else if ((int)(uint)bVar7 <= param_3 * 0x40 + 0x20 >> 1) goto LAB_00a14e6a;
      }
      iVar26 = (uVar11 - iVar26) * 3;
      bVar7 = *pbVar24;
      uVar11 = (uint)bVar7;
      if ((int)(uint)bVar7 < iVar3) {
        iVar27 = (uVar11 - iVar3) * 2;
        iVar12 = iVar12 + iVar27 * iVar27;
LAB_00a14ebb:
        iVar27 = iVar18;
      }
      else {
        iVar27 = iVar3;
        if (iVar18 < (int)(uint)bVar7) {
          iVar19 = (uVar11 - iVar18) * 2;
          iVar12 = iVar12 + iVar19 * iVar19;
        }
        else if ((int)(uint)bVar7 <= param_4 * 0x40 + 0x20 >> 1) goto LAB_00a14ebb;
      }
      iVar27 = (uVar11 - iVar27) * 2;
      iVar14 = iVar26 * iVar26 + iVar14 + iVar27 * iVar27;
      *piVar25 = iVar12;
      if (iVar15 < iVar14) {
        iVar14 = iVar15;
      }
      iVar15 = iVar14;
      piVar25 = piVar25 + 1;
      pbVar24 = pbVar24 + 1;
      pbVar28 = pbVar28 + 1;
      pbVar17 = pbVar17 + 1;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    if (uVar8 == 1) {
      lVar13 = 0;
      uVar11 = 0;
    }
    else {
      lVar13 = 0;
      uVar11 = 0;
      do {
        if (*(int *)((longlong)&local_548 + lVar13 * 4) <= iVar15) {
          lVar16 = (longlong)(int)uVar11;
          uVar11 = uVar11 + 1;
          abStack_148[lVar16] = (byte)lVar13;
        }
        if (*(int *)((longlong)&local_548 + lVar13 * 4 + 4) <= iVar15) {
          lVar16 = (longlong)(int)uVar11;
          uVar11 = uVar11 + 1;
          abStack_148[lVar16] = (byte)lVar13 + 1;
        }
        lVar13 = lVar13 + 2;
      } while (local_560 - (uVar8 & 1) != lVar13);
      if ((ulonglong)(uVar8 & 1) == 0) goto LAB_00a14fa4;
    }
    if (*(int *)((longlong)&local_548 + lVar13 * 4) <= iVar15) {
      lVar16 = (longlong)(int)uVar11;
      uVar11 = uVar11 + 1;
      abStack_148[lVar16] = (byte)lVar13;
    }
  }
LAB_00a14fa4:
  local_548 = _DAT_01e6f5d0;
  uStack_540 = uRam0000000001e6f5d8;
  local_538 = _DAT_01e6f5d0;
  uStack_530 = uRam0000000001e6f5d8;
  local_528 = _DAT_01e6f5d0;
  uStack_520 = uRam0000000001e6f5d8;
  local_518 = _DAT_01e6f5d0;
  uStack_510 = uRam0000000001e6f5d8;
  local_508 = _DAT_01e6f5d0;
  uStack_500 = uRam0000000001e6f5d8;
  local_4f8 = _DAT_01e6f5d0;
  uStack_4f0 = uRam0000000001e6f5d8;
  local_4e8 = _DAT_01e6f5d0;
  uStack_4e0 = uRam0000000001e6f5d8;
  local_4d8 = _DAT_01e6f5d0;
  uStack_4d0 = uRam0000000001e6f5d8;
  local_4c8 = _DAT_01e6f5d0;
  uStack_4c0 = uRam0000000001e6f5d8;
  local_4b8 = _DAT_01e6f5d0;
  uStack_4b0 = uRam0000000001e6f5d8;
  local_4a8 = _DAT_01e6f5d0;
  uStack_4a0 = uRam0000000001e6f5d8;
  local_498 = _DAT_01e6f5d0;
  uStack_490 = uRam0000000001e6f5d8;
  local_488 = _DAT_01e6f5d0;
  uStack_480 = uRam0000000001e6f5d8;
  local_478 = _DAT_01e6f5d0;
  uStack_470 = uRam0000000001e6f5d8;
  local_468 = _DAT_01e6f5d0;
  uStack_460 = uRam0000000001e6f5d8;
  local_458 = _DAT_01e6f5d0;
  uStack_450 = uRam0000000001e6f5d8;
  local_448 = _DAT_01e6f5d0;
  uStack_440 = uRam0000000001e6f5d8;
  local_438 = _DAT_01e6f5d0;
  uStack_430 = uRam0000000001e6f5d8;
  local_428 = _DAT_01e6f5d0;
  uStack_420 = uRam0000000001e6f5d8;
  local_418 = _DAT_01e6f5d0;
  uStack_410 = uRam0000000001e6f5d8;
  local_408 = _DAT_01e6f5d0;
  uStack_400 = uRam0000000001e6f5d8;
  local_3f8 = _DAT_01e6f5d0;
  uStack_3f0 = uRam0000000001e6f5d8;
  local_3e8 = _DAT_01e6f5d0;
  uStack_3e0 = uRam0000000001e6f5d8;
  local_3d8 = _DAT_01e6f5d0;
  uStack_3d0 = uRam0000000001e6f5d8;
  local_3c8 = _DAT_01e6f5d0;
  uStack_3c0 = uRam0000000001e6f5d8;
  local_3b8 = _DAT_01e6f5d0;
  uStack_3b0 = uRam0000000001e6f5d8;
  local_3a8 = _DAT_01e6f5d0;
  uStack_3a0 = uRam0000000001e6f5d8;
  local_398 = _DAT_01e6f5d0;
  uStack_390 = uRam0000000001e6f5d8;
  local_388 = _DAT_01e6f5d0;
  uStack_380 = uRam0000000001e6f5d8;
  local_378 = _DAT_01e6f5d0;
  uStack_370 = uRam0000000001e6f5d8;
  local_368 = _DAT_01e6f5d0;
  uStack_360 = uRam0000000001e6f5d8;
  local_358 = _DAT_01e6f5d0;
  uStack_350 = uRam0000000001e6f5d8;
  if (0 < (int)uVar11) {
    uVar22 = 0;
    do {
      bVar7 = abStack_148[uVar22];
      uVar23 = (ulonglong)bVar7;
      plVar10 = *(longlong **)(local_550 + 0xa0);
      iVar14 = iVar1 - (uint)*(byte *)(*plVar10 + uVar23);
      iVar18 = iVar2 - (uint)*(byte *)(plVar10[1] + uVar23);
      iVar4 = iVar18 * 3;
      iVar12 = iVar3 - (uint)*(byte *)(plVar10[2] + uVar23);
      iVar5 = iVar12 * 2;
      iVar26 = iVar5 * iVar5 + iVar4 * iVar4 + iVar14 * iVar14;
      iVar14 = iVar14 * 0x10;
      iVar27 = iVar18 * 0x48 + 0x90;
      iVar12 = iVar12 * 0x40;
      iVar4 = iVar12 + 0x100;
      iVar5 = iVar12 + 0x300;
      iVar12 = iVar12 + 0x500;
      lVar13 = 0;
      iVar18 = iVar27;
      iVar15 = iVar26;
      do {
        if (iVar15 < *(int *)((longlong)&local_548 + lVar13 * 4)) {
          *(int *)((longlong)&local_548 + lVar13 * 4) = iVar15;
          abStack_5e8[lVar13] = bVar7;
        }
        iVar19 = iVar4 + iVar15;
        if (iVar19 < *(int *)((longlong)&local_548 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&local_548 + lVar13 * 4 + 4) = iVar19;
          abStack_5e8[lVar13 + 1] = bVar7;
        }
        iVar19 = iVar19 + iVar5;
        if (iVar19 < *(int *)((longlong)&uStack_540 + lVar13 * 4)) {
          *(int *)((longlong)&uStack_540 + lVar13 * 4) = iVar19;
          abStack_5e8[lVar13 + 2] = bVar7;
        }
        if (iVar19 + iVar12 < *(int *)((longlong)&uStack_540 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&uStack_540 + lVar13 * 4 + 4) = iVar19 + iVar12;
          abStack_5e8[lVar13 + 3] = bVar7;
        }
        iVar15 = iVar15 + iVar18;
        iVar18 = iVar18 + 0x120;
        lVar13 = lVar13 + 4;
      } while ((int)lVar13 != 0x20);
      iVar26 = iVar26 + iVar14 + 0x40;
      lVar13 = 0;
      iVar18 = iVar27;
      iVar15 = iVar26;
      do {
        if (iVar15 < *(int *)((longlong)&local_4c8 + lVar13 * 4)) {
          *(int *)((longlong)&local_4c8 + lVar13 * 4) = iVar15;
          abStack_5e8[lVar13 + 0x20] = bVar7;
        }
        iVar19 = iVar4 + iVar15;
        if (iVar19 < *(int *)((longlong)&local_4c8 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&local_4c8 + lVar13 * 4 + 4) = iVar19;
          abStack_5e8[lVar13 + 0x21] = bVar7;
        }
        iVar19 = iVar19 + iVar5;
        if (iVar19 < *(int *)((longlong)&uStack_4c0 + lVar13 * 4)) {
          *(int *)((longlong)&uStack_4c0 + lVar13 * 4) = iVar19;
          abStack_5e8[lVar13 + 0x22] = bVar7;
        }
        if (iVar19 + iVar12 < *(int *)((longlong)&uStack_4c0 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&uStack_4c0 + lVar13 * 4 + 4) = iVar19 + iVar12;
          abStack_5e8[lVar13 + 0x23] = bVar7;
        }
        iVar15 = iVar15 + iVar18;
        iVar18 = iVar18 + 0x120;
        lVar13 = lVar13 + 4;
      } while ((int)lVar13 != 0x20);
      iVar26 = iVar26 + iVar14 + 0xc0;
      lVar13 = 0;
      iVar18 = iVar27;
      iVar15 = iVar26;
      do {
        if (iVar15 < *(int *)((longlong)&local_448 + lVar13 * 4)) {
          *(int *)((longlong)&local_448 + lVar13 * 4) = iVar15;
          abStack_5e8[lVar13 + 0x40] = bVar7;
        }
        iVar19 = iVar4 + iVar15;
        if (iVar19 < *(int *)((longlong)&local_448 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&local_448 + lVar13 * 4 + 4) = iVar19;
          abStack_5e8[lVar13 + 0x41] = bVar7;
        }
        iVar19 = iVar19 + iVar5;
        if (iVar19 < *(int *)((longlong)&uStack_440 + lVar13 * 4)) {
          *(int *)((longlong)&uStack_440 + lVar13 * 4) = iVar19;
          abStack_5e8[lVar13 + 0x42] = bVar7;
        }
        if (iVar19 + iVar12 < *(int *)((longlong)&uStack_440 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&uStack_440 + lVar13 * 4 + 4) = iVar19 + iVar12;
          abStack_5e8[lVar13 + 0x43] = bVar7;
        }
        iVar15 = iVar15 + iVar18;
        iVar18 = iVar18 + 0x120;
        lVar13 = lVar13 + 4;
      } while ((int)lVar13 != 0x20);
      iVar26 = iVar26 + iVar14 + 0x140;
      lVar13 = 0;
      do {
        if (iVar26 < *(int *)((longlong)&local_3c8 + lVar13 * 4)) {
          *(int *)((longlong)&local_3c8 + lVar13 * 4) = iVar26;
          abStack_5e8[lVar13 + 0x60] = bVar7;
        }
        iVar18 = iVar4 + iVar26;
        if (iVar18 < *(int *)((longlong)&local_3c8 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&local_3c8 + lVar13 * 4 + 4) = iVar18;
          abStack_5e8[lVar13 + 0x61] = bVar7;
        }
        iVar18 = iVar18 + iVar5;
        if (iVar18 < *(int *)((longlong)&uStack_3c0 + lVar13 * 4)) {
          *(int *)((longlong)&uStack_3c0 + lVar13 * 4) = iVar18;
          abStack_5e8[lVar13 + 0x62] = bVar7;
        }
        if (iVar18 + iVar12 < *(int *)((longlong)&uStack_3c0 + lVar13 * 4 + 4)) {
          *(int *)((longlong)&uStack_3c0 + lVar13 * 4 + 4) = iVar18 + iVar12;
          abStack_5e8[lVar13 + 99] = bVar7;
        }
        iVar26 = iVar26 + iVar27;
        iVar27 = iVar27 + 0x120;
        lVar13 = lVar13 + 4;
      } while ((int)lVar13 != 0x20);
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar11);
  }
  lVar13 = (longlong)(param_4 << 2);
  lVar21 = (longlong)(param_3 << 3);
  local_558 = local_558 + (longlong)(param_2 << 2) * 8;
  lVar16 = 0;
  do {
    lVar20 = *(longlong *)(local_558 + lVar16);
    lVar6 = lVar20 + lVar21 * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 1] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 2] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 3] + 1;
    lVar6 = lVar20 + (lVar21 + 1) * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 4] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 5] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 6] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 7] + 1;
    lVar6 = lVar20 + (lVar21 + 2) * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 8] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 9] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 10] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0xb] + 1;
    lVar20 = lVar20 + (lVar21 + 3) * 0x40;
    *(ushort *)(lVar20 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0xc] + 1;
    *(ushort *)(lVar20 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0xd] + 1;
    *(ushort *)(lVar20 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0xe] + 1;
    *(ushort *)(lVar20 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0xf] + 1;
    lVar20 = *(longlong *)(local_558 + lVar16);
    lVar6 = lVar20 + (lVar21 + 4) * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x10] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x11] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x12] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x13] + 1;
    lVar6 = lVar20 + (lVar21 + 5) * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x14] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x15] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x16] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x17] + 1;
    lVar6 = lVar20 + (lVar21 + 6) * 0x40;
    *(ushort *)(lVar6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x18] + 1;
    *(ushort *)(lVar6 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x19] + 1;
    *(ushort *)(lVar6 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1a] + 1;
    *(ushort *)(lVar6 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1b] + 1;
    lVar20 = lVar20 + (lVar21 + 7) * 0x40;
    *(ushort *)(lVar20 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1c] + 1;
    *(ushort *)(lVar20 + 2 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1d] + 1;
    *(ushort *)(lVar20 + 4 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1e] + 1;
    *(ushort *)(lVar20 + 6 + lVar13 * 2) = abStack_5e8[lVar16 * 4 + 0x1f] + 1;
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x20);
  return;
}

