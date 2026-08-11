/* Ghidra address: 014f5850 */
/* Ghidra symbol: FUN_014f5850 */


void FUN_014f5850(longlong *param_1,undefined1 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff68;
  uint local_74;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  undefined1 local_48 [32];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  cVar2 = FUN_017d1390(param_1[0x98]);
  if (cVar2 != '\0') {
    FUN_014f5370(param_1,param_2,&DAT_014f6564);
  }
  if (param_1[0x98] != 0) {
    lVar6 = FUN_01d347d0(param_1[0x98],0);
    FUN_01b07850(param_1,param_1[0x23],*(undefined8 *)(lVar6 + 8));
  }
  param_1[0x75] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x27b) = 0;
  lVar6 = FUN_014f51b0(param_1,0);
  if ((((*(char *)((longlong)param_1 + 0x5db) == '\x02') && (lVar6 != 0)) &&
      (lVar6 == param_1[0x278])) && ((char)param_1[0x279] == '\x05')) {
    *(undefined1 *)(param_1 + 0x27b) = 1;
    *(undefined1 *)((longlong)param_1 + 0x49c) = 1;
    FUN_01b04ef0(0x10c,0x1586,param_1[0x262],0);
  }
  plVar9 = param_1;
  FUN_014f56e0(&local_58,param_1,&local_4c);
  while ((uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),
         (double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         ((char)param_1[0x27b] == '\0'))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x5db);
    uVar7 = (ulonglong)bVar1;
    if (bVar1 < 8) {
      uVar8 = (int)CONCAT71((int7)((ulonglong)plVar9 >> 8),1) << (bVar1 & 0x1f);
      plVar9 = (longlong *)(ulonglong)uVar8;
      bVar13 = (uVar8 & 0xde) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (uVar7 < 3) {
        if (uVar7 == 1) {
          uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
          lVar6 = FUN_017c58f0(param_1[0x13e],param_1[0x13f],param_1[0x140],
                               *(short *)((longlong)param_1 + 0x9ee) + -1,CONCAT44(uVar4,uVar3),
                               (char)param_1[0x141],in_stack_ffffffffffffff68 & 0xffffffffffffff00);
          param_1[0xd4] = lVar6;
          FUN_016f5520(param_1,0);
          plVar9 = (longlong *)0x0;
          FUN_014f5550(param_1,0);
        }
        else if (uVar7 == 2) {
          if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
            uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
            uVar14 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                                  *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                                  *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                                  *(undefined1 *)((longlong)param_1 + 0xb27),
                                  in_stack_ffffffffffffff68 & 0xffffffffffffff00);
            if (*(longlong *)((longlong)param_1 + 0xa09) == 0) {
              FUN_004169a0(&local_60,(longlong)param_1 + 0xa15);
              uVar4 = (**(code **)(**(longlong **)(param_1[0x14] + 0x438) + 0xb8))
                                (*(longlong **)(param_1[0x14] + 0x438),local_60);
              FUN_00b8fd60(&local_68,uVar14,6,0,1);
              FUN_004b5450(*(undefined8 *)(param_1[0x14] + 0x438),uVar4,local_68);
              FUN_01440040(param_1[0x14],param_1[0x262],0);
              FUN_019af810(param_1[0x14],0xc);
            }
            else {
              *(undefined8 *)param_1[0x27a] = uVar14;
              FUN_01cc5c10(param_1[0x16],uVar14);
            }
            FUN_016f5520(param_1,0);
            plVar9 = (longlong *)0x0;
            FUN_014f5550(param_1,0);
          }
          else {
            FUN_014f5300(param_1);
            FUN_012b4a50(param_1[0xb1],1);
            FUN_014f51b0(param_1,1);
            FUN_016f5520(param_1,0);
            plVar9 = (longlong *)0x0;
            FUN_014f5550(param_1,0);
          }
        }
      }
      else if (uVar7 - 3 < 2) {
        FUN_014f5300(param_1);
        FUN_01150d10(param_1[0xb2],param_1[0x75]);
        FUN_014f51b0(param_1,1);
        FUN_016f5520(param_1,0);
        plVar9 = (longlong *)0x0;
        FUN_014f5550(param_1,0);
      }
      else if (uVar7 == 6) {
        if ((double)param_1[0x75] == 2.0) {
          FUN_014f5300(param_1);
          FUN_014f5660(param_1);
          uVar14 = CONCAT71((int7)((ulonglong)plVar9 >> 8),0xc);
          FUN_016f1c10(param_1,uVar14);
          plVar9 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
          FUN_014f51b0(param_1,plVar9);
        }
      }
      else if (uVar7 == 7) {
        uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
        uVar14 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                              *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                              *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                              *(undefined1 *)((longlong)param_1 + 0xb27),
                              in_stack_ffffffffffffff68 & 0xffffffffffffff00);
        FUN_016cfc70(param_1[0x14],8,uVar14,1);
        FUN_016f5520(param_1,0);
        plVar9 = (longlong *)0x0;
        FUN_014f5550(param_1,0);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      cVar2 = FUN_017d1390(param_1[0x98]);
      if (cVar2 != '\0') {
        FUN_017dcfd0(param_1[0x1b],0,1);
        FUN_017d9ab0(param_1[0x1b],0);
        FUN_01af25b0(param_1[0x1e2],0,&DAT_014f6586,2);
        FUN_016f5430(param_1,1,0);
        FUN_01af25b0(param_1[0x1e2],0,&DAT_014f658c,1);
        plVar9 = (longlong *)0x0;
        FUN_017d9ab0(param_1[0x1b],0);
        if (param_1[0x98] != 0) {
          lVar6 = FUN_01d347d0(param_1[0x98],0);
          plVar9 = (longlong *)param_1[0x23];
          FUN_01b07850(param_1,plVar9,*(undefined8 *)(lVar6 + 8));
        }
      }
      plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),2);
      FUN_01af25d0(param_1[0x1e2],plVar9,4,param_1 + 0x75);
    }
    uVar14 = CONCAT71((int7)((ulonglong)plVar9 >> 8),7);
    FUN_016f6430(param_1,uVar14,0);
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),8);
    FUN_016f6430(param_1,uVar14,0);
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    in_stack_ffffffffffffff58 = (double)param_1[0x75] - 1.0;
    uVar7 = 0;
    in_stack_ffffffffffffff68 = 0;
    FUN_017ce930(param_1,uVar14,0,0,in_stack_ffffffffffffff58,0,0);
    *(undefined4 *)(param_1 + 0x93) = 0;
    plVar9 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    FUN_017dcfd0(param_1[0x1b]);
    iVar5 = 0;
    while ((iVar5 <= (int)(uint)*(ushort *)(param_1 + 0x12f) && ((char)param_1[0x27b] == '\0'))) {
      in_stack_ffffffffffffff58 =
           (double)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),iVar5);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
      lVar6 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0x97a),
                           *(undefined8 *)((longlong)param_1 + 0x982),0,(short)param_1[0x12f],
                           in_stack_ffffffffffffff58,uVar7,in_stack_ffffffffffffff68);
      param_1[0x74] = lVar6;
      FUN_01af25d0(param_1[0x1e2],1,3);
      FUN_01af2990(param_1[0x1e2],
                   (double)iVar5 +
                   ((double)param_1[0x75] - 1.0) * (double)*(ushort *)(param_1 + 0x12f));
      FUN_016f35f0(param_1,(double)param_1[0x74] * 6.283185307179586);
      FUN_016f6430(param_1,0xc,0);
      plVar9 = (longlong *)(longlong)(*(int *)((longlong)param_1 + 0x691) * 8);
      FUN_0040d200(param_1[0x277],plVar9,0);
      *(undefined1 *)(param_1[0x1b] + 0x93) = 1;
      local_74 = 0;
      iVar11 = local_4c;
      if (-1 < local_4c + -1) {
        do {
          uVar8 = *(uint *)(local_58 + (longlong)(int)local_74 * 4);
          in_stack_ffffffffffffff58 = (double)param_1[0x74] * 6.283185307179586;
          FUN_00dfb5b0(param_1,0xc,uVar8 & 0xffffff,uVar8 >> 0x18,in_stack_ffffffffffffff58);
          plVar9 = (longlong *)param_1[0x23];
          FUN_00dcf730(param_1[0x1b],plVar9,param_1[0x24]);
          for (local_6c = 0; (int)local_6c < *(int *)((longlong)param_1 + 0x691);
              local_6c = local_6c + 1) {
            lVar6 = param_1[0x9e];
            if (*(uint *)(lVar6 + 0x10) <= local_6c) {
              FUN_00594f90();
            }
            lVar12 = (longlong)(int)local_6c;
            plVar9 = param_1;
            FUN_017c8e10(local_48,param_1,*(undefined8 *)(*(longlong *)(lVar6 + 8) + lVar12 * 8));
            dVar15 = (double)FUN_00c44590(local_48);
            *(double *)(param_1[0x277] + lVar12 * 8) =
                 *(double *)(param_1[0x277] + lVar12 * 8) + dVar15 * dVar15;
          }
          local_74 = local_74 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(undefined1 *)(param_1[0x1b] + 0x93) = 0;
      FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586);
      local_74 = 0;
      FUN_01cc4f60(param_1[0x16],param_1[0x74]);
      for (; (int)local_74 < *(int *)((longlong)param_1 + 0x691); local_74 = local_74 + 1) {
        lVar6 = param_1[0x9e];
        if (*(uint *)(lVar6 + 0x10) <= local_74) {
          FUN_00594f90();
        }
        if (**(char **)(*(longlong *)(lVar6 + 8) + (longlong)(int)local_74 * 8) != '\0') {
          dVar15 = (double)FUN_0040c760(*(undefined8 *)
                                         (param_1[0x277] + (longlong)(int)local_74 * 8));
          if (*(uint *)(param_1[0x9e] + 0x10) <= local_74) {
            FUN_00594f90();
          }
          FUN_017c8650(local_48,param_1);
          dVar16 = (double)FUN_00c44590(local_48);
          if (dVar16 == 0.0) {
            dVar16 = 0.0;
          }
          else {
            dVar16 = (double)FUN_00c44590(local_48);
            dVar16 = dVar15 / dVar16;
          }
          plVar9 = (longlong *)(ulonglong)local_74;
          FUN_01cc5030(param_1[0x16],plVar9,dVar15,dVar16);
        }
      }
      iVar5 = iVar5 + 1;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      cVar2 = FUN_01af2a10(param_1[0x1e2]);
      if (cVar2 != '\0') {
        uVar14 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1);
        *(undefined8 *)PTR_DAT_02005168 = uVar14;
        FUN_013d8d70(*(undefined8 *)PTR_DAT_02005168);
        plVar9 = (longlong *)0x0;
        FUN_01af29f0(param_1[0x1e2]);
      }
    }
    if ((((*(char *)((longlong)param_1 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_1 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_1 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_1 + 0x69f) != '\0')))) &&
       (((double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         *(double *)((longlong)param_1 + 0x695) != (double)param_1[0x75] &&
        (*(char *)((longlong)param_1 + 0x49c) == '\0')))) {
      uVar10 = (ulonglong)*(byte *)((longlong)param_1 + 0x992);
      FUN_013d8d70(param_1[0x16],uVar10);
      plVar9 = (longlong *)CONCAT71((int7)(uVar10 >> 8),7);
      in_stack_ffffffffffffff58 = 0.0;
      FUN_017cc020(param_1 + 0x16,plVar9,0,*(undefined8 *)(param_1[0x14] + 0x360),0,
                   uVar7 & 0xffffffffffffff00);
      bVar1 = *(byte *)((longlong)param_1 + 0x5db);
      if (bVar1 < 8) {
        uVar8 = (int)CONCAT71((int7)((ulonglong)plVar9 >> 8),1) << (bVar1 & 0x1f);
        plVar9 = (longlong *)(ulonglong)uVar8;
        bVar13 = (uVar8 & 0xde) != 0;
      }
      else {
        bVar13 = false;
      }
      if ((bVar13) && (bVar1 == 2)) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_1 + 0xa09) != 0) {
            iVar5 = FUN_01b07e10(param_1,*(undefined8 *)((longlong)param_1 + 0xa09));
            param_1[0x278] = *(longlong *)(param_1[0x56] + -8 + (longlong)iVar5 * 8);
            plVar9 = (longlong *)param_1[0x278];
            FUN_012b4370(param_1);
          }
        }
        else {
          FUN_012b49a0(param_1[0xb1]);
        }
      }
    }
    param_1[0x75] = (longlong)((double)param_1[0x75] + 1.0);
  }
  param_1[0x75] = (longlong)((double)param_1[0x75] - 1.0);
  FUN_014f5300();
  FUN_00419430(&local_58,&DAT_014f56a8);
  FUN_00414560(&local_68,2);
  FUN_00419430(&local_58,&DAT_014f56a8);
  return;
}

