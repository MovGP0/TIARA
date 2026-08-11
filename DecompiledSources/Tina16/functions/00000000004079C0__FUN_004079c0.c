/* Ghidra address: 004079c0 */
/* Ghidra symbol: FUN_004079c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_004079c0(ulonglong param_1)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  ushort uVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  
  cVar10 = DAT_020060a9;
  if (param_1 < 0xa29) {
    lVar14 = (ulonglong)(byte)(&DAT_02006a3c)[(int)param_1 + 7U >> 3] * 0x10;
    pcVar17 = &DAT_01db90f8 + lVar14;
    pcVar18 = pcVar17;
    if (DAT_020060a9 != '\0') {
      while( true ) {
        LOCK();
        cVar4 = *pcVar17;
        if (cVar4 == '\0') {
          *pcVar17 = '\x01';
        }
        UNLOCK();
        pcVar18 = pcVar17;
        if (cVar4 == '\0') break;
        pcVar18 = &DAT_01db9138 + lVar14;
        LOCK();
        cVar4 = *pcVar18;
        if (cVar4 == '\0') {
          *pcVar18 = '\x01';
        }
        UNLOCK();
        if (cVar4 == '\0') break;
        pcVar18 = &DAT_01db9178 + lVar14;
        LOCK();
        cVar4 = *pcVar18;
        if (cVar4 == '\0') {
          *pcVar18 = '\x01';
        }
        UNLOCK();
        if (cVar4 == '\0') break;
        if (DAT_02006a35 == '\0') {
          thunk_FUN_0419965d(0);
          LOCK();
          cVar4 = *pcVar17;
          if (cVar4 == '\0') {
            *pcVar17 = '\x01';
          }
          UNLOCK();
          pcVar18 = pcVar17;
          if (cVar4 == '\0') break;
          thunk_FUN_0419965d(10);
        }
      }
    }
    pcVar17 = *(char **)(pcVar18 + 8);
    puVar12 = *(undefined8 **)(pcVar17 + 0x18);
    if (pcVar17 == pcVar18) {
      lVar14 = *(longlong *)(pcVar18 + 0x28);
      uVar5 = *(ushort *)(pcVar18 + 2);
      if (*(undefined8 **)(pcVar18 + 0x20) < puVar12) {
        if (cVar10 != '\0') {
          FUN_00407440();
        }
        uVar19 = (int)pcVar18[1] & _DAT_02006bbc;
        if (uVar19 == 0) {
          if (DAT_02006bb8 < *(ushort *)(pcVar18 + 4)) {
            uVar21 = (ulonglong)*(ushort *)(pcVar18 + 6);
            puVar20 = (undefined8 *)FUN_004075f0();
            if (puVar20 == (undefined8 *)0x0) {
              DAT_02006ba8 = 0;
              *pcVar18 = '\0';
              return (undefined8 *)0x0;
            }
          }
          else {
            uVar19 = DAT_02006bb8;
            if (*(ushort *)(pcVar18 + 6) + 0xb30 <= DAT_02006bb8) {
              uVar19 = (uint)*(ushort *)(pcVar18 + 6);
            }
            uVar21 = (ulonglong)uVar19;
            puVar20 = (undefined8 *)((longlong)DAT_02006bb0 - uVar21);
            DAT_02006bb8 = DAT_02006bb8 - uVar19;
            DAT_02006bb0 = puVar20;
          }
        }
        else {
          uVar16 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
            }
          }
          iVar8 = 0;
          if ((&DAT_02006bc0)[uVar16] != 0) {
            for (; ((uint)(&DAT_02006bc0)[uVar16] >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
            }
          }
          iVar8 = iVar8 + uVar16 * 0x20;
          lVar14 = (ulonglong)(uint)(iVar8 * 8) * 2;
          puVar20 = *(undefined8 **)((longlong)&PTR_LOOP_02006c48 + lVar14);
          plVar6 = (longlong *)puVar20[1];
          *(longlong **)((longlong)&PTR_LOOP_02006c48 + lVar14) = plVar6;
          *plVar6 = (longlong)&PTR_LOOP_02006c40 + lVar14;
          if ((longlong *)((longlong)&PTR_LOOP_02006c40 + lVar14) == plVar6) {
            bVar9 = (byte)iVar8 & 0x1f;
            puVar2 = &DAT_02006bc0 + uVar16;
            *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
            if (*puVar2 == 0) {
              (&DAT_02006bbc)[(longlong)(int)uVar16 >> 3] =
                   (&DAT_02006bbc)[(longlong)(int)uVar16 >> 3] & ~('\x01' << (uVar16 & 7));
            }
          }
          uVar21 = puVar20[-1] & 0xfffffffffffffff0;
          uVar19 = (uint)uVar21;
          if (uVar19 < 0x10a60) {
            pbVar3 = (byte *)((uVar21 - 8) + (longlong)puVar20);
            *pbVar3 = *pbVar3 & 0xf7;
          }
          else {
            uVar21 = (ulonglong)*(ushort *)(pcVar18 + 6);
            uVar15 = (ulonglong)(uVar19 - *(ushort *)(pcVar18 + 6));
            *(ulonglong *)((longlong)puVar20 + (uVar21 - 8)) = uVar15 + 3;
            *(ulonglong *)((longlong)puVar20 + (uVar15 - 0x10) + uVar21) = uVar15;
            FUN_004074e0();
          }
        }
        puVar20[-1] = (ulonglong)((int)uVar21 + 6);
        DAT_02006ba8 = 0;
        *puVar20 = pcVar18;
        puVar20[3] = 0;
        *(undefined4 *)(puVar20 + 4) = 1;
        *(undefined8 **)(pcVar18 + 0x28) = puVar20;
        puVar12 = puVar20 + 6;
        *(ulonglong *)(pcVar18 + 0x18) = (ulonglong)*(ushort *)(pcVar18 + 2) + (longlong)puVar12;
        *(ulonglong *)(pcVar18 + 0x20) = (longlong)puVar20 + (uVar21 - *(ushort *)(pcVar18 + 2));
        *pcVar18 = '\0';
        puVar20[5] = puVar20;
      }
      else {
        piVar1 = (int *)(lVar14 + 0x20);
        *piVar1 = *piVar1 + 1;
        *(ulonglong *)(pcVar18 + 0x18) = (ulonglong)uVar5 + (longlong)puVar12;
        *pcVar18 = '\0';
        puVar12[-1] = lVar14;
      }
    }
    else {
      *(int *)(pcVar17 + 0x20) = *(int *)(pcVar17 + 0x20) + 1;
      uVar21 = puVar12[-1];
      *(ulonglong *)(pcVar17 + 0x18) = uVar21 & 0xfffffffffffffff8;
      puVar12[-1] = pcVar17;
      if ((uVar21 & 0xfffffffffffffff8) == 0) {
        lVar14 = *(longlong *)(pcVar17 + 8);
        *(char **)(lVar14 + 0x10) = pcVar18;
        *(longlong *)(pcVar18 + 8) = lVar14;
        *pcVar18 = '\0';
      }
      else {
        *pcVar18 = '\0';
      }
    }
  }
  else if (param_1 < 0x40a29) {
    uVar19 = (int)param_1 + 0xd7U & 0xffffff00;
    uVar16 = uVar19 + 0x30;
    uVar21 = (ulonglong)uVar16;
    if (DAT_020060a9 != '\0') {
      FUN_00407440();
    }
    uVar19 = uVar19 - 0xb00;
    uVar15 = (ulonglong)(uVar19 >> 0xd);
    uVar11 = -1 << ((byte)(uVar19 >> 8) & 0x1f) & (&DAT_02006bc0)[uVar15];
    if (uVar11 == 0) {
      uVar19 = -2 << ((byte)(uVar19 >> 0xd) & 0x1f) & _DAT_02006bbc;
      if (uVar19 == 0) {
        if (DAT_02006bb8 < uVar16) {
          puVar12 = (undefined8 *)FUN_004075f0();
        }
        else {
          puVar12 = (undefined8 *)((longlong)DAT_02006bb0 - uVar21);
          DAT_02006bb0 = puVar12;
          DAT_02006bb8 = DAT_02006bb8 - uVar16;
          puVar12[-1] = uVar21 | 2;
        }
        DAT_02006ba8 = 0;
        return puVar12;
      }
      uVar11 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      uVar15 = (ulonglong)uVar11;
      uVar13 = 0;
      if ((&DAT_02006bc0)[uVar15] != 0) {
        for (; ((uint)(&DAT_02006bc0)[uVar15] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
      uVar13 = uVar13 | uVar11 << 5;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
      uVar13 = uVar19 >> 8 & 0xffffffe0 | uVar13;
    }
    uVar19 = uVar13 * 2;
    puVar12 = (undefined8 *)(&PTR_LOOP_02006c48)[uVar19];
    ppuVar7 = (undefined **)puVar12[1];
    (&PTR_LOOP_02006c48)[uVar19] = (undefined *)ppuVar7;
    *ppuVar7 = (undefined *)(&PTR_LOOP_02006c40 + uVar19);
    if (&PTR_LOOP_02006c40 + uVar19 == ppuVar7) {
      bVar9 = (byte)uVar13 & 0x1f;
      puVar2 = &DAT_02006bc0 + uVar15;
      *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      if (*puVar2 == 0) {
        (&DAT_02006bbc)[(longlong)(int)(uint)uVar15 >> 3] =
             (&DAT_02006bbc)[(longlong)(int)(uint)uVar15 >> 3] & ~('\x01' << ((uint)uVar15 & 7));
      }
    }
    uVar16 = (int)(puVar12[-1] & 0xfffffffffffffff0) - uVar16;
    uVar15 = (ulonglong)uVar16;
    if (uVar16 == 0) {
      pbVar3 = (byte *)(((puVar12[-1] & 0xfffffffffffffff0) - 8) + (longlong)puVar12);
      *pbVar3 = *pbVar3 & 0xf7;
    }
    else {
      *(ulonglong *)((longlong)puVar12 + (uVar21 - 8)) = uVar15 + 3;
      *(ulonglong *)((longlong)puVar12 + (uVar15 - 0x10) + uVar21) = uVar15;
      if (0xb2f < uVar16) {
        FUN_004074e0();
      }
    }
    puVar12[-1] = uVar21 + 2;
    DAT_02006ba8 = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
    if (-1 < (longlong)param_1) {
      puVar12 = (undefined8 *)FUN_004076e0();
    }
  }
  return puVar12;
}

