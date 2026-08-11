/* Ghidra address: 00e83830 */
/* Ghidra symbol: FUN_00e83830 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00e83830(short *param_1,ulonglong param_2,int *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ushort uVar18;
  short *psVar19;
  char *pcVar20;
  undefined1 *puVar21;
  uint uVar22;
  char *pcVar23;
  undefined *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  ushort *puVar28;
  undefined8 *puVar29;
  undefined2 *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  longlong lVar33;
  ushort *puVar34;
  undefined *puVar35;
  undefined4 *puVar36;
  undefined1 *puVar37;
  longlong lVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  longlong alStackX_8 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0xe83846;
  lVar13 = FUN_00e81de0();
  lVar13 = -lVar13;
  *(undefined4 *)(&stack0x00000088 + lVar13) = 1;
  *(undefined4 *)(&stack0x00000040 + lVar13) = 0;
  *(short **)(&stack0x000000a0 + lVar13) = param_1;
  if (param_4 == (longlong *)0x0) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
    *param_3 = 99;
    return 0;
  }
  puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
  *param_4 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (puVar36 == (undefined4 *)0x0) {
    *(undefined4 *)(&stack0x00000040 + lVar13) = 0x10;
    iVar9 = 0x10;
  }
  else {
    puVar35 = *(undefined **)(&stack0x00001378 + lVar13);
    *puVar36 = 0;
    if (puVar35 == (undefined *)0x0) {
      puVar35 = &DAT_01ef3ce0;
    }
    *(undefined **)(&stack0x000000b8 + lVar13) = puVar35;
    auVar43._8_4_ = (int)puVar35;
    auVar43._0_8_ = puVar35;
    auVar43._12_4_ = (int)((ulonglong)puVar35 >> 0x20);
    *(undefined **)(&stack0x000000c0 + lVar13) = puVar35 + _DAT_01edfaa0;
    *(longlong *)(&stack0x000000c8 + lVar13) = auVar43._8_8_ + lRam0000000001edfaa8;
    *(undefined **)(&stack0x000000d0 + lVar13) = puVar35 + 0x340;
    uVar11 = (undefined4)param_2;
    if ((param_2 & 0xd8008580) == 0) {
      *(undefined4 *)(&stack0x0000014c + lVar13) = 0;
      sVar8 = *param_1;
      *(longlong **)(&stack0x00000048 + lVar13) = param_4;
      *(undefined4 *)(&stack0x00000098 + lVar13) = uVar11;
      if (sVar8 == 0x28) {
        *(short **)(&stack0x000000b0 + lVar13) = param_1 + 1;
        *(undefined4 *)(&stack0x00000070 + lVar13) = 0xffffffff;
        *(undefined8 *)(&stack0x00000090 + lVar13) = 0;
        lVar33 = 0;
        *(undefined4 *)(&stack0x00000044 + lVar13) = uVar11;
        *(undefined4 *)(&stack0x00000068 + lVar13) = 0xffffffff;
        iVar41 = 0;
        psVar19 = param_1;
LAB_00e83b20:
        uVar31 = *(uint *)(&stack0x00000044 + lVar13);
        do {
          lVar38 = (longlong)iVar41;
          if (param_1[lVar38 + 1] != 0x2a) goto LAB_00e83dd6;
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83b52;
          iVar9 = FUN_00ea13c0(psVar19 + 2,s_UTF16__01edfac8,6);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 8;
            *(uint *)(&stack0x00000044 + lVar13) = uVar31 | 0x800;
            goto LAB_00e83dbf;
          }
          psVar19 = param_1 + lVar33 + 2;
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83b77;
          iVar9 = FUN_00ea13c0(psVar19,&DAT_01edfacf,4);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 6;
            uVar31 = uVar31 | 0x800;
LAB_00e83db2:
            *(uint *)(&stack0x00000044 + lVar13) = uVar31;
            goto LAB_00e83dbf;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83b94;
          iVar9 = FUN_00ea13c0(psVar19,&DAT_01edfad4,4);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 6;
            uVar31 = uVar31 | 0x20000000;
            goto LAB_00e83db2;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83bb1;
          iVar9 = FUN_00ea13c0(psVar19,s_NO_AUTO_POSSESS__01edfad9,0x10);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 0x12;
            uVar31 = uVar31 | 0x20000;
            goto LAB_00e83db2;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83bce;
          iVar9 = FUN_00ea13c0(psVar19,s_NO_START_OPT__01edfaea,0xd);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 0xf;
            uVar31 = uVar31 | 0x4000000;
            goto LAB_00e83db2;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83beb;
          iVar9 = FUN_00ea13c0(psVar19,s_LIMIT_MATCH__01edfaf8,0xc);
          if (iVar9 == 0) {
            *(uint *)(&stack0x00000044 + lVar13) = uVar31;
            iVar9 = iVar41 + 0xe;
            uVar18 = param_1[lVar38 + 0xe];
            uVar22 = (uint)uVar18;
            uVar31 = 0;
            if (9 < uVar18 - 0x30) goto LAB_00e83a32;
            puVar28 = (ushort *)(*(longlong *)(&stack0x000000b0 + lVar13) + (lVar38 + 0xe) * 2);
            uVar31 = 0;
            goto LAB_00e83a10;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c08;
          iVar9 = FUN_00ea13c0(psVar19,s_LIMIT_RECURSION__01edfb05,0x10);
          if (iVar9 == 0) goto LAB_00e83a79;
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c25;
          iVar9 = FUN_00ea13c0(psVar19,&DAT_01edfb16,3);
          if (iVar9 == 0) {
            iVar41 = iVar41 + 5;
            uVar22 = 0x100000;
            uVar40 = 0xff8fffff;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c42;
            iVar9 = FUN_00ea13c0(psVar19,&DAT_01edfb1a,3);
            if (iVar9 == 0) {
              iVar41 = iVar41 + 5;
              uVar22 = 0x200000;
              uVar40 = 0xff8fffff;
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c5f;
              iVar9 = FUN_00ea13c0(psVar19,s_CRLF__01edfb1e,5);
              if (iVar9 == 0) {
                iVar41 = iVar41 + 7;
                uVar22 = 0x300000;
                uVar40 = 0xff8fffff;
              }
              else {
                *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c7c;
                iVar9 = FUN_00ea13c0(psVar19,&DAT_01edfb24,4);
                if (iVar9 == 0) {
                  iVar41 = iVar41 + 6;
                  uVar22 = 0x400000;
                  uVar40 = 0xff8fffff;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83c99;
                  iVar9 = FUN_00ea13c0(psVar19,s_ANYCRLF__01edfb29,8);
                  if (iVar9 != 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83cb6;
                    iVar9 = FUN_00ea13c0(psVar19,s_BSR_ANYCRLF__01edfb32,0xc);
                    if (iVar9 == 0) {
                      uVar22 = 0x800000;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83cd3;
                      iVar9 = FUN_00ea13c0(psVar19,s_BSR_UNICODE__01edfb3f,0xc);
                      if (iVar9 != 0) {
                        *(uint *)(&stack0x00000044 + lVar13) = uVar31;
                        goto LAB_00e83de0;
                      }
                      uVar22 = 0x1000000;
                    }
                    iVar41 = iVar41 + 0xe;
                    uVar40 = 0xfe7fffff;
                    goto LAB_00e83d50;
                  }
                  iVar41 = iVar41 + 10;
                  uVar22 = 0x500000;
                  uVar40 = 0xff8fffff;
                }
              }
            }
          }
LAB_00e83d50:
          uVar31 = uVar31 & uVar40 | uVar22;
          lVar33 = (longlong)iVar41;
          psVar19 = param_1 + lVar33;
          if (param_1[lVar33] != 0x28) {
LAB_00e83dd6:
            *(uint *)(&stack0x00000044 + lVar13) = uVar31;
            goto LAB_00e83de0;
          }
        } while( true );
      }
      iVar41 = 0;
      *(undefined4 *)(&stack0x00000068 + lVar13) = 0xffffffff;
      *(undefined4 *)(&stack0x00000070 + lVar13) = 0xffffffff;
      *(undefined4 *)(&stack0x00000044 + lVar13) = uVar11;
LAB_00e83de0:
      uVar31 = *(uint *)(&stack0x00000044 + lVar13);
      if (((*(uint *)(&stack0x00000098 + lVar13) & 0x10000) != 0) && ((uVar31 & 0x800) != 0)) {
        *(undefined4 *)(&stack0x00000040 + lVar13) = 0x4e;
        iVar9 = 0x4e;
        param_4 = *(longlong **)(&stack0x00000048 + lVar13);
        goto LAB_00e83e67;
      }
      param_4 = *(longlong **)(&stack0x00000048 + lVar13);
      if ((*(uint *)(&stack0x00000044 + lVar13) & 0x2800) == 0x800) {
        *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe83e4c;
        iVar9 = FUN_00ea1420(param_1,0xffffffff,*(undefined8 *)(&stack0x00001370 + lVar13));
        *(int *)(&stack0x00000040 + lVar13) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(&stack0x00000040 + lVar13) = 0x4a;
          iVar9 = 0x4a;
          goto LAB_00e83e67;
        }
      }
      if ((*(uint *)(&stack0x00000044 + lVar13) & 0x1800000) == 0x1800000) {
switchD_00e83f0e_default:
        *(undefined4 *)(&stack0x00000040 + lVar13) = 0x38;
        iVar9 = 0x38;
        puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
      }
      else {
        uVar7 = 10;
        switch(*(uint *)(&stack0x00000044 + lVar13) >> 0x14 & 7) {
        case 1:
          uVar7 = 0xd;
        case 0:
        case 2:
          *(undefined8 *)(&stack0x0000016c + lVar13) = 0x100000000;
          *(undefined2 *)(&stack0x00000174 + lVar13) = uVar7;
          break;
        case 3:
          *(undefined8 *)(&stack0x0000016c + lVar13) = 0x200000000;
          *(undefined4 *)(&stack0x00000174 + lVar13) = 0xa000d;
          break;
        case 4:
          *(undefined4 *)(&stack0x0000016c + lVar13) = 1;
          break;
        case 5:
          *(undefined4 *)(&stack0x0000016c + lVar13) = 2;
          break;
        default:
          goto switchD_00e83f0e_default;
        }
        *(undefined8 *)(&stack0x00000134 + lVar13) = 0;
        *(undefined8 *)(&stack0x00000128 + lVar13) = 0;
        *(undefined8 *)(&stack0x00000160 + lVar13) = 0;
        *(undefined4 *)(&stack0x0000013c + lVar13) = 0;
        *(undefined1 (*) [16])(&stack0x00000110 + lVar13) = (undefined1  [16])0x0;
        puVar21 = &stack0x00000300 + lVar13;
        *(undefined1 **)(&stack0x000000e0 + lVar13) = puVar21;
        *(undefined1 **)(&stack0x000000f8 + lVar13) = puVar21;
        *(undefined4 *)(&stack0x00000168 + lVar13) = 0;
        *(undefined1 **)(&stack0x000000d8 + lVar13) = puVar21;
        *(undefined1 **)(&stack0x00000108 + lVar13) = &stack0x000001c0 + lVar13;
        *(undefined8 *)(&stack0x00000120 + lVar13) = 0x80000000014;
        *(short **)(&stack0x000000e8 + lVar13) = param_1;
        *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84000;
        uVar22 = FUN_00ea1400(param_1);
        *(short **)(&stack0x000000f0 + lVar13) = param_1 + uVar22;
        *(undefined4 *)(&stack0x00000150 + lVar13) = 0;
        *(undefined8 *)(&stack0x00000140 + lVar13) = 0;
        *(undefined4 *)(&stack0x00000130 + lVar13) = 0;
        uVar11 = *(undefined4 *)(&stack0x00000044 + lVar13);
        *(undefined4 *)(&stack0x00000148 + lVar13) = uVar11;
        *(undefined8 *)(&stack0x00000100 + lVar13) = 0;
        *(short **)(&stack0x000000a0 + lVar13) = param_1 + iVar41;
        *(undefined1 **)(&stack0x000000a8 + lVar13) = puVar21;
        *(undefined2 *)(&stack0x00000300 + lVar13) = 0x83;
        *(undefined1 **)(&stack0x00000030 + lVar13) = &stack0x00000088 + lVar13;
        *(undefined1 **)(&stack0x00000028 + lVar13) = &stack0x000000b8 + lVar13;
        *(undefined1 **)((longlong)alStackX_8 + lVar13 + 0x10) = &stack0x00000084 + lVar13;
        *(undefined1 **)((longlong)alStackX_8 + lVar13 + 8) = &stack0x0000007c + lVar13;
        *(undefined1 **)((longlong)alStackX_8 + lVar13) = &stack0x0000005c + lVar13;
        *(undefined1 **)((longlong)alStackX_8 + lVar13 + -8) = &stack0x00000080 + lVar13;
        *(undefined8 *)((longlong)alStackX_8 + lVar13 + 0x18) = 0;
        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar13) = 0;
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar13) = 0;
        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar13) = 0;
        *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe840ff;
        FUN_00e852a0(uVar11,&stack0x000000a8 + lVar13,&stack0x000000a0 + lVar13);
        iVar9 = *(int *)(&stack0x00000040 + lVar13);
        param_4 = *(longlong **)(&stack0x00000048 + lVar13);
        puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
        if (iVar9 == 0) {
          if (*(int *)(&stack0x00000088 + lVar13) < 0x10001) {
            lVar33 = (longlong)
                     (*(int *)(&stack0x0000011c + lVar13) * *(int *)(&stack0x00000118 + lVar13) +
                     *(int *)(&stack0x00000088 + lVar13)) * 2 + 0x40;
            *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84163;
            puVar14 = (undefined4 *)(*(code *)PTR_FUN_01edf908)(lVar33);
            if (puVar14 != (undefined4 *)0x0) {
              *(short **)(&stack0x00000190 + lVar13) = param_1 + iVar41;
              *(uint *)(&stack0x00000078 + lVar13) = uVar31 & 0x800;
              *puVar14 = 0x50435245;
              puVar14[1] = (int)lVar33;
              puVar14[2] = *(undefined4 *)(&stack0x00000148 + lVar13);
              puVar14[3] = *(undefined4 *)(&stack0x0000014c + lVar13);
              puVar14[4] = *(undefined4 *)(&stack0x00000070 + lVar13);
              puVar14[5] = *(undefined4 *)(&stack0x00000068 + lVar13);
              puVar14[6] = 0;
              *(undefined2 *)((longlong)puVar14 + 0x22) = 0x20;
              uVar31 = *(uint *)(&stack0x0000011c + lVar13);
              *(short *)(puVar14 + 9) = (short)uVar31;
              uVar22 = *(uint *)(&stack0x00000118 + lVar13);
              *(short *)((longlong)puVar14 + 0x26) = (short)uVar22;
              *(undefined8 *)(puVar14 + 10) = 0;
              iVar41 = 0;
              puVar24 = (undefined *)0x0;
              if (puVar35 != &DAT_01ef3ce0) {
                puVar24 = puVar35;
              }
              *(undefined **)(puVar14 + 0xc) = puVar24;
              *(undefined8 *)(puVar14 + 0xe) = 0;
              *(undefined4 *)(&stack0x0000012c + lVar13) =
                   *(undefined4 *)(&stack0x00000128 + lVar13);
              *(undefined8 *)(&stack0x00000140 + lVar13) = 0;
              *(undefined4 *)(&stack0x00000128 + lVar13) = 0;
              *(undefined4 *)(&stack0x00000130 + lVar13) = 0;
              puVar32 = puVar14 + 0x10;
              *(undefined4 **)(&stack0x00000110 + lVar13) = puVar32;
              *(undefined4 **)(&stack0x00000060 + lVar13) = puVar14;
              lVar33 = (longlong)puVar14 +
                       (ulonglong)((uVar22 & 0xffff) * (uVar31 & 0xffff)) * 2 + 0x40;
              *(longlong *)(&stack0x00000050 + lVar13) = lVar33;
              *(longlong *)(&stack0x000000e0 + lVar13) = lVar33;
              *(undefined8 *)(&stack0x000000f8 + lVar13) =
                   *(undefined8 *)(&stack0x000000d8 + lVar13);
              *(undefined4 *)(&stack0x00000168 + lVar13) = 0;
              *(undefined8 *)(&stack0x00000100 + lVar13) = 0;
              *(undefined1 (*) [16])(&stack0x00000150 + lVar13) = (undefined1  [16])0x0;
              *(short **)(&stack0x00000180 + lVar13) = param_1;
              if (0 < (int)uVar22) {
                puVar15 = *(undefined8 **)(&stack0x00000108 + lVar13);
                *(undefined4 *)(&stack0x00000118 + lVar13) = 0;
                *(int **)(&stack0x00000188 + lVar13) = param_3;
                do {
                  *(undefined8 *)(&stack0x00000098 + lVar13) = *puVar15;
                  iVar9 = *(int *)(puVar15 + 1);
                  *(undefined4 *)(&stack0x000000b0 + lVar13) =
                       *(undefined4 *)((longlong)puVar15 + 0xc);
                  *(longlong *)(&stack0x00000068 + lVar13) = (longlong)iVar9;
                  *(longlong *)(&stack0x00000070 + lVar13) = (longlong)iVar9 * 2;
                  *(undefined8 **)(&stack0x00000198 + lVar13) = puVar15;
                  *(uint *)(&stack0x00000090 + lVar13) = uVar22;
                  if (0 < iVar41) {
                    iVar9 = *(int *)(&stack0x0000011c + lVar13);
                    iVar27 = -(iVar41 * iVar9);
                    uVar31 = iVar41 * iVar9 * 2;
                    iVar39 = 0;
                    do {
                      *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84359;
                      iVar10 = FUN_00626660(*(undefined8 *)(&stack0x00000098 + lVar13),
                                            (longlong)puVar32 + 2,
                                            *(undefined8 *)(&stack0x00000070 + lVar13));
                      if (iVar10 == 0) {
                        puVar36 = (undefined4 *)((longlong)puVar32 + (longlong)iVar9 * 2);
                        if (*(short *)((longlong)puVar32 +
                                      *(longlong *)(&stack0x00000068 + lVar13) * 2 + 2) == 0)
                        goto LAB_00e84379;
LAB_00e8438e:
                        uVar16 = (ulonglong)(int)uVar31;
                        if (puVar32 < puVar36) {
                          if (iVar27 != 0) {
                            puVar14 = puVar32;
                            if (6 < uVar16 - 1) {
                              uVar25 = (ulonglong)(uVar31 & 6);
                              do {
                                *(undefined1 *)((uVar16 - 1) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 1) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 2) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 2) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 3) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 3) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 4) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 4) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 5) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 5) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 6) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 6) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 7) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 7) + (longlong)puVar14);
                                *(undefined1 *)((uVar16 - 8) + (longlong)puVar36) =
                                     *(undefined1 *)((uVar16 - 8) + (longlong)puVar14);
                                puVar14 = puVar14 + -2;
                                puVar36 = puVar36 + -2;
                                uVar25 = uVar25 + 8;
                              } while (uVar16 != uVar25);
                            }
                            puVar21 = (undefined1 *)((longlong)puVar14 + uVar16);
                            puVar37 = (undefined1 *)((longlong)puVar36 + uVar16);
                            if ((uVar16 & 6) != 0) {
                              lVar33 = -(ulonglong)(uVar31 & 6);
                              do {
                                puVar37 = puVar37 + -1;
                                puVar21 = puVar21 + -1;
                                *puVar37 = *puVar21;
                                lVar33 = lVar33 + 1;
                              } while (lVar33 != 0);
                            }
                          }
                        }
                        else if (iVar27 != 0) {
                          if ((uVar31 < 0x20) ||
                             ((puVar36 < (undefined4 *)((longlong)puVar32 + uVar16) &&
                              (puVar32 < (undefined4 *)((longlong)puVar36 + uVar16))))) {
                            uVar25 = 0;
                            puVar14 = puVar32;
                            goto LAB_00e843e3;
                          }
                          uVar25 = uVar16 & 0xffffffffffffffe0;
                          if (uVar25 - 0x20 < 0x60) {
                            lVar33 = 0;
                          }
                          else {
                            uVar26 = (uVar16 & 0xffffffffffffffe0) - 0x20 >> 5;
                            lVar38 = ((ulonglong)((int)uVar26 + 1U & 3) - 1) - uVar26;
                            lVar33 = 0;
                            do {
                              uVar17 = ((undefined8 *)((longlong)puVar32 + lVar33))[1];
                              puVar15 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x10);
                              uVar5 = *puVar15;
                              uVar6 = puVar15[1];
                              *(undefined8 *)((longlong)puVar36 + lVar33) =
                                   *(undefined8 *)((longlong)puVar32 + lVar33);
                              ((undefined8 *)((longlong)puVar36 + lVar33))[1] = uVar17;
                              puVar15 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x10);
                              *puVar15 = uVar5;
                              puVar15[1] = uVar6;
                              puVar15 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x20);
                              uVar17 = puVar15[1];
                              puVar29 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x30);
                              uVar5 = *puVar29;
                              uVar6 = puVar29[1];
                              puVar29 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x20);
                              *puVar29 = *puVar15;
                              puVar29[1] = uVar17;
                              puVar15 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x30);
                              *puVar15 = uVar5;
                              puVar15[1] = uVar6;
                              puVar15 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x40);
                              uVar17 = puVar15[1];
                              puVar29 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x50);
                              uVar5 = *puVar29;
                              uVar6 = puVar29[1];
                              puVar29 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x40);
                              *puVar29 = *puVar15;
                              puVar29[1] = uVar17;
                              puVar15 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x50);
                              *puVar15 = uVar5;
                              puVar15[1] = uVar6;
                              puVar15 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x60);
                              uVar17 = puVar15[1];
                              puVar29 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x70);
                              uVar5 = *puVar29;
                              uVar6 = puVar29[1];
                              puVar29 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x60);
                              *puVar29 = *puVar15;
                              puVar29[1] = uVar17;
                              puVar15 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x70);
                              *puVar15 = uVar5;
                              puVar15[1] = uVar6;
                              lVar33 = lVar33 + 0x80;
                              lVar38 = lVar38 + 4;
                            } while (lVar38 != 0);
                          }
                          if (((uVar25 - 0x20 >> 5) + 1 & 3) != 0) {
                            puVar15 = (undefined8 *)((longlong)puVar36 + lVar33 + 0x10);
                            puVar29 = (undefined8 *)((longlong)puVar32 + lVar33 + 0x10);
                            lVar33 = -(ulonglong)(((uVar31 & 0x60) - 0x20 >> 5) + 1 & 3);
                            do {
                              uVar17 = puVar29[-1];
                              uVar5 = *puVar29;
                              uVar6 = puVar29[1];
                              puVar15[-2] = puVar29[-2];
                              puVar15[-1] = uVar17;
                              *puVar15 = uVar5;
                              puVar15[1] = uVar6;
                              puVar15 = puVar15 + 4;
                              puVar29 = puVar29 + 4;
                              lVar33 = lVar33 + 1;
                            } while (lVar33 != 0);
                          }
                          if (uVar25 != uVar16) {
                            puVar14 = (undefined4 *)((longlong)puVar32 + uVar25);
                            puVar36 = (undefined4 *)((longlong)puVar36 + uVar25);
LAB_00e843e3:
                            uVar26 = (uVar16 - 1) - uVar25;
                            if ((uVar16 & 6) != 0) {
                              lVar33 = -(ulonglong)(uVar31 & 6);
                              do {
                                uVar3 = *(undefined1 *)puVar14;
                                puVar14 = (undefined4 *)((longlong)puVar14 + 1);
                                *(undefined1 *)puVar36 = uVar3;
                                puVar36 = (undefined4 *)((longlong)puVar36 + 1);
                                uVar25 = uVar25 + 1;
                                lVar33 = lVar33 + 1;
                              } while (lVar33 != 0);
                            }
                            if (6 < uVar26) {
                              lVar33 = uVar16 - uVar25;
                              do {
                                *(undefined1 *)puVar36 = *(undefined1 *)puVar14;
                                *(undefined1 *)((longlong)puVar36 + 1) =
                                     *(undefined1 *)((longlong)puVar14 + 1);
                                *(undefined1 *)((longlong)puVar36 + 2) =
                                     *(undefined1 *)((longlong)puVar14 + 2);
                                *(undefined1 *)((longlong)puVar36 + 3) =
                                     *(undefined1 *)((longlong)puVar14 + 3);
                                *(undefined1 *)(puVar36 + 1) = *(undefined1 *)(puVar14 + 1);
                                *(undefined1 *)((longlong)puVar36 + 5) =
                                     *(undefined1 *)((longlong)puVar14 + 5);
                                *(undefined1 *)((longlong)puVar36 + 6) =
                                     *(undefined1 *)((longlong)puVar14 + 6);
                                *(undefined1 *)((longlong)puVar36 + 7) =
                                     *(undefined1 *)((longlong)puVar14 + 7);
                                puVar14 = puVar14 + 2;
                                puVar36 = puVar36 + 2;
                                lVar33 = lVar33 + -8;
                              } while (lVar33 != 0);
                            }
                          }
                        }
                        break;
                      }
                      puVar36 = (undefined4 *)((longlong)puVar32 + (longlong)iVar9 * 2);
                      if (iVar10 < 0) goto LAB_00e8438e;
LAB_00e84379:
                      puVar32 = puVar36;
                      iVar39 = iVar39 + 1;
                      iVar27 = iVar27 + iVar9;
                      uVar31 = uVar31 + iVar9 * -2;
                    } while (iVar39 < iVar41);
                  }
                  *(short *)puVar32 = (short)*(undefined4 *)(&stack0x000000b0 + lVar13);
                  *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84530;
                  FUN_00626670((longlong)puVar32 + 2,*(undefined8 *)(&stack0x00000098 + lVar13),
                               *(undefined8 *)(&stack0x00000070 + lVar13));
                  *(undefined2 *)
                   ((longlong)puVar32 + *(longlong *)(&stack0x00000068 + lVar13) * 2 + 2) = 0;
                  iVar41 = *(int *)(&stack0x00000118 + lVar13) + 1;
                  *(int *)(&stack0x00000118 + lVar13) = iVar41;
                  if (*(int *)(&stack0x00000090 + lVar13) < 2) goto LAB_00e84686;
                  puVar15 = (undefined8 *)(*(longlong *)(&stack0x00000198 + lVar13) + 0x10);
                  uVar22 = *(int *)(&stack0x00000090 + lVar13) - 1;
                  puVar32 = *(undefined4 **)(&stack0x00000110 + lVar13);
                } while( true );
              }
              goto LAB_00e846b6;
            }
            *(undefined4 *)(&stack0x00000040 + lVar13) = 0x15;
            iVar9 = 0x15;
            param_4 = *(longlong **)(&stack0x00000048 + lVar13);
          }
          else {
            *(undefined4 *)(&stack0x00000040 + lVar13) = 0x14;
            iVar9 = 0x14;
          }
        }
      }
    }
    else {
      *(undefined4 *)(&stack0x00000040 + lVar13) = 0x11;
      iVar9 = 0x11;
    }
LAB_00e83905:
    *puVar36 = (int)((ulonglong)(*(longlong *)(&stack0x000000a0 + lVar13) - (longlong)param_1) >> 1)
    ;
    if (iVar9 < 1) {
      pcVar20 = s_no_error_01ee0390;
      goto LAB_00e83e99;
    }
  }
LAB_00e83e67:
  pcVar23 = s_no_error_01ee0390;
  iVar41 = iVar9;
  do {
    do {
      cVar2 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar2 != '\0');
    pcVar20 = s_Error_text_not_found__please_rep_01edfb74;
  } while ((*pcVar23 != '\0') &&
          (bVar42 = 1 < iVar41, pcVar20 = pcVar23, iVar41 = iVar41 + -1, bVar42));
LAB_00e83e99:
  *param_4 = (longlong)pcVar20;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar9;
  }
  return 0;
  while( true ) {
    uVar22 = (uint)uVar18;
    puVar28 = puVar28 + 1;
    if (9 < uVar22 - 0x30) break;
LAB_00e83a10:
    uVar31 = (uVar22 - 0x30) + uVar31 * 10;
    uVar18 = *puVar28;
    iVar9 = iVar9 + 1;
    if (0x19999998 < uVar31) break;
  }
LAB_00e83a32:
  if (uVar18 != 0x29) goto LAB_00e83de0;
  iVar41 = iVar9 + 1;
  if (uVar31 < *(uint *)(&stack0x00000070 + lVar13)) {
    uVar22 = (uint)*(undefined8 *)(&stack0x00000090 + lVar13) | 0x2000;
    *(ulonglong *)(&stack0x00000090 + lVar13) = (ulonglong)uVar22;
    *(uint *)(&stack0x0000014c + lVar13) = uVar22;
    *(uint *)(&stack0x00000070 + lVar13) = uVar31;
  }
LAB_00e83dbf:
  lVar33 = (longlong)iVar41;
  psVar19 = param_1 + lVar33;
  if (param_1[lVar33] != 0x28) goto LAB_00e83de0;
  goto LAB_00e83b20;
LAB_00e83a79:
  *(uint *)(&stack0x00000044 + lVar13) = uVar31;
  iVar9 = iVar41 + 0x12;
  uVar18 = param_1[lVar38 + 0x12];
  uVar22 = (uint)uVar18;
  uVar31 = 0;
  if (uVar18 - 0x30 < 10) {
    puVar28 = (ushort *)(*(longlong *)(&stack0x000000b0 + lVar13) + (lVar38 + 0x12) * 2);
    uVar31 = 0;
    do {
      uVar31 = (uVar22 - 0x30) + uVar31 * 10;
      uVar18 = *puVar28;
      iVar9 = iVar9 + 1;
      if (0x19999998 < uVar31) break;
      uVar22 = (uint)uVar18;
      puVar28 = puVar28 + 1;
    } while (uVar22 - 0x30 < 10);
  }
  if (uVar18 != 0x29) goto LAB_00e83de0;
  iVar41 = iVar9 + 1;
  if (uVar31 < *(uint *)(&stack0x00000068 + lVar13)) {
    uVar22 = (uint)*(undefined8 *)(&stack0x00000090 + lVar13) | 0x4000;
    *(ulonglong *)(&stack0x00000090 + lVar13) = (ulonglong)uVar22;
    *(uint *)(&stack0x0000014c + lVar13) = uVar22;
    *(uint *)(&stack0x00000068 + lVar13) = uVar31;
  }
  goto LAB_00e83dbf;
LAB_00e84686:
  param_3 = *(int **)(&stack0x00000188 + lVar13);
  puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
  if (0x14 < *(int *)(&stack0x00000120 + lVar13)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe846b6;
    (*(code *)PTR_FUN_01edf910)(*(undefined8 *)(&stack0x00000108 + lVar13));
  }
LAB_00e846b6:
  *(undefined8 *)(&stack0x000000a0 + lVar13) = *(undefined8 *)(&stack0x00000190 + lVar13);
  puVar30 = *(undefined2 **)(&stack0x00000050 + lVar13);
  *(undefined2 **)(&stack0x000000a8 + lVar13) = puVar30;
  *puVar30 = 0x83;
  lVar33 = *(longlong *)(&stack0x00000060 + lVar13);
  uVar11 = *(undefined4 *)(lVar33 + 8);
  *(undefined1 **)(&stack0x00000028 + lVar13) = &stack0x000000b8 + lVar13;
  *(undefined1 **)((longlong)alStackX_8 + lVar13 + 0x10) = &stack0x00000084 + lVar13;
  *(undefined1 **)((longlong)alStackX_8 + lVar13 + 8) = &stack0x0000007c + lVar13;
  *(undefined1 **)((longlong)alStackX_8 + lVar13) = &stack0x0000005c + lVar13;
  *(undefined1 **)((longlong)alStackX_8 + lVar13 + -8) = &stack0x00000080 + lVar13;
  *(undefined8 *)(&stack0x00000030 + lVar13) = 0;
  *(undefined8 *)((longlong)alStackX_8 + lVar13 + 0x18) = 0;
  *(undefined4 *)(&stack0xfffffffffffffff8 + lVar13) = 0;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar13) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar13) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84777;
  FUN_00e852a0(uVar11,&stack0x000000a8 + lVar13,&stack0x000000a0 + lVar13,&stack0x00000040 + lVar13)
  ;
  *(undefined2 *)(lVar33 + 0x1e) = *(undefined2 *)(&stack0x00000128 + lVar13);
  *(undefined2 *)(lVar33 + 0x20) = *(undefined2 *)(&stack0x00000134 + lVar13);
  *(undefined2 *)(lVar33 + 0x1c) = *(undefined2 *)(&stack0x00000130 + lVar13);
  *(uint *)(lVar33 + 0xc) = *(uint *)(&stack0x0000014c + lVar13) | 2;
  if (*(int *)(&stack0x00000154 + lVar13) != 0) {
    *(undefined4 *)(&stack0x0000007c + lVar13) = 0;
    *(undefined4 *)(&stack0x00000084 + lVar13) = 0xffffffff;
  }
  param_4 = *(longlong **)(&stack0x00000048 + lVar13);
  uVar31 = *(uint *)(&stack0x00000078 + lVar13);
  if ((*(int *)(&stack0x00000040 + lVar13) == 0) && (**(short **)(&stack0x000000a0 + lVar13) != 0))
  {
    *(undefined4 *)(&stack0x00000040 + lVar13) = 0x16;
  }
  uVar22 = uVar31 >> 0xb;
  puVar4 = *(undefined2 **)(&stack0x000000a8 + lVar13);
  puVar1 = puVar4 + 1;
  *(undefined2 **)(&stack0x000000a8 + lVar13) = puVar1;
  *puVar4 = 0;
  *(undefined2 **)(&stack0x00000098 + lVar13) = puVar1;
  if ((longlong)*(int *)(&stack0x00000088 + lVar13) < (longlong)puVar1 - (longlong)puVar30 >> 1) {
    *(undefined4 *)(&stack0x00000040 + lVar13) = 0x17;
    iVar41 = 0x17;
    puVar28 = *(ushort **)(&stack0x000000d8 + lVar13);
    iVar9 = *(int *)(&stack0x00000124 + lVar13);
  }
  else {
    iVar41 = *(int *)(&stack0x00000040 + lVar13);
    puVar28 = *(ushort **)(&stack0x000000d8 + lVar13);
    puVar34 = *(ushort **)(&stack0x000000f8 + lVar13);
    if ((puVar28 < puVar34) && (iVar41 == 0)) {
      uVar40 = 0xffffffff;
      lVar33 = 0;
      do {
        puVar34 = puVar34 + -1;
        *(ushort **)(&stack0x000000f8 + lVar13) = puVar34;
        uVar16 = (ulonglong)*puVar34;
        if ((uVar16 == 0) || (puVar30[uVar16 - 1] != 0x75)) {
          *(undefined4 *)(&stack0x00000040 + lVar13) = 10;
          iVar41 = 10;
          goto LAB_00e84e78;
        }
        uVar18 = puVar30[uVar16];
        if (uVar40 != uVar18) {
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84d09;
          lVar33 = FUN_00e834b0(*(undefined8 *)(&stack0x00000050 + lVar13),uVar22,(uint)uVar18);
          uVar40 = (uint)uVar18;
        }
        if (lVar33 == 0) {
          *(undefined4 *)(&stack0x00000040 + lVar13) = 0x35;
          iVar41 = 0x35;
          goto LAB_00e84e78;
        }
        puVar30 = *(undefined2 **)(&stack0x00000050 + lVar13);
        puVar30[uVar16] = (short)((uint)((int)lVar33 - (int)puVar30) >> 1);
      } while (puVar28 < puVar34);
      iVar41 = 0;
LAB_00e84e78:
      param_4 = *(longlong **)(&stack0x00000048 + lVar13);
      puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
      iVar9 = *(int *)(&stack0x00000124 + lVar13);
    }
    else {
      param_4 = *(longlong **)(&stack0x00000048 + lVar13);
      iVar9 = *(int *)(&stack0x00000124 + lVar13);
    }
  }
  if (0x800 < iVar9) {
    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84869;
    (*(code *)PTR_FUN_01edf910)(puVar28);
    iVar41 = *(int *)(&stack0x00000040 + lVar13);
  }
  *(undefined8 *)(&stack0x000000d8 + lVar13) = 0;
  if ((iVar41 == 0) &&
     (iVar41 = 0,
     *(ushort *)(*(longlong *)(&stack0x00000060 + lVar13) + 0x1e) <
     *(ushort *)(*(longlong *)(&stack0x00000060 + lVar13) + 0x20))) {
    *(undefined4 *)(&stack0x00000040 + lVar13) = 0xf;
    iVar41 = 0xf;
  }
  if ((*(uint *)(&stack0x00000044 + lVar13) & 0x20000) == 0 && iVar41 == 0) {
    uVar18 = **(ushort **)(&stack0x00000050 + lVar13);
    if (uVar18 < 0xa2) {
      puVar28 = *(ushort **)(&stack0x00000050 + lVar13);
      do {
        if ((ushort)(uVar18 - 0x21) < 0x41) {
          sVar8 = 0x55;
          if (((uVar18 < 0x55) && (sVar8 = 0x48, uVar18 < 0x48)) && (sVar8 = 0x3b, uVar18 < 0x3b)) {
            sVar8 = 0x21;
            if (0x2d < uVar18) {
              sVar8 = 0x2e;
            }
          }
          uVar18 = (uVar18 + 0x21) - sVar8;
          if (uVar18 < 0x29) {
            *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84946;
            lVar33 = FUN_00e901b0(puVar28,uVar22,*(undefined8 *)(&stack0x000000c0 + lVar13),
                                  &stack0x000001a0 + lVar13);
          }
          else {
            lVar33 = 0;
          }
          uVar11 = 0;
          if ((ushort)(uVar18 - 0x21) < 7) {
            uVar11 = *(undefined4 *)(&DAT_01ee10c0 + (longlong)(short)(uVar18 - 0x21) * 4);
          }
          *(undefined4 *)(&stack0x000001a4 + lVar13) = uVar11;
          *(undefined4 *)(&stack0x0000008c + lVar13) = 1000;
          if (lVar33 != 0) {
            *(undefined1 **)(&stack0xffffffffffffffe8 + lVar13) = &stack0x0000008c + lVar13;
            *(longlong *)(&stack0xffffffffffffffe0 + lVar13) = lVar33;
            *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe849c9;
            iVar41 = FUN_00e90780(lVar33,uVar22,&stack0x000000b8 + lVar13,&stack0x000001a0 + lVar13)
            ;
            if ((iVar41 != 0) && ((ushort)(uVar18 - 0x21) < 8)) {
              *puVar28 = *puVar28 + *(short *)(&DAT_01edfab0 + (longlong)(short)(uVar18 - 0x21) * 2)
              ;
            }
          }
switchD_00e84a9c_default:
          uVar18 = *puVar28;
          param_4 = *(longlong **)(&stack0x00000048 + lVar13);
          puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
        }
        else {
          if ((ushort)(uVar18 - 0x6e) < 2) {
            uVar16 = 0x11;
LAB_00e84a0c:
            uVar18 = puVar28[uVar16];
            if ((ushort)(uVar18 - 0x62) < 8) {
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84a3e;
              uVar17 = FUN_00e901b0(puVar28,uVar22,*(undefined8 *)(&stack0x000000c0 + lVar13),
                                    &stack0x000001a0 + lVar13);
              *(uint *)(&stack0x000001a4 + lVar13) = ~(uint)uVar18 & 1;
              *(undefined4 *)(&stack0x0000008c + lVar13) = 1000;
              *(undefined1 **)(&stack0xffffffffffffffe8 + lVar13) = &stack0x0000008c + lVar13;
              *(undefined8 *)(&stack0xffffffffffffffe0 + lVar13) = uVar17;
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84a7f;
              iVar41 = FUN_00e90780(uVar17,uVar22,&stack0x000000b8 + lVar13,
                                    &stack0x000001a0 + lVar13);
              if (iVar41 != 0) {
                switch(uVar18) {
                case 0x62:
                case 99:
                  puVar28[uVar16] = 0x6a;
                  break;
                case 100:
                case 0x65:
                  puVar28[uVar16] = 0x6b;
                  break;
                case 0x66:
                case 0x67:
                  puVar28[uVar16] = 0x6c;
                  break;
                case 0x68:
                case 0x69:
                  puVar28[uVar16] = 0x6d;
                }
              }
            }
            goto switchD_00e84a9c_default;
          }
          if (uVar18 == 0x70) {
            uVar16 = (ulonglong)puVar28[1];
            goto LAB_00e84a0c;
          }
        }
        switch((ulonglong)uVar18) {
        case 0:
          goto switchD_00e84ae8_caseD_0;
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5e:
        case 0x5f:
        case 0x60:
          if ((ushort)(puVar28[1] - 0xf) < 2) {
            puVar28 = puVar28 + 2;
          }
          break;
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x61:
          if ((ushort)(puVar28[2] - 0xf) < 2) {
            puVar28 = puVar28 + 2;
          }
          break;
        case 0x70:
        case 0x95:
        case 0x97:
        case 0x99:
        case 0x9b:
          puVar28 = puVar28 + puVar28[1];
        }
        puVar28 = puVar28 + (byte)(&DAT_01ee1510)[uVar18];
        if (((uVar31 >> 0xb != 0) && (uVar18 - 0x1d < 0x38)) && ((puVar28[-1] & 0xfc00) == 0xd800))
        {
          puVar28 = puVar28 + 1;
        }
        uVar18 = *puVar28;
      } while (uVar18 < 0xa2);
    }
switchD_00e84ae8_caseD_0:
    iVar41 = *(int *)(&stack0x00000040 + lVar13);
  }
  if ((iVar41 == 0) && (*(int *)(&stack0x0000015c + lVar13) != 0)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84b9c;
    lVar33 = FUN_00e834b0(*(undefined8 *)(&stack0x00000050 + lVar13),uVar22,0xffffffff);
    if (lVar33 != 0) {
      do {
        if (*(short *)(lVar33 + 2) == 0) {
          uVar16 = (ulonglong)*(ushort *)(lVar33 + -2);
          uVar7 = *(undefined2 *)(lVar33 + -4 + uVar16 * 2);
          *(undefined2 *)(lVar33 + -4 + uVar16 * 2) = 0;
          uVar31 = *(uint *)(*(longlong *)(&stack0x00000060 + lVar13) + 8);
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84bf2;
          iVar9 = FUN_00e85950(lVar33,uVar31 >> 0xb & 1,1,&stack0x000000b8 + lVar13);
          *(undefined2 *)(lVar33 + -4 + uVar16 * 2) = uVar7;
          if (iVar9 < 0) {
            uVar11 = 0x19;
            if (iVar9 == -4) {
              uVar11 = 0x46;
            }
            uVar12 = 0x24;
            if (iVar9 != -2) {
              uVar12 = uVar11;
            }
            *(undefined4 *)(&stack0x00000040 + lVar13) = uVar12;
            param_4 = *(longlong **)(&stack0x00000048 + lVar13);
            puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
            goto LAB_00e84c4d;
          }
          param_4 = *(longlong **)(&stack0x00000048 + lVar13);
          puVar36 = *(undefined4 **)(&stack0x00001370 + lVar13);
          if (*(int *)(&stack0x00000130 + lVar13) < iVar9) {
            *(int *)(&stack0x00000130 + lVar13) = iVar9;
          }
          *(short *)(lVar33 + 2) = (short)iVar9;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84c38;
        lVar33 = FUN_00e834b0(lVar33 + 4,uVar22,0xffffffff);
      } while (lVar33 != 0);
      goto LAB_00e84c44;
    }
  }
  else {
LAB_00e84c44:
    if (iVar41 != 0) {
LAB_00e84c4d:
      *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84c5b;
      (*(code *)PTR_FUN_01edf910)(*(undefined8 *)(&stack0x00000060 + lVar13));
      iVar9 = *(int *)(&stack0x00000040 + lVar13);
      param_1 = *(short **)(&stack0x00000180 + lVar13);
      goto LAB_00e83905;
    }
  }
  lVar38 = *(longlong *)(&stack0x00000060 + lVar13);
  uVar31 = *(uint *)(lVar38 + 8);
  lVar33 = *(longlong *)(&stack0x00000050 + lVar13);
  uVar17 = *(undefined8 *)(&stack0x00000098 + lVar13);
  if ((uVar31 & 0x10) == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84d79;
    iVar41 = FUN_00e85ef0(lVar33,0,&stack0x000000b8 + lVar13,0);
    if (iVar41 == 0) {
      uVar31 = *(uint *)(&stack0x0000005c + lVar13);
      if ((int)uVar31 < 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84dda;
        uVar11 = FUN_00e86120(lVar33,&stack0x0000005c + lVar13,0);
        *(undefined4 *)(&stack0x00000080 + lVar13) = uVar11;
        uVar31 = *(uint *)(&stack0x0000005c + lVar13);
        if ((int)uVar31 < 0) {
          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84ed4;
          iVar41 = FUN_00e864e0(lVar33,0,&stack0x000000b8 + lVar13,0);
          if (iVar41 != 0) {
            *(byte *)(lVar38 + 0xd) = *(byte *)(lVar38 + 0xd) | 1;
          }
          goto LAB_00e84f27;
        }
      }
      uVar40 = *(uint *)(&stack0x00000080 + lVar13);
      *(short *)(lVar38 + 0x18) = (short)uVar40;
      if ((uVar31 & 1) != 0) {
        uVar31 = uVar40 & 0xffff;
        if (*(int *)(&stack0x00000078 + lVar13) == 0) {
          if ((uVar31 < 0x100) &&
             (uVar31 != *(byte *)(*(longlong *)(&stack0x000000c0 + lVar13) + (ulonglong)uVar31)))
          goto LAB_00e84f1f;
        }
        else {
          if (uVar31 < 0x80) {
            bVar42 = uVar31 == *(byte *)(*(longlong *)(&stack0x000000c0 + lVar13) +
                                        (ulonglong)uVar31);
          }
          else {
            bVar42 = *(int *)(&DAT_01ee2144 +
                             (ulonglong)
                             *(ushort *)
                              (&DAT_01ee59c0 +
                              (ulonglong)
                              (uVar40 & 0x7f | (uint)(byte)(&DAT_01ee37c0)[uVar31 >> 7] << 7) * 2) *
                             8) == 0;
          }
          lVar38 = *(longlong *)(&stack0x00000060 + lVar13);
          lVar33 = *(longlong *)(&stack0x00000050 + lVar13);
          if (!bVar42) {
LAB_00e84f1f:
            *(byte *)(lVar38 + 0xc) = *(byte *)(lVar38 + 0xc) | 0x20;
          }
        }
      }
      *(byte *)(lVar38 + 0xc) = *(byte *)(lVar38 + 0xc) | 0x10;
    }
    else {
      *(uint *)(lVar38 + 8) = uVar31 | 0x10;
    }
  }
LAB_00e84f27:
  uVar31 = *(uint *)(&stack0x00000084 + lVar13);
  if (((int)uVar31 < 0) || (((uVar31 & 2) == 0 && ((*(uint *)(lVar38 + 8) & 0x10) != 0))))
  goto LAB_00e84fb1;
  uVar40 = *(uint *)(&stack0x0000007c + lVar13);
  *(short *)(lVar38 + 0x1a) = (short)uVar40;
  if ((uVar31 & 1) != 0) {
    uVar31 = uVar40 & 0xffff;
    if (*(int *)(&stack0x00000078 + lVar13) == 0) {
      if (uVar31 < 0x100) goto LAB_00e84f99;
    }
    else {
      if (uVar31 < 0x80) {
LAB_00e84f99:
        if (uVar31 == *(byte *)(*(longlong *)(&stack0x000000c0 + lVar13) + (ulonglong)uVar31))
        goto LAB_00e84fad;
      }
      else if (*(int *)(&DAT_01ee2144 +
                       (ulonglong)
                       *(ushort *)
                        (&DAT_01ee59c0 +
                        (ulonglong)(uVar40 & 0x7f | (uint)(byte)(&DAT_01ee37c0)[uVar31 >> 7] << 7) *
                        2) * 8) == 0) goto LAB_00e84fad;
      *(byte *)(lVar38 + 0xc) = *(byte *)(lVar38 + 0xc) | 0x80;
    }
  }
LAB_00e84fad:
  *(byte *)(lVar38 + 0xc) = *(byte *)(lVar38 + 0xc) | 0x40;
LAB_00e84fb1:
  do {
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar13) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0xe84fd3;
    iVar41 = FUN_00e86750(lVar33,uVar17,uVar22,&stack0x000000b8 + lVar13);
    if (iVar41 != 0) {
      *(byte *)(lVar38 + 0xd) = *(byte *)(lVar38 + 0xd) | 0x80;
      return lVar38;
    }
    psVar19 = (short *)(lVar33 + (ulonglong)*(ushort *)(lVar33 + 2) * 2);
    lVar33 = lVar33 + (ulonglong)*(ushort *)(lVar33 + 2) * 2;
  } while (*psVar19 == 0x77);
  return lVar38;
}

