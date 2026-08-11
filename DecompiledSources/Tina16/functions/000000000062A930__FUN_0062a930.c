/* Ghidra address: 0062a930 */
/* Ghidra symbol: FUN_0062a930 */


ulonglong FUN_0062a930(longlong *param_1,uint param_2)

{
  char *pcVar1;
  short *psVar2;
  byte bVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  
  if (param_1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (param_1[6] == 0) {
    return 0xfffffffe;
  }
  if (param_1[7] == 0) {
    return 0xfffffffe;
  }
  plVar4 = (longlong *)param_1[5];
  if (plVar4 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if ((longlong *)*plVar4 != param_1) {
    return 0xfffffffe;
  }
  iVar10 = (int)plVar4[1];
  if ((((0x38 < iVar10 - 0x39U) ||
       ((0x100400400011001U >> ((ulonglong)(iVar10 - 0x39U) & 0x3f) & 1) == 0)) && (iVar10 != 0x29a)
      ) && (iVar10 != 0x2a)) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[2] == 0) || ((lVar16 = param_1[1], (int)lVar16 != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar10 == 0x29a)))) {
    param_1[4] = (longlong)PTR_s_stream_error_01df5890;
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) {
LAB_0062ade3:
    param_1[4] = (longlong)PTR_s_buffer_error_01df58a8;
    return 0xfffffffb;
  }
  lVar12 = plVar4[8];
  *(uint *)(plVar4 + 8) = param_2;
  if ((int)plVar4[5] == 0) {
    uVar8 = 0;
    if ((int)lVar16 == 0) {
      if ((param_2 != 4) &&
         ((int)(param_2 * 2 + (uint)(4 < (int)param_2) * -9) <=
          (int)((int)lVar12 * 2 + (uint)(4 < (int)lVar12) * -9))) goto LAB_0062ade3;
    }
  }
  else {
    FUN_00632390(plVar4);
    uVar8 = *(uint *)(plVar4 + 5);
    uVar14 = *(uint *)(param_1 + 3);
    uVar17 = uVar8;
    if (uVar14 < uVar8) {
      uVar17 = uVar14;
    }
    if (uVar17 != 0) {
      uVar13 = (ulonglong)uVar17;
      FUN_00626670(param_1[2],plVar4[4],uVar13);
      param_1[2] = param_1[2] + uVar13;
      plVar4[4] = plVar4[4] + uVar13;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar17;
      uVar14 = (int)param_1[3] - uVar17;
      *(uint *)(param_1 + 3) = uVar14;
      uVar8 = (int)plVar4[5] - uVar17;
      *(uint *)(plVar4 + 5) = uVar8;
      if (uVar8 == 0) {
        plVar4[4] = plVar4[2];
        uVar8 = 0;
      }
    }
    if (uVar14 == 0) goto LAB_0062b3ca;
    iVar10 = (int)plVar4[1];
  }
  if (iVar10 == 0x2a) {
    uVar14 = 0;
    if (((int)plVar4[0x16] < 2) && (iVar10 = *(int *)((longlong)plVar4 + 0xac), 1 < iVar10)) {
      uVar14 = 0x40;
      if ((5 < iVar10) && (uVar14 = 0xc0, iVar10 == 6)) {
        uVar14 = 0x80;
      }
    }
    uVar14 = uVar14 | (int)plVar4[9] * 0x1000 - 0x7800U;
    uVar17 = uVar14 | 0x20;
    if (*(int *)((longlong)plVar4 + 0x94) == 0) {
      uVar17 = uVar14;
    }
    *(uint *)(plVar4 + 5) = uVar8 + 1;
    *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)(uVar17 >> 8);
    uVar8 = *(uint *)(plVar4 + 5);
    *(uint *)(plVar4 + 5) = uVar8 + 1;
    *(byte *)(plVar4[2] + (ulonglong)uVar8) =
         ((byte)uVar17 - ((char)(uVar17 / 0x1f << 5) - (char)(uVar17 / 0x1f)) | (byte)uVar17) ^ 0x1f
    ;
    if (*(int *)((longlong)plVar4 + 0x94) != 0) {
      uVar9 = *(undefined4 *)((longlong)param_1 + 0x4c);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 0x18);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 0x10);
      uVar9 = *(undefined4 *)((longlong)param_1 + 0x4c);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 8);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)uVar9;
    }
    uVar9 = FUN_006347b0(0,0,0);
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
    *(undefined4 *)(plVar4 + 1) = 0x71;
    lVar16 = param_1[5];
    FUN_00632390(lVar16);
    uVar8 = *(uint *)(lVar16 + 0x28);
    if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
      uVar8 = *(uint *)(param_1 + 3);
    }
    if (uVar8 != 0) {
      uVar13 = (ulonglong)uVar8;
      FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
      param_1[2] = param_1[2] + uVar13;
      *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
      *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
      iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
      *(int *)(lVar16 + 0x28) = iVar10;
      if (iVar10 == 0) {
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
      }
    }
    if ((int)plVar4[5] != 0) goto LAB_0062b3ca;
    iVar10 = (int)plVar4[1];
LAB_0062abf3:
    if (iVar10 == 0x39) {
      uVar9 = FUN_00634c80(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0x1f;
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0x8b;
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 8;
      piVar5 = (int *)plVar4[6];
      if (piVar5 == (int *)0x0) {
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0;
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0;
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0;
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0;
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 0;
        cVar15 = '\x02';
        if (*(int *)((longlong)plVar4 + 0xac) != 9) {
          cVar15 = '\x04';
          if (1 < *(int *)((longlong)plVar4 + 0xac)) {
            cVar15 = (1 < (int)plVar4[0x16]) << 2;
          }
        }
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(char *)(plVar4[2] + (ulonglong)uVar8) = cVar15;
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = 10;
        *(undefined4 *)(plVar4 + 1) = 0x71;
        lVar16 = param_1[5];
        FUN_00632390(lVar16);
        uVar8 = *(uint *)(lVar16 + 0x28);
        if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
          uVar8 = *(uint *)(param_1 + 3);
        }
        if (uVar8 != 0) {
          uVar13 = (ulonglong)uVar8;
          FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
          param_1[2] = param_1[2] + uVar13;
          *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
          *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
          iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
          *(int *)(lVar16 + 0x28) = iVar10;
          if (iVar10 == 0) {
            *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
          }
        }
        if ((int)plVar4[5] != 0) goto LAB_0062b3ca;
        iVar10 = (int)plVar4[1];
        goto LAB_0062aef6;
      }
      iVar10 = *piVar5;
      iVar11 = piVar5[0xf];
      lVar16 = *(longlong *)(piVar5 + 4);
      lVar12 = *(longlong *)(piVar5 + 8);
      lVar6 = *(longlong *)(piVar5 + 0xc);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) =
           (lVar6 != 0) << 4 |
           (lVar12 != 0) << 3 | (lVar16 != 0) << 2 | (iVar11 != 0) * '\x02' | iVar10 != 0;
      uVar7 = *(undefined1 *)(plVar4[6] + 4);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
      uVar7 = *(undefined1 *)(plVar4[6] + 5);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
      uVar7 = *(undefined1 *)(plVar4[6] + 6);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
      uVar7 = *(undefined1 *)(plVar4[6] + 7);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
      cVar15 = '\x02';
      if (*(int *)((longlong)plVar4 + 0xac) != 9) {
        cVar15 = '\x04';
        if (1 < *(int *)((longlong)plVar4 + 0xac)) {
          cVar15 = (1 < (int)plVar4[0x16]) << 2;
        }
      }
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(char *)(plVar4[2] + (ulonglong)uVar8) = cVar15;
      uVar7 = *(undefined1 *)(plVar4[6] + 0xc);
      uVar8 = *(uint *)(plVar4 + 5);
      *(uint *)(plVar4 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
      lVar16 = plVar4[6];
      if (*(longlong *)(lVar16 + 0x10) != 0) {
        uVar7 = *(undefined1 *)(lVar16 + 0x18);
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
        uVar7 = *(undefined1 *)(plVar4[6] + 0x19);
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
        lVar16 = plVar4[6];
      }
      if (*(int *)(lVar16 + 0x3c) != 0) {
        uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),plVar4[2],(int)plVar4[5]);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
      }
      *(undefined4 *)(plVar4 + 7) = 0;
      *(undefined4 *)(plVar4 + 1) = 0x45;
LAB_0062af16:
      lVar16 = *(longlong *)(plVar4[6] + 0x10);
      if (lVar16 != 0) {
        uVar8 = *(uint *)(plVar4 + 3);
        uVar14 = *(uint *)(plVar4 + 5);
        uVar17 = *(uint *)(plVar4 + 7);
        uVar20 = *(ushort *)(plVar4[6] + 0x18) - uVar17;
        if (uVar8 < uVar14 + uVar20) {
          do {
            iVar10 = uVar8 - uVar14;
            FUN_00626670(plVar4[2] + (ulonglong)uVar14,(ulonglong)uVar17 + lVar16,iVar10);
            *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 3);
            if ((uVar14 < *(uint *)(plVar4 + 3)) && (*(int *)(plVar4[6] + 0x3c) != 0)) {
              uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),
                                   (ulonglong)uVar14 + plVar4[2]);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
            }
            *(int *)(plVar4 + 7) = (int)plVar4[7] + iVar10;
            lVar16 = param_1[5];
            FUN_00632390(lVar16);
            uVar8 = *(uint *)(lVar16 + 0x28);
            if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
              uVar8 = *(uint *)(param_1 + 3);
            }
            if (uVar8 != 0) {
              uVar13 = (ulonglong)uVar8;
              FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
              param_1[2] = param_1[2] + uVar13;
              *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
              *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
              iVar11 = *(int *)(lVar16 + 0x28) - uVar8;
              *(int *)(lVar16 + 0x28) = iVar11;
              if (iVar11 == 0) {
                *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
              }
            }
            if ((int)plVar4[5] != 0) goto LAB_0062b3ca;
            uVar20 = uVar20 - iVar10;
            uVar8 = *(uint *)(plVar4 + 3);
            uVar14 = 0;
            lVar16 = *(longlong *)(plVar4[6] + 0x10);
            uVar17 = *(uint *)(plVar4 + 7);
          } while (uVar8 < uVar20);
        }
        FUN_00626670(plVar4[2] + (ulonglong)uVar14,(ulonglong)uVar17 + lVar16,uVar20);
        uVar20 = uVar20 + (int)plVar4[5];
        *(uint *)(plVar4 + 5) = uVar20;
        if ((uVar14 <= uVar20 && uVar20 - uVar14 != 0) && (*(int *)(plVar4[6] + 0x3c) != 0)) {
          uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),
                               (ulonglong)uVar14 + plVar4[2],uVar20 - uVar14);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
        }
        *(undefined4 *)(plVar4 + 7) = 0;
      }
      *(undefined4 *)(plVar4 + 1) = 0x49;
      lVar16 = *(longlong *)(plVar4[6] + 0x20);
joined_r0x0062b087:
      if (lVar16 != 0) {
        uVar8 = *(uint *)(plVar4 + 5);
        uVar13 = (ulonglong)uVar8;
        uVar19 = (ulonglong)uVar8;
        if (uVar8 != *(uint *)(plVar4 + 3)) goto LAB_0062b133;
        while( true ) {
          if (((uint)uVar19 < (uint)uVar13) && (*(int *)(plVar4[6] + 0x3c) != 0)) {
            uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),uVar19 + plVar4[2]);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
          }
          lVar16 = param_1[5];
          FUN_00632390(lVar16);
          uVar8 = *(uint *)(lVar16 + 0x28);
          if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
            uVar8 = *(uint *)(param_1 + 3);
          }
          if (uVar8 != 0) {
            FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20));
            param_1[2] = param_1[2] + (ulonglong)uVar8;
            *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + (ulonglong)uVar8;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
            *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
            iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
            *(int *)(lVar16 + 0x28) = iVar10;
            if (iVar10 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          uVar13 = 0;
          uVar19 = 0;
          if ((int)plVar4[5] != 0) break;
LAB_0062b133:
          do {
            lVar16 = *(longlong *)(plVar4[6] + 0x20);
            uVar8 = *(uint *)(plVar4 + 7);
            *(uint *)(plVar4 + 7) = uVar8 + 1;
            cVar15 = *(char *)(lVar16 + (ulonglong)uVar8);
            *(int *)(plVar4 + 5) = (int)uVar13 + 1;
            *(char *)(plVar4[2] + uVar13) = cVar15;
            if (cVar15 == '\0') {
              if ((*(int *)(plVar4[6] + 0x3c) != 0) && ((uint)uVar19 < *(uint *)(plVar4 + 5))) {
                uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),uVar19 + plVar4[2]);
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
              }
              *(undefined4 *)(plVar4 + 7) = 0;
              goto LAB_0062b189;
            }
            uVar13 = (ulonglong)*(uint *)(plVar4 + 5);
          } while (*(uint *)(plVar4 + 5) != *(uint *)(plVar4 + 3));
        }
        goto LAB_0062b3ca;
      }
LAB_0062b189:
      *(undefined4 *)(plVar4 + 1) = 0x5b;
      lVar16 = *(longlong *)(plVar4[6] + 0x30);
joined_r0x0062b1ad:
      if (lVar16 != 0) {
        uVar8 = *(uint *)(plVar4 + 5);
        uVar13 = (ulonglong)uVar8;
        uVar19 = (ulonglong)uVar8;
        if (uVar8 != *(uint *)(plVar4 + 3)) goto LAB_0062b259;
        while( true ) {
          if (((uint)uVar19 < (uint)uVar13) && (*(int *)(plVar4[6] + 0x3c) != 0)) {
            uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),uVar19 + plVar4[2]);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
          }
          lVar16 = param_1[5];
          FUN_00632390(lVar16);
          uVar8 = *(uint *)(lVar16 + 0x28);
          if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
            uVar8 = *(uint *)(param_1 + 3);
          }
          if (uVar8 != 0) {
            FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20));
            param_1[2] = param_1[2] + (ulonglong)uVar8;
            *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + (ulonglong)uVar8;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
            *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
            iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
            *(int *)(lVar16 + 0x28) = iVar10;
            if (iVar10 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          uVar13 = 0;
          uVar19 = 0;
          if ((int)plVar4[5] != 0) break;
LAB_0062b259:
          do {
            lVar16 = *(longlong *)(plVar4[6] + 0x30);
            uVar8 = *(uint *)(plVar4 + 7);
            *(uint *)(plVar4 + 7) = uVar8 + 1;
            cVar15 = *(char *)(lVar16 + (ulonglong)uVar8);
            *(int *)(plVar4 + 5) = (int)uVar13 + 1;
            *(char *)(plVar4[2] + uVar13) = cVar15;
            if (cVar15 == '\0') {
              if ((*(int *)(plVar4[6] + 0x3c) != 0) && ((uint)uVar19 < *(uint *)(plVar4 + 5))) {
                uVar9 = FUN_00634c80(*(undefined4 *)((longlong)param_1 + 0x4c),uVar19 + plVar4[2]);
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
              }
              goto LAB_0062b2a8;
            }
            uVar13 = (ulonglong)*(uint *)(plVar4 + 5);
          } while (*(uint *)(plVar4 + 5) != *(uint *)(plVar4 + 3));
        }
        goto LAB_0062b3ca;
      }
LAB_0062b2a8:
      *(undefined4 *)(plVar4 + 1) = 0x67;
      iVar10 = *(int *)(plVar4[6] + 0x3c);
joined_r0x0062b2ca:
      if (iVar10 != 0) {
        uVar8 = *(uint *)(plVar4 + 5);
        if (*(uint *)(plVar4 + 3) < uVar8 + 2) {
          lVar16 = param_1[5];
          FUN_00632390(lVar16);
          uVar8 = *(uint *)(lVar16 + 0x28);
          if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
            uVar8 = *(uint *)(param_1 + 3);
          }
          if (uVar8 != 0) {
            uVar13 = (ulonglong)uVar8;
            FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
            param_1[2] = param_1[2] + uVar13;
            *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
            *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
            iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
            *(int *)(lVar16 + 0x28) = iVar10;
            if (iVar10 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          if ((int)plVar4[5] != 0) goto LAB_0062b3ca;
          uVar8 = 0;
        }
        uVar7 = *(undefined1 *)((longlong)param_1 + 0x4c);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
        uVar7 = *(undefined1 *)((longlong)param_1 + 0x4d);
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
        uVar9 = FUN_00634c80(0,0,0);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
      }
      *(undefined4 *)(plVar4 + 1) = 0x71;
      lVar16 = param_1[5];
      FUN_00632390(lVar16);
      uVar8 = *(uint *)(lVar16 + 0x28);
      if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
        uVar8 = *(uint *)(param_1 + 3);
      }
      if (uVar8 != 0) {
        uVar13 = (ulonglong)uVar8;
        FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
        param_1[2] = param_1[2] + uVar13;
        *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
        *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
        iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
        *(int *)(lVar16 + 0x28) = iVar10;
        if (iVar10 == 0) {
          *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
        }
      }
      if ((int)plVar4[5] != 0) goto LAB_0062b3ca;
    }
    else {
LAB_0062aef6:
      switch(iVar10) {
      case 0x45:
        goto LAB_0062af16;
      case 0x49:
        lVar16 = *(longlong *)(plVar4[6] + 0x20);
        goto joined_r0x0062b087;
      case 0x5b:
        lVar16 = *(longlong *)(plVar4[6] + 0x30);
        goto joined_r0x0062b1ad;
      case 0x67:
        iVar10 = *(int *)(plVar4[6] + 0x3c);
        goto joined_r0x0062b2ca;
      }
    }
    if ((int)param_1[1] == 0) goto LAB_0062b3ea;
LAB_0062b3f7:
    if ((longlong)*(int *)((longlong)plVar4 + 0xac) == 0) {
      uVar8 = FUN_0062bf20(plVar4,param_2);
LAB_0062b96b:
      if ((uVar8 | 1) == 3) {
        *(undefined4 *)(plVar4 + 1) = 0x29a;
      }
      if ((uVar8 | 2) != 2) {
        if (uVar8 == 1) {
LAB_0062b9a7:
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_00632420(plVar4);
            }
            else {
              FUN_00632240(plVar4,0,0,0);
              if (param_2 == 3) {
                lVar16 = plVar4[0xd];
                uVar13 = (ulonglong)(*(int *)((longlong)plVar4 + 0x74) - 1);
                *(undefined2 *)(lVar16 + uVar13 * 2) = 0;
                FUN_00626680(lVar16,0,uVar13 * 2);
                if (*(int *)((longlong)plVar4 + 0x9c) == 0) {
                  *(undefined4 *)((longlong)plVar4 + 0x94) = 0;
                  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
                  *(undefined4 *)((longlong)plVar4 + 0x170c) = 0;
                }
              }
            }
          }
          lVar16 = param_1[5];
          FUN_00632390(lVar16);
          uVar8 = *(uint *)(param_1 + 3);
          uVar14 = *(uint *)(lVar16 + 0x28);
          if (uVar8 < *(uint *)(lVar16 + 0x28)) {
            uVar14 = uVar8;
          }
          if (uVar14 != 0) {
            uVar13 = (ulonglong)uVar14;
            FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
            param_1[2] = param_1[2] + uVar13;
            *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar14;
            uVar8 = (int)param_1[3] - uVar14;
            *(uint *)(param_1 + 3) = uVar8;
            iVar10 = *(int *)(lVar16 + 0x28) - uVar14;
            *(int *)(lVar16 + 0x28) = iVar10;
            if (iVar10 == 0) {
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
            }
          }
          if (uVar8 == 0) {
LAB_0062b3ca:
            *(undefined4 *)(plVar4 + 8) = 0xffffffff;
            return 0;
          }
        }
        goto LAB_0062ba71;
      }
    }
    else if ((int)plVar4[0x16] == 3) {
LAB_0062b838:
      do {
        uVar8 = *(uint *)((longlong)plVar4 + 0x9c);
        if (uVar8 < 0x103) {
          FUN_00629c50(plVar4);
          uVar8 = *(uint *)((longlong)plVar4 + 0x9c);
          if ((param_2 != 0) || (0x102 < uVar8)) {
            if (uVar8 != 0) {
              *(undefined4 *)(plVar4 + 0x11) = 0;
              if (2 < uVar8) goto LAB_0062b5b1;
              uVar13 = (ulonglong)*(uint *)((longlong)plVar4 + 0x94);
              goto LAB_0062b66b;
            }
            *(undefined4 *)((longlong)plVar4 + 0x170c) = 0;
            if (param_2 == 4) {
              uVar8 = *(uint *)((longlong)plVar4 + 0x84);
joined_r0x0062b8d2:
              if ((int)uVar8 < 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = plVar4[10] + (ulonglong)uVar8;
              }
              FUN_006325a0(plVar4,lVar16,*(int *)((longlong)plVar4 + 0x94) - uVar8,1);
              *(undefined4 *)((longlong)plVar4 + 0x84) = *(undefined4 *)((longlong)plVar4 + 0x94);
              lVar16 = *plVar4;
              lVar12 = *(longlong *)(lVar16 + 0x28);
              FUN_00632390(lVar12);
              uVar8 = *(uint *)(lVar12 + 0x28);
              if (*(uint *)(lVar16 + 0x18) < *(uint *)(lVar12 + 0x28)) {
                uVar8 = *(uint *)(lVar16 + 0x18);
              }
              if (uVar8 != 0) {
                uVar13 = (ulonglong)uVar8;
                FUN_00626670(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar12 + 0x20),uVar13);
                *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + uVar13;
                *(longlong *)(lVar12 + 0x20) = *(longlong *)(lVar12 + 0x20) + uVar13;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + uVar8;
                *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) - uVar8;
                iVar10 = *(int *)(lVar12 + 0x28) - uVar8;
                *(int *)(lVar12 + 0x28) = iVar10;
                if (iVar10 == 0) {
                  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
                }
              }
              uVar8 = 3 - (*(int *)(*plVar4 + 0x18) == 0);
              goto LAB_0062b96b;
            }
            if (*(int *)((longlong)plVar4 + 0x16f4) != 0) {
              uVar8 = *(uint *)((longlong)plVar4 + 0x84);
joined_r0x0062bbf0:
              if ((int)uVar8 < 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = plVar4[10] + (ulonglong)uVar8;
              }
              FUN_006325a0(plVar4,lVar16,*(int *)((longlong)plVar4 + 0x94) - uVar8,0);
              *(undefined4 *)((longlong)plVar4 + 0x84) = *(undefined4 *)((longlong)plVar4 + 0x94);
              lVar16 = *plVar4;
              lVar12 = *(longlong *)(lVar16 + 0x28);
              FUN_00632390(lVar12);
              uVar8 = *(uint *)(lVar12 + 0x28);
              if (*(uint *)(lVar16 + 0x18) < *(uint *)(lVar12 + 0x28)) {
                uVar8 = *(uint *)(lVar16 + 0x18);
              }
              if (uVar8 != 0) {
                uVar13 = (ulonglong)uVar8;
                FUN_00626670(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar12 + 0x20),uVar13);
                *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + uVar13;
                *(longlong *)(lVar12 + 0x20) = *(longlong *)(lVar12 + 0x20) + uVar13;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + uVar8;
                *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) - uVar8;
                iVar10 = *(int *)(lVar12 + 0x28) - uVar8;
                *(int *)(lVar12 + 0x28) = iVar10;
                if (iVar10 == 0) {
                  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
                }
              }
              if (*(int *)(*plVar4 + 0x18) != 0) goto LAB_0062b9a7;
              break;
            }
            goto LAB_0062b9a7;
          }
          break;
        }
        *(undefined4 *)(plVar4 + 0x11) = 0;
LAB_0062b5b1:
        uVar13 = (ulonglong)*(uint *)((longlong)plVar4 + 0x94);
        if (uVar13 == 0) {
          uVar13 = 0;
LAB_0062b66b:
          bVar3 = *(byte *)(plVar4[10] + uVar13);
          uVar8 = *(uint *)((longlong)plVar4 + 0x16f4);
          *(undefined2 *)(plVar4[0x2df] + (ulonglong)uVar8 * 2) = 0;
          *(uint *)((longlong)plVar4 + 0x16f4) = uVar8 + 1;
          *(byte *)(plVar4[0x2dd] + (ulonglong)uVar8) = bVar3;
          psVar2 = (short *)((longlong)plVar4 + (ulonglong)bVar3 * 4 + 0xbc);
          *psVar2 = *psVar2 + 1;
          *(int *)((longlong)plVar4 + 0x9c) = *(int *)((longlong)plVar4 + 0x9c) + -1;
          iVar10 = *(int *)((longlong)plVar4 + 0x94) + 1;
          *(int *)((longlong)plVar4 + 0x94) = iVar10;
          if (*(int *)((longlong)plVar4 + 0x16f4) == (int)plVar4[0x2de] + -1) goto LAB_0062b6d0;
          goto LAB_0062b838;
        }
        lVar16 = plVar4[10];
        cVar15 = *(char *)(lVar16 + -1 + uVar13);
        if (((cVar15 != *(char *)(lVar16 + uVar13)) ||
            (lVar16 = lVar16 + uVar13, cVar15 != *(char *)(lVar16 + 1))) ||
           (cVar15 != *(char *)(lVar16 + 2))) goto LAB_0062b66b;
        iVar10 = (int)lVar16;
        iVar11 = 2;
        lVar12 = 0;
        do {
          if (cVar15 != *(char *)(lVar16 + 3 + lVar12)) {
            iVar18 = iVar10 + 1 + iVar11;
            goto LAB_0062b791;
          }
          iVar18 = iVar10 + iVar11;
          if (cVar15 != *(char *)(lVar16 + 4 + lVar12)) {
            iVar18 = iVar18 + 2;
            goto LAB_0062b791;
          }
          if (cVar15 != *(char *)(lVar16 + 5 + lVar12)) {
            iVar18 = iVar18 + 3;
            goto LAB_0062b791;
          }
          if (cVar15 != *(char *)(lVar16 + 6 + lVar12)) {
            iVar18 = iVar18 + 4;
            goto LAB_0062b791;
          }
          if (cVar15 != *(char *)(lVar16 + 7 + lVar12)) {
            iVar18 = iVar18 + 5;
            goto LAB_0062b791;
          }
          if (cVar15 != *(char *)(lVar16 + 8 + lVar12)) {
            iVar18 = iVar18 + 6;
            goto LAB_0062b791;
          }
          if (cVar15 != *(char *)(lVar16 + 9 + lVar12)) {
            iVar18 = iVar18 + 7;
            goto LAB_0062b791;
          }
          lVar6 = lVar12 + 8;
        } while ((lVar12 + 2U < 0xfa) &&
                (iVar11 = iVar11 + 8, pcVar1 = (char *)(lVar16 + 10 + lVar12), lVar12 = lVar6,
                cVar15 == *pcVar1));
        iVar18 = iVar10 + 2 + (int)lVar6;
LAB_0062b791:
        uVar14 = 0x102 - ((iVar10 + 0x102) - iVar18);
        if (uVar8 < uVar14) {
          uVar14 = uVar8;
        }
        *(uint *)(plVar4 + 0x11) = uVar14;
        if (uVar14 < 3) goto LAB_0062b66b;
        uVar8 = *(uint *)((longlong)plVar4 + 0x16f4);
        *(undefined2 *)(plVar4[0x2df] + (ulonglong)uVar8 * 2) = 1;
        *(uint *)((longlong)plVar4 + 0x16f4) = uVar8 + 1;
        *(char *)(plVar4[0x2dd] + (ulonglong)uVar8) = (char)(uVar14 + 0xfd);
        psVar2 = (short *)((longlong)plVar4 +
                          (ulonglong)(byte)(&DAT_01df2e10)[uVar14 + 0xfd & 0xff] * 4 + 0x4c0);
        *psVar2 = *psVar2 + 1;
        psVar2 = (short *)((longlong)plVar4 + (ulonglong)DAT_01df2c10 * 4 + 0x9b0);
        *psVar2 = *psVar2 + 1;
        *(int *)((longlong)plVar4 + 0x9c) = *(int *)((longlong)plVar4 + 0x9c) - (int)plVar4[0x11];
        iVar10 = (int)plVar4[0x11] + *(int *)((longlong)plVar4 + 0x94);
        *(int *)((longlong)plVar4 + 0x94) = iVar10;
        *(undefined4 *)(plVar4 + 0x11) = 0;
        if (*(int *)((longlong)plVar4 + 0x16f4) != (int)plVar4[0x2de] + -1) goto LAB_0062b838;
LAB_0062b6d0:
        uVar8 = *(uint *)((longlong)plVar4 + 0x84);
        if ((int)uVar8 < 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = plVar4[10] + (ulonglong)uVar8;
        }
        FUN_006325a0(plVar4,lVar16,iVar10 - uVar8,0);
        *(undefined4 *)((longlong)plVar4 + 0x84) = *(undefined4 *)((longlong)plVar4 + 0x94);
        lVar16 = *plVar4;
        lVar12 = *(longlong *)(lVar16 + 0x28);
        FUN_00632390(lVar12);
        uVar8 = *(uint *)(lVar12 + 0x28);
        if (*(uint *)(lVar16 + 0x18) < *(uint *)(lVar12 + 0x28)) {
          uVar8 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar8 != 0) {
          uVar13 = (ulonglong)uVar8;
          FUN_00626670(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar12 + 0x20),uVar13);
          *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + uVar13;
          *(longlong *)(lVar12 + 0x20) = *(longlong *)(lVar12 + 0x20) + uVar13;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + uVar8;
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) - uVar8;
          iVar10 = *(int *)(lVar12 + 0x28) - uVar8;
          *(int *)(lVar12 + 0x28) = iVar10;
          if (iVar10 == 0) {
            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
          }
        }
      } while (*(int *)(*plVar4 + 0x18) != 0);
    }
    else {
      if ((int)plVar4[0x16] != 2) {
        uVar8 = (*(code *)(&PTR_FUN_01df1d58)[(longlong)*(int *)((longlong)plVar4 + 0xac) * 2])
                          (plVar4,param_2);
        goto LAB_0062b96b;
      }
      do {
        do {
          if ((*(int *)((longlong)plVar4 + 0x9c) == 0) &&
             (FUN_00629c50(plVar4), *(int *)((longlong)plVar4 + 0x9c) == 0)) {
            if (param_2 != 0) {
              *(undefined4 *)((longlong)plVar4 + 0x170c) = 0;
              if (param_2 == 4) {
                uVar8 = *(uint *)((longlong)plVar4 + 0x84);
                goto joined_r0x0062b8d2;
              }
              if (*(int *)((longlong)plVar4 + 0x16f4) == 0) goto LAB_0062b9a7;
              uVar8 = *(uint *)((longlong)plVar4 + 0x84);
              goto joined_r0x0062bbf0;
            }
            goto LAB_0062b986;
          }
          *(undefined4 *)(plVar4 + 0x11) = 0;
          bVar3 = *(byte *)(plVar4[10] + (ulonglong)*(uint *)((longlong)plVar4 + 0x94));
          uVar8 = *(uint *)((longlong)plVar4 + 0x16f4);
          *(undefined2 *)(plVar4[0x2df] + (ulonglong)uVar8 * 2) = 0;
          *(uint *)((longlong)plVar4 + 0x16f4) = uVar8 + 1;
          *(byte *)(plVar4[0x2dd] + (ulonglong)uVar8) = bVar3;
          psVar2 = (short *)((longlong)plVar4 + (ulonglong)bVar3 * 4 + 0xbc);
          *psVar2 = *psVar2 + 1;
          *(int *)((longlong)plVar4 + 0x9c) = *(int *)((longlong)plVar4 + 0x9c) + -1;
          *(int *)((longlong)plVar4 + 0x94) = *(int *)((longlong)plVar4 + 0x94) + 1;
        } while (*(int *)((longlong)plVar4 + 0x16f4) != (int)plVar4[0x2de] + -1);
        FUN_006325a0(plVar4);
        *(undefined4 *)((longlong)plVar4 + 0x84) = *(undefined4 *)((longlong)plVar4 + 0x94);
        lVar16 = *plVar4;
        lVar12 = *(longlong *)(lVar16 + 0x28);
        FUN_00632390(lVar12);
        uVar8 = *(uint *)(lVar12 + 0x28);
        if (*(uint *)(lVar16 + 0x18) < *(uint *)(lVar12 + 0x28)) {
          uVar8 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar8 != 0) {
          FUN_00626670(*(undefined8 *)(lVar16 + 0x10));
          *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + (ulonglong)uVar8;
          *(longlong *)(lVar12 + 0x20) = *(longlong *)(lVar12 + 0x20) + (ulonglong)uVar8;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + uVar8;
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) - uVar8;
          iVar10 = *(int *)(lVar12 + 0x28) - uVar8;
          *(int *)(lVar12 + 0x28) = iVar10;
          if (iVar10 == 0) {
            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
          }
        }
      } while (*(int *)(*plVar4 + 0x18) != 0);
    }
LAB_0062b986:
    uVar13 = 0;
    if ((int)param_1[3] == 0) {
      *(undefined4 *)(plVar4 + 8) = 0xffffffff;
    }
  }
  else {
    if (iVar10 != 0x29a) goto LAB_0062abf3;
    if ((int)param_1[1] != 0) goto LAB_0062ade3;
LAB_0062b3ea:
    if ((*(int *)((longlong)plVar4 + 0x9c) != 0) || ((param_2 != 0 && ((int)plVar4[1] != 0x29a))))
    goto LAB_0062b3f7;
LAB_0062ba71:
    uVar13 = 0;
    if (param_2 == 4) {
      if (*(int *)((longlong)plVar4 + 0x2c) < 1) {
        uVar13 = 1;
      }
      else {
        uVar9 = *(undefined4 *)((longlong)param_1 + 0x4c);
        if (*(int *)((longlong)plVar4 + 0x2c) == 2) {
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)uVar9;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0x4d);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0x4e);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0x4f);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0xc);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0xd);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0xe);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
          uVar7 = *(undefined1 *)((longlong)param_1 + 0xf);
        }
        else {
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 0x18);
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 0x10);
          uVar9 = *(undefined4 *)((longlong)param_1 + 0x4c);
          uVar7 = (undefined1)uVar9;
          uVar8 = *(uint *)(plVar4 + 5);
          *(uint *)(plVar4 + 5) = uVar8 + 1;
          *(char *)(plVar4[2] + (ulonglong)uVar8) = (char)((uint)uVar9 >> 8);
        }
        uVar8 = *(uint *)(plVar4 + 5);
        *(uint *)(plVar4 + 5) = uVar8 + 1;
        *(undefined1 *)(plVar4[2] + (ulonglong)uVar8) = uVar7;
        lVar16 = param_1[5];
        FUN_00632390(lVar16);
        uVar8 = *(uint *)(lVar16 + 0x28);
        if (*(uint *)(param_1 + 3) < *(uint *)(lVar16 + 0x28)) {
          uVar8 = *(uint *)(param_1 + 3);
        }
        if (uVar8 != 0) {
          uVar13 = (ulonglong)uVar8;
          FUN_00626670(param_1[2],*(undefined8 *)(lVar16 + 0x20),uVar13);
          param_1[2] = param_1[2] + uVar13;
          *(longlong *)(lVar16 + 0x20) = *(longlong *)(lVar16 + 0x20) + uVar13;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar8;
          *(uint *)(param_1 + 3) = (int)param_1[3] - uVar8;
          iVar10 = *(int *)(lVar16 + 0x28) - uVar8;
          *(int *)(lVar16 + 0x28) = iVar10;
          if (iVar10 == 0) {
            *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x10);
          }
        }
        if (0 < *(int *)((longlong)plVar4 + 0x2c)) {
          *(int *)((longlong)plVar4 + 0x2c) = -*(int *)((longlong)plVar4 + 0x2c);
        }
        uVar13 = (ulonglong)((int)plVar4[5] == 0);
      }
    }
  }
  return uVar13;
}

