/* Ghidra address: 00a0fd40 */
/* Ghidra symbol: FUN_00a0fd40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0fd40(longlong *param_1,int param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ushort uVar13;
  short sVar14;
  byte bVar15;
  short sVar18;
  undefined1 auVar19 [16];
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  byte *pbVar23;
  longlong lVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  byte local_558 [268];
  int aiStack_44c [259];
  char cVar16;
  char cVar17;
  
  if (3 < param_3) {
    lVar11 = *param_1;
    *(undefined4 *)(lVar11 + 0x28) = 0x32;
    *(uint *)(lVar11 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  plVar21 = param_1 + 0x21;
  if (param_2 != 0) {
    plVar21 = param_1 + 0x1d;
  }
  lVar11 = plVar21[(int)param_3];
  if (lVar11 == 0) {
    lVar22 = *param_1;
    *(undefined4 *)(lVar22 + 0x28) = 0x32;
    *(uint *)(lVar22 + 0x2c) = param_3;
    (**(code **)*param_1)();
  }
  lVar22 = *param_4;
  if (lVar22 == 0) {
    lVar22 = (**(code **)param_1[1])(param_1,1,0x598);
    *param_4 = lVar22;
  }
  *(longlong *)(lVar22 + 0x90) = lVar11;
  uVar33 = 0;
  uVar29 = 1;
  do {
    bVar9 = *(byte *)(lVar11 + uVar29);
    uVar30 = (int)uVar33 + (uint)bVar9;
    if (0x100 < (int)uVar30) {
      puVar12 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar12 + 5) = 8;
      (*(code *)*puVar12)();
    }
    if (bVar9 != 0) {
      FUN_00626680(local_558 + (int)uVar33,uVar29 & 0xffffffff,(ulonglong)(bVar9 - 1) + 1);
      uVar33 = (ulonglong)uVar30;
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != 0x11);
  local_558[(int)uVar33] = 0;
  uVar30 = (uint)(char)local_558[0];
  if (local_558[0] != 0) {
    iVar34 = 0;
    iVar31 = 0;
    uVar20 = uVar30;
    do {
      if (uVar30 == (int)(char)uVar20) {
        piVar25 = aiStack_44c + (longlong)iVar34 + 1;
        pbVar23 = local_558 + (longlong)iVar34 + 1;
        do {
          *piVar25 = iVar31;
          iVar31 = iVar31 + 1;
          bVar9 = *pbVar23;
          piVar25 = piVar25 + 1;
          iVar34 = iVar34 + 1;
          pbVar23 = pbVar23 + 1;
        } while (uVar30 == (int)(char)bVar9);
      }
      if (1 << ((byte)uVar30 & 0x1f) <= iVar31) {
        puVar12 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar12 + 5) = 8;
        (*(code *)*puVar12)();
      }
      iVar31 = iVar31 * 2;
      uVar30 = uVar30 + 1;
      uVar20 = (uint)local_558[iVar34];
    } while (local_558[iVar34] != 0);
  }
  lVar24 = 0;
  lVar26 = 0;
  do {
    if (*(char *)(lVar11 + 1 + lVar24) == '\0') {
      iVar31 = -1;
    }
    else {
      iVar31 = (int)lVar26;
      *(int *)(lVar22 + 0x4c + lVar24 * 4) = iVar31 - aiStack_44c[(longlong)iVar31 + 1];
      lVar26 = (ulonglong)*(byte *)(lVar11 + 1 + lVar24) + (longlong)iVar31;
      iVar31 = aiStack_44c[lVar26];
    }
    *(int *)(lVar22 + 4 + lVar24 * 4) = iVar31;
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0x10);
  *(undefined4 *)(lVar22 + 0x44) = 0xfffff;
  lVar26 = 0;
  FUN_00626680(lVar22 + 0x98,0,0x400);
  auVar19 = _DAT_01e6f050;
  lVar24 = 1;
  do {
    if (*(char *)(lVar11 + lVar24) != '\0') {
      bVar9 = 8 - (char)lVar24;
      uVar20 = 1;
      iVar31 = 1 << (bVar9 & 0x1f);
      lVar26 = (longlong)(int)lVar26;
      uVar30 = -2 << (bVar9 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar9 & 0x1f);
      if ((int)uVar30 < -2) {
        uVar30 = 0xfffffffe;
      }
      uVar29 = (ulonglong)(iVar31 + 1 + uVar30);
      uVar30 = iVar31 + 2 + uVar30 & 7;
      lVar27 = (uVar29 + 1) - (ulonglong)uVar30;
      uVar28 = (undefined4)lVar24;
      lVar36 = 0;
      lVar1 = lVar26 + 0x12;
      do {
        pbVar23 = (byte *)(lVar11 + 0x11 + lVar26);
        lVar35 = (longlong)(aiStack_44c[lVar26 + 1] << (bVar9 & 0x1f));
        iVar34 = iVar31;
        if (uVar29 + 1 < 8) {
LAB_00a10191:
          iVar34 = iVar34 + 1;
          do {
            *(undefined4 *)(lVar22 + 0x98 + lVar35 * 4) = uVar28;
            *(byte *)(lVar22 + 0x498 + lVar35) = *pbVar23;
            lVar35 = lVar35 + 1;
            iVar34 = iVar34 + -1;
          } while (1 < iVar34);
        }
        else {
          pbVar5 = (byte *)(lVar11 + lVar1 + lVar36);
          pbVar6 = (byte *)(lVar22 + 0x98 + lVar35 * 4);
          pbVar2 = (byte *)(lVar22 + 0x9c + uVar29 * 4 + lVar35 * 4);
          pbVar7 = (byte *)(lVar22 + 0x498 + lVar35);
          pbVar3 = (byte *)(lVar22 + 0x499 + uVar29 + lVar35);
          if (((pbVar6 < pbVar3 && pbVar7 < pbVar2) || (pbVar6 < pbVar5 && pbVar23 < pbVar2)) ||
             (pbVar7 < pbVar5 && pbVar23 < pbVar3)) goto LAB_00a10191;
          lVar4 = lVar27 + lVar35;
          bVar10 = *pbVar23;
          auVar38._1_3_ = 0;
          auVar38[0] = bVar10;
          auVar38[4] = bVar10;
          auVar38._5_3_ = 0;
          auVar38[8] = bVar10;
          auVar38._9_3_ = 0;
          auVar38[0xc] = bVar10;
          auVar38._13_3_ = 0;
          lVar32 = lVar27;
          do {
            puVar8 = (undefined4 *)(lVar22 + 0x98 + lVar35 * 4);
            *puVar8 = uVar28;
            puVar8[1] = uVar28;
            puVar8[2] = uVar28;
            puVar8[3] = uVar28;
            puVar8 = (undefined4 *)(lVar22 + 0xa8 + lVar35 * 4);
            *puVar8 = uVar28;
            puVar8[1] = uVar28;
            puVar8[2] = uVar28;
            puVar8[3] = uVar28;
            auVar40 = auVar38 & auVar19;
            uVar13 = auVar40._0_2_;
            bVar10 = (uVar13 != 0) * (uVar13 < 0x100) * auVar40[0] - (0xff < uVar13);
            uVar13 = auVar40._4_2_;
            bVar15 = (uVar13 != 0) * (uVar13 < 0x100) * auVar40[4] - (0xff < uVar13);
            sVar14 = auVar40._8_2_;
            cVar16 = (0 < sVar14) * (sVar14 < 0x100) * auVar40[8] - (0xff < sVar14);
            sVar14 = auVar40._10_2_;
            sVar18 = CONCAT11((0 < sVar14) * (sVar14 < 0x100) * auVar40[10] - (0xff < sVar14),cVar16
                             );
            sVar14 = auVar40._12_2_;
            cVar17 = (0 < sVar14) * (sVar14 < 0x100) * auVar40[0xc] - (0xff < sVar14);
            sVar14 = auVar40._14_2_;
            sVar14 = (short)(CONCAT13((0 < sVar14) * (sVar14 < 0x100) * auVar40[0xe] -
                                      (0xff < sVar14),CONCAT12(cVar17,sVar18)) >> 0x10);
            uVar39 = CONCAT13((0 < sVar14) * (sVar14 < 0x100) * cVar17 - (0xff < sVar14),
                              CONCAT12((0 < sVar18) * (sVar18 < 0x100) * cVar16 - (0xff < sVar18),
                                       CONCAT11((bVar15 != 0) * (bVar15 < 0x100) * bVar15 -
                                                (0xff < bVar15),
                                                (bVar10 != 0) * (bVar10 < 0x100) * bVar10 -
                                                (0xff < bVar10))));
            *(undefined4 *)(lVar22 + 0x498 + lVar35) = uVar39;
            *(undefined4 *)(lVar22 + 0x49c + lVar35) = uVar39;
            lVar35 = lVar35 + 8;
            lVar32 = lVar32 + -8;
          } while (lVar32 != 0);
          lVar35 = lVar4;
          iVar34 = iVar31 - (int)lVar27;
          if (uVar30 != 0) goto LAB_00a10191;
        }
        lVar26 = lVar26 + 1;
        lVar36 = lVar36 + 1;
        bVar37 = uVar20 < *(byte *)(lVar11 + lVar24);
        uVar20 = uVar20 + 1;
      } while (bVar37);
    }
    lVar24 = lVar24 + 1;
    if (lVar24 == 9) {
      if ((param_2 != 0) && (0 < (int)uVar33)) {
        pbVar23 = (byte *)(lVar11 + 0x11);
        do {
          if (0xf < *pbVar23) {
            puVar12 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar12 + 5) = 8;
            (*(code *)*puVar12)(param_1);
          }
          pbVar23 = pbVar23 + 1;
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
      return;
    }
  } while( true );
}

