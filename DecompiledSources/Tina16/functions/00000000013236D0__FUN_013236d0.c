/* Ghidra address: 013236d0 */
/* Ghidra symbol: FUN_013236d0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013236d0(char param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong *plVar13;
  undefined7 uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  double dVar18;
  longlong lVar19;
  double dVar20;
  undefined1 *in_stack_ffffffffffffff38;
  undefined1 *in_stack_ffffffffffffff40;
  ulonglong in_stack_ffffffffffffff48;
  uint7 uVar21;
  char local_8b;
  bool local_8a;
  longlong local_88 [2];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60 [2];
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  local_88[0] = 0;
  local_78 = (longlong *)0x0;
  local_88[1] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_48 = 0;
  local_50 = (undefined1 *)0x0;
  plVar13 = param_2;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  param_2[0x75] = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_2 + 0x13b6) = 0;
  bVar15 = param_1 == '\x02';
  while (((double)param_2[0x75] <= *(double *)((longlong)param_2 + 0x695) &&
         (*(char *)((longlong)param_2 + 0x13b6) == '\0'))) {
    local_8b = '\0';
    uVar12 = (undefined7)((ulonglong)param_2 >> 8);
    if (*(byte *)((longlong)param_2 + 0x5db) < 8) {
      bVar16 = ((int)CONCAT71(uVar12,1) << (*(byte *)((longlong)param_2 + 0x5db) & 0x1f) & 0xdeU) !=
               0;
    }
    else {
      bVar16 = false;
    }
    if (bVar16) {
      uVar14 = (undefined7)((ulonglong)plVar13 >> 8);
      if (*(char *)((longlong)param_2 + 0x325) == '\0') {
        plVar13 = (longlong *)CONCAT71(uVar14,5);
        FUN_01af25d0(param_2[0x1e2],plVar13,4,param_2 + 0x75);
      }
      else {
        plVar13 = (longlong *)CONCAT71(uVar14,2);
        FUN_01af25d0(param_2[0x1e2],plVar13,4,param_2 + 0x75);
      }
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
      uVar11 = (ulonglong)*(byte *)((longlong)param_2 + 0x5db);
      if (uVar11 < 3) {
        if (uVar11 == 1) {
          uVar6 = FUN_0040c770((double)param_2[0x75] - 1.0);
          in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,uVar6);
          in_stack_ffffffffffffff40 =
               (undefined1 *)
               CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff40 >> 8),(char)param_2[0x141]);
          in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
          lVar19 = FUN_017c58f0(param_2[0x13e],param_2[0x13f],param_2[0x140],
                                *(short *)((longlong)param_2 + 0x9ee) + -1,in_stack_ffffffffffffff38
                                ,in_stack_ffffffffffffff40,in_stack_ffffffffffffff48);
          param_2[0xd4] = lVar19;
        }
        else if (uVar11 == 2) {
          if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
            uVar6 = FUN_0040c770((double)param_2[0x75] - 1.0);
            in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,uVar6);
            in_stack_ffffffffffffff40 =
                 (undefined1 *)
                 CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff40 >> 8),
                          *(undefined1 *)((longlong)param_2 + 0xb27));
            in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
            uVar17 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0xb15),
                                  *(undefined8 *)((longlong)param_2 + 0xb1d),param_2[0x165],
                                  *(short *)((longlong)param_2 + 0xb25) + -1,
                                  in_stack_ffffffffffffff38,in_stack_ffffffffffffff40,
                                  in_stack_ffffffffffffff48);
            if (*(longlong *)((longlong)param_2 + 0xa09) == 0) {
              FUN_004169a0(local_60,(longlong)param_2 + 0xa15);
              uVar7 = (**(code **)(**(longlong **)(param_2[0x14] + 0x438) + 0xb8))
                                (*(longlong **)(param_2[0x14] + 0x438),local_60[0]);
              plVar13 = (longlong *)(ulonglong)uVar7;
              in_stack_ffffffffffffff38 =
                   (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
              FUN_00b8fd60(&local_68,uVar17,6,0,in_stack_ffffffffffffff38);
              FUN_004b5450(*(undefined8 *)(param_2[0x14] + 0x438),plVar13,local_68);
              local_8b = '\x01';
            }
            else {
              *(undefined8 *)param_2[0x272] = uVar17;
              FUN_01cc5c10(param_2[0x16],uVar17);
            }
          }
          else {
            plVar13 = (longlong *)0x0;
            local_8b = FUN_012b4a50(param_2[0xb1],0);
          }
        }
      }
      else if (uVar11 - 3 < 2) {
        FUN_01150d10(param_2[0xb2],param_2[0x75]);
      }
      else if (uVar11 == 6) {
        if ((double)param_2[0x75] == 2.0) {
          FUN_0131fa20(param_2);
          FUN_016f1c10(param_2,1);
          plVar13 = (longlong *)(ulonglong)*(byte *)(param_2 + 0x9b);
          in_stack_ffffffffffffff38 = &local_3a;
          in_stack_ffffffffffffff40 = &local_3b;
          lVar19 = FUN_01b05ad0(param_2[0x9a],plVar13,0,local_39,in_stack_ffffffffffffff38,
                                in_stack_ffffffffffffff40);
          param_2[0x271] = lVar19;
        }
      }
      else if (uVar11 == 7) {
        uVar6 = FUN_0040c770((double)param_2[0x75] - 1.0);
        in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,uVar6);
        in_stack_ffffffffffffff40 =
             (undefined1 *)
             CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff40 >> 8),
                      *(undefined1 *)((longlong)param_2 + 0xb27));
        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
        uVar17 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0xb15),
                              *(undefined8 *)((longlong)param_2 + 0xb1d),param_2[0x165],
                              *(short *)((longlong)param_2 + 0xb25) + -1,in_stack_ffffffffffffff38,
                              in_stack_ffffffffffffff40,in_stack_ffffffffffffff48);
        plVar13 = (longlong *)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
        FUN_016cfc70(param_2[0x14],plVar13,uVar17,1);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    if (*(char *)((longlong)param_2 + 0xdb7) == '\0') {
      uVar7 = 1;
    }
    else {
      uVar7 = (uint)*(ushort *)((longlong)param_2 + 0x84a);
    }
    iVar10 = 1;
    while ((uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20), iVar10 <= (int)uVar7
           && (*(char *)((longlong)param_2 + 0x13b6) == '\0'))) {
      local_8a = false;
      FUN_00414480(&local_50);
      if (*(char *)((longlong)param_2 + 0xdb7) != '\0') {
        uVar17 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0x84c),
                              *(undefined8 *)((longlong)param_2 + 0x854),0,
                              *(ushort *)((longlong)param_2 + 0x84a) - 1,CONCAT44(uVar8,iVar10 + -1)
                              ,*(undefined1 *)((longlong)param_2 + 0x86f),
                              in_stack_ffffffffffffff48 & 0xffffffffffffff00);
        lVar19 = param_2[0x275];
        if (lVar19 == 0) {
          FUN_01d3a010(param_2[0x273],3,uVar17);
        }
        else {
          uVar8 = (**(code **)(**(longlong **)(param_2[0x14] + 0x438) + 0xb8))
                            (*(longlong **)(param_2[0x14] + 0x438),param_2[0x275]);
          FUN_00b8fd60(&local_70,uVar17,6,0,1);
          FUN_004b5450(*(undefined8 *)(param_2[0x14] + 0x438),uVar8,local_70);
        }
        local_8a = lVar19 != 0;
        FUN_00b8fd60(&local_78,uVar17,*(undefined1 *)((longlong)param_2 + 0x12f1),0,1);
        FUN_004169a0(local_88 + 1,(longlong)param_2 + 0xb3b);
        plVar13 = local_78;
        FUN_00416ba0(&local_50,local_78);
      }
      if ((char)param_2[0x276] == '\0') {
        in_stack_ffffffffffffff38 =
             (undefined1 *)((double)(iVar10 + -1) + ((double)param_2[0x75] - 1.0) * (double)uVar7);
        if (*(char *)((longlong)param_2 + 0xdb7) == '\0') {
          in_stack_ffffffffffffff38 = (undefined1 *)((double)param_2[0x75] - 1.0);
        }
        plVar13 = (longlong *)0x0;
        in_stack_ffffffffffffff48 = 0;
        in_stack_ffffffffffffff40 = local_50;
        FUN_017ce930(param_2,0,0,0,in_stack_ffffffffffffff38,local_50,0);
      }
      else {
        in_stack_ffffffffffffff38 =
             (undefined1 *)((double)(iVar10 + -1) + ((double)param_2[0x75] - 1.0) * (double)uVar7);
        if (*(char *)((longlong)param_2 + 0xdb7) == '\0') {
          in_stack_ffffffffffffff38 = (undefined1 *)((double)param_2[0x75] - 1.0);
        }
        plVar13 = (longlong *)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
        in_stack_ffffffffffffff40 = (undefined1 *)0x0;
        in_stack_ffffffffffffff48 = 0;
        FUN_017ce930(param_2,plVar13,0,0,in_stack_ffffffffffffff38,0,0);
      }
      *(undefined4 *)(param_2 + 0x284) = 0;
      *(undefined1 *)((longlong)param_2 + 0x13b2) = 0;
      *(undefined4 *)(param_2 + 0x93) = 0;
      bVar16 = true;
      while ((uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),
             *(char *)((longlong)param_2 + 0x13b6) == '\0' &&
             (*(char *)((longlong)param_2 + 0x13b2) == '\0'))) {
        bVar2 = false;
        if (bVar15) {
          FUN_004169a0(&local_48,*(longlong *)(param_2[0x14] + 0xe70) + 0xb80);
          iVar9 = FUN_004170c0(L"TEMP",local_48,1);
          if (iVar9 == 1) {
            in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,(int)param_2[0x284]);
            in_stack_ffffffffffffff40 =
                 (undefined1 *)
                 CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff40 >> 8),
                          *(undefined1 *)((longlong)param_2 + 0x86e));
            in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
            dVar18 = (double)FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0x83a),
                                          *(undefined8 *)((longlong)param_2 + 0x842),
                                          *(undefined8 *)((longlong)param_2 + 0x866),
                                          (short)param_2[0x107],in_stack_ffffffffffffff38,
                                          in_stack_ffffffffffffff40,in_stack_ffffffffffffff48);
          }
          else {
            iVar9 = FUN_004170c0(L"PARAM",local_48,1);
            uVar14 = (undefined7)((ulonglong)in_stack_ffffffffffffff40 >> 8);
            uVar21 = (uint7)(in_stack_ffffffffffffff48 >> 8);
            if (iVar9 == 1) {
              in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,(int)param_2[0x284]);
              in_stack_ffffffffffffff40 =
                   (undefined1 *)CONCAT71(uVar14,*(undefined1 *)((longlong)param_2 + 0x86e));
              in_stack_ffffffffffffff48 = (ulonglong)uVar21 << 8;
              dVar18 = (double)FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0x83a),
                                            *(undefined8 *)((longlong)param_2 + 0x842),
                                            *(undefined8 *)((longlong)param_2 + 0x866),
                                            (short)param_2[0x107],in_stack_ffffffffffffff38,
                                            in_stack_ffffffffffffff40,in_stack_ffffffffffffff48);
              FUN_016cfc70(param_2[0x14],1,dVar18,0);
            }
            else {
              in_stack_ffffffffffffff38 = (undefined1 *)CONCAT44(uVar8,(int)param_2[0x284]);
              in_stack_ffffffffffffff40 =
                   (undefined1 *)CONCAT71(uVar14,*(undefined1 *)((longlong)param_2 + 0x86e));
              in_stack_ffffffffffffff48 = CONCAT71(uVar21,1);
              uVar17 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0x83a),
                                    *(undefined8 *)((longlong)param_2 + 0x842),
                                    *(undefined8 *)((longlong)param_2 + 0x866),(short)param_2[0x107]
                                    ,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40,
                                    in_stack_ffffffffffffff48);
              if (*(double *)((longlong)param_2 + 0x842) < *(double *)((longlong)param_2 + 0x83a)) {
                dVar18 = (double)FUN_00b90620(uVar17,*(undefined8 *)((longlong)param_2 + 0x83a));
              }
              else {
                dVar18 = (double)FUN_00b90650(uVar17,*(undefined8 *)((longlong)param_2 + 0x842));
              }
            }
          }
          lVar19 = FUN_0040c850(*(double *)param_2[0x271] - dVar18);
          param_2[0x27b] = lVar19;
          *(double *)param_2[0x271] = dVar18;
          lVar19 = FUN_0040c850(*(double *)param_2[0x271] - *(double *)((longlong)param_2 + 0x83a));
          param_2[0x27d] = lVar19;
          if ((int)param_2[0x284] < 1) {
            in_stack_ffffffffffffff38 =
                 (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
            FUN_01323140(param_2,*(undefined8 *)((longlong)param_2 + 0x83a),
                         *(undefined8 *)((longlong)param_2 + 0x842),(short)param_2[0x107],
                         in_stack_ffffffffffffff38);
            param_2[0x279] = 0x3d719799812dea11;
            bVar1 = false;
            bVar2 = false;
          }
          else {
            dVar18 = (double)FUN_0040c850(param_2[0x27b]);
            dVar20 = (double)FUN_0040c850(param_2[0x279]);
            bVar1 = dVar18 <= dVar20;
            bVar2 = false;
          }
        }
        else {
          if ((int)param_2[0x284] < 1) {
            in_stack_ffffffffffffff38 =
                 (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),bVar15);
            FUN_01323140(param_2,*(undefined8 *)((longlong)param_2 + 0x83a),
                         *(undefined8 *)((longlong)param_2 + 0x842),(short)param_2[0x107],
                         in_stack_ffffffffffffff38);
            bVar1 = false;
          }
          else {
            dVar18 = (double)FUN_0040c850(param_2[0x27b]);
            dVar20 = (double)FUN_0040c850(param_2[0x279]);
            bVar1 = dVar18 <= dVar20;
            *(double *)param_2[0x271] = (double)param_2[0x27a] + (double)param_2[0x27b];
          }
          if (param_2[0x274] != 0) {
            uVar8 = (**(code **)(**(longlong **)(param_2[0x14] + 0x438) + 0xb8))
                              (*(longlong **)(param_2[0x14] + 0x438),param_2[0x274]);
            in_stack_ffffffffffffff38 =
                 (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
            FUN_00b8fd60(local_88,*(undefined8 *)param_2[0x271],6,0,in_stack_ffffffffffffff38);
            FUN_004b5450(*(undefined8 *)(param_2[0x14] + 0x438),uVar8,local_88[0]);
            bVar2 = true;
          }
        }
        if ((bVar2 || local_8a) || (local_8b != '\0')) {
          uVar17 = *(undefined8 *)param_2[0x271];
          FUN_01440040(param_2[0x14],param_2[0x262],0);
          *(undefined8 *)param_2[0x271] = uVar17;
          FUN_019af810(param_2[0x14],1);
          *(undefined1 *)((longlong)param_2 + 0x13b9) = 1;
        }
        FUN_016f5520(param_2,0);
        bVar3 = FUN_01374d30(param_2,0);
        FUN_0165dc20(param_2[0x22]);
        if (*(char *)((longlong)param_2 + 0x325) == '\0') {
          FUN_01af25d0(param_2[0x1e2],4,3);
          bVar2 = bVar1;
          if (!bVar15) {
            if ((!bVar1) || (bVar16)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          if (((bVar3 & 0 < (int)param_2[0x284]) == 0) || (bVar2)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined1 *)((longlong)param_2 + 0x326) = uVar4;
          cVar5 = FUN_01b07dd0(param_2);
          if (cVar5 == '\0') {
            FUN_016f5430(param_2,1);
          }
          else {
            FUN_016f39b0(param_2,1);
          }
        }
        else {
          FUN_01af25d0(param_2[0x1e2],1,3);
          FUN_016f6430(param_2,1,0);
          FUN_016f3620(param_2,0);
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
        if ((*(char *)((longlong)param_2 + 0x324) == '\0') &&
           ((*(char *)((longlong)param_2 + 0x13b1) == '\0' ||
            (cVar5 = FUN_01322fb0(param_2), cVar5 != '\0')))) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)((longlong)param_2 + 0x13b3) = uVar4;
        FUN_01323220(param_2,bVar15);
        *(int *)(param_2 + 0x93) = (int)param_2[0x93] + 1;
        if ((*(char *)((longlong)param_2 + 0x13b3) == '\0') ||
           (*(char *)((longlong)param_2 + 0x13b6) != '\0')) {
          if (bVar1) {
            bVar16 = !bVar16;
            if (!bVar16) {
              if (bVar15) {
                param_2[0x27b] = param_2[0x278];
                *(double *)param_2[0x271] = (double)param_2[0x27a] + (double)param_2[0x27b];
              }
              else {
                param_2[0x27b] = param_2[0x278];
              }
            }
            dVar18 = (double)FUN_0040c850(param_2[0x27b]);
            param_2[0x27d] = (longlong)((double)param_2[0x27d] + dVar18);
            param_2[0x27a] = (longlong)(*(double *)param_2[0x271] + (double)param_2[0x27b]);
          }
        }
        else {
          FUN_01b07850(param_2,param_2[0x23]);
          param_2[0x27a] = *(longlong *)param_2[0x271];
          if (0 < (int)param_2[0x284]) {
            if (bVar15) {
              lVar19 = FUN_0040c850(*(double *)param_2[0x271] -
                                    *(double *)((longlong)param_2 + 0x83a));
              param_2[0x27d] = lVar19;
            }
            else {
              dVar18 = (double)FUN_0040c850(param_2[0x27c]);
              param_2[0x27d] = (longlong)((double)param_2[0x27d] + dVar18);
            }
          }
          if ((char)param_2[0x276] == '\0') {
            in_stack_ffffffffffffff38 = (undefined1 *)0x0;
            in_stack_ffffffffffffff40 = (undefined1 *)0x0;
            in_stack_ffffffffffffff48 = 0;
            FUN_016f8860(param_2,param_1,1,*(undefined8 *)param_2[0x271],0,0,0);
          }
          else {
            FUN_016f8d90(param_2,((double)param_2[0x27d] / (double)param_2[0x280]) * 100.0,
                         *(undefined8 *)param_2[0x271]);
          }
          *(int *)(param_2 + 0x284) = (int)param_2[0x284] + 1;
          bVar16 = true;
        }
        plVar13 = (longlong *)0x0;
        FUN_013233e0(param_2);
        dVar18 = (double)param_2[0x27d] + (double)(iVar10 + -1) * (double)param_2[0x280] +
                 ((double)param_2[0x75] - 1.0) * (double)uVar7 * (double)param_2[0x280];
        if (*(char *)((longlong)param_2 + 0xdb7) == '\0') {
          dVar18 = (double)param_2[0x27d] + ((double)param_2[0x75] - 1.0) * (double)param_2[0x280];
        }
        FUN_01af2990(param_2[0x1e2],dVar18);
        cVar5 = FUN_01af2a10(param_2[0x1e2]);
        if (cVar5 != '\0') {
          uVar17 = FUN_01cc3a00(&PTR_FUN_01cb5bc0);
          *(undefined8 *)PTR_DAT_02005168 = uVar17;
          FUN_013d3ef0(*(undefined8 *)PTR_DAT_02005168);
          plVar13 = (longlong *)0x0;
          FUN_01af29f0(param_2[0x1e2]);
        }
      }
      iVar10 = iVar10 + 1;
    }
    if ((((*(char *)((longlong)param_2 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_2 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_2 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_2 + 0x69f) != '\0')))) &&
       (((double)param_2[0x75] <= *(double *)((longlong)param_2 + 0x695) &&
         *(double *)((longlong)param_2 + 0x695) != (double)param_2[0x75] &&
        (*(char *)((longlong)param_2 + 0x49c) == '\0')))) {
      uVar14 = (undefined7)((ulonglong)plVar13 >> 8);
      FUN_013d3ef0(param_2[0x16]);
      uVar21 = (uint7)((ulonglong)in_stack_ffffffffffffff40 >> 8);
      if ((char)param_2[0x276] == '\0') {
        plVar13 = (longlong *)0x0;
        in_stack_ffffffffffffff38 = (undefined1 *)0x0;
        in_stack_ffffffffffffff40 = (undefined1 *)((ulonglong)uVar21 << 8);
        FUN_017cc020(param_2 + 0x16,0,param_1 == '\x01',*(undefined8 *)(param_2[0x14] + 0x360),0,
                     in_stack_ffffffffffffff40);
      }
      else {
        plVar13 = (longlong *)CONCAT71(uVar14,1);
        in_stack_ffffffffffffff38 = (undefined1 *)0x0;
        in_stack_ffffffffffffff40 = (undefined1 *)((ulonglong)uVar21 << 8);
        FUN_017cc020(param_2 + 0x16,plVar13,param_1 == '\x01',*(undefined8 *)(param_2[0x14] + 0x360)
                     ,0,in_stack_ffffffffffffff40);
      }
      if (*(byte *)((longlong)param_2 + 0x5db) < 8) {
        bVar16 = ((int)CONCAT71(uVar12,1) << (*(byte *)((longlong)param_2 + 0x5db) & 0x1f) & 0xdeU)
                 != 0;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(char *)((longlong)param_2 + 0x5db) == '\x02')) {
        if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_2 + 0xa09) != 0) {
            iVar10 = FUN_01b07e10(param_2,*(undefined8 *)((longlong)param_2 + 0xa09));
            param_2[0x282] = *(longlong *)(param_2[0x56] + -8 + (longlong)iVar10 * 8);
            plVar13 = (longlong *)param_2[0x282];
            FUN_012b4370(param_2);
          }
        }
        else {
          FUN_012b49a0(param_2[0xb1]);
        }
      }
    }
    param_2[0x75] = (longlong)((double)param_2[0x75] + 1.0);
  }
  param_2[0x75] = (longlong)((double)param_2[0x75] - 1.0);
  FUN_00414560(local_88,6);
  FUN_00414560(&local_50,2);
  return;
}

