/* Ghidra address: 01528cb0 */
/* Ghidra symbol: FUN_01528cb0 */


void FUN_01528cb0(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  char *pcVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double in_stack_fffffffffffffef8;
  undefined7 uVar21;
  ulonglong uVar22;
  ulonglong in_stack_ffffffffffffff08;
  undefined8 uVar23;
  int local_c4;
  int local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  double local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [96];
  
  local_b8 = 0;
  local_b0[0] = 0;
  param_1[0x75] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x273) = 0;
  uVar4 = *(ushort *)(param_1 + 0x116);
  dVar1 = (double)param_1[0x115];
  dVar2 = (double)param_1[0x114];
  while ((uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),
         (double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         ((char)param_1[0x273] == '\0'))) {
    bVar3 = *(byte *)((longlong)param_1 + 0x5db);
    if (bVar3 < 8) {
      bVar13 = ((int)CONCAT71((int7)(param_2 >> 8),1) << (bVar3 & 0x1f) & 0x9eU) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (bVar3 == 1) {
        uVar9 = FUN_0040c770((double)param_1[0x75] - 1.0);
        lVar14 = FUN_017c58f0(param_1[0x13e],param_1[0x13f],param_1[0x140],
                              *(short *)((longlong)param_1 + 0x9ee) + -1,CONCAT44(uVar8,uVar9),
                              (char)param_1[0x141],in_stack_ffffffffffffff08 & 0xffffffffffffff00);
        param_1[0xd4] = lVar14;
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar3 == 2) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          uVar9 = FUN_0040c770((double)param_1[0x75] - 1.0);
          uVar15 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                                *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                                *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar8,uVar9),
                                *(undefined1 *)((longlong)param_1 + 0xb27),
                                in_stack_ffffffffffffff08 & 0xffffffffffffff00);
          if (*(longlong *)((longlong)param_1 + 0xa09) == 0) {
            FUN_004169a0(local_b0,(longlong)param_1 + 0xa15);
            uVar8 = (**(code **)(**(longlong **)(param_1[0x14] + 0x438) + 0xb8))
                              (*(longlong **)(param_1[0x14] + 0x438),local_b0[0]);
            FUN_00b8fd60(&local_b8,uVar15,6,0,1);
            FUN_004b5450(*(undefined8 *)(param_1[0x14] + 0x438),uVar8,local_b8);
            FUN_01440040(param_1[0x14],param_1[0x262],0);
            FUN_019af810(param_1[0x14],8);
          }
          else {
            *(undefined8 *)param_1[0x272] = uVar15;
            FUN_01cc5c10(param_1[0x16],uVar15);
          }
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
        else {
          FUN_012b4a50(param_1[0xb1],1);
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
      }
      else if ((byte)(bVar3 - 3) < 2) {
        FUN_01150d10(param_1[0xb2],param_1[0x75]);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar3 == 7) {
        uVar9 = FUN_0040c770((double)param_1[0x75] - 1.0);
        uVar15 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                              *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                              *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar8,uVar9),
                              *(undefined1 *)((longlong)param_1 + 0xb27),
                              in_stack_ffffffffffffff08 & 0xffffffffffffff00);
        FUN_016cfc70(param_1[0x14],8,uVar15,1);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      FUN_017d18e0(param_1,8);
      FUN_01528bb0(param_1);
      FUN_01af25d0(param_1[0x1e2],2,4,param_1 + 0x75);
    }
    else {
      FUN_017d18e0(param_1,8);
      FUN_01528bb0(param_1);
    }
    iVar10 = FUN_017d1380(param_1[0x98]);
    local_a0 = (double)param_1[0x114];
    param_2 = 0;
    in_stack_fffffffffffffef8 = (double)param_1[0x75] - 1.0;
    uVar22 = 0;
    in_stack_ffffffffffffff08 = 0;
    FUN_017ce930(param_1,0,0,0,in_stack_fffffffffffffef8,0,0);
    local_c4 = 0;
    *(undefined4 *)(param_1 + 0x93) = 0;
    while ((local_c4 <= (int)(uint)uVar4 && (*(char *)((longlong)param_1 + 0x49c) == '\0'))) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      FUN_01cc4620(param_1[0x16],local_a0);
      param_2 = CONCAT71((int7)(param_2 >> 8),1);
      FUN_01af25d0(param_1[0x1e2]);
      FUN_01af2990(param_1[0x1e2],
                   (local_a0 - (double)param_1[0x114]) +
                   ((double)param_1[0x75] - 1.0) * ((double)param_1[0x115] - (double)param_1[0x114])
                  );
      local_bc = 0;
      uVar11 = local_bc;
      while (local_bc = uVar11, (int)local_bc < *(int *)((longlong)param_1 + 0x691)) {
        dVar19 = 0.0;
        dVar20 = 0.0;
        lVar14 = param_1[0x9e];
        if (*(uint *)(lVar14 + 0x10) <= local_bc) {
          FUN_00594f90();
        }
        pcVar5 = *(char **)(*(longlong *)(lVar14 + 8) + (longlong)(int)local_bc * 8);
        cVar6 = FUN_0198a580(*(undefined8 *)(pcVar5 + 0x18));
        if (cVar6 == '\x04') {
          cVar6 = *pcVar5;
          if (cVar6 == '\x01') {
            iVar12 = iVar10 + -1;
            local_c0 = 1;
            if (0 < iVar12) {
              do {
                uVar9 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
                uVar8 = (undefined4)(uVar22 >> 0x20);
                dVar16 = (double)FUN_017d13a0(param_1[0x98],local_c0);
                dVar16 = dVar16 * 6.283185307179586 * local_a0;
                sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                                  (*(longlong **)(pcVar5 + 0x18));
                uVar21 = (undefined7)((ulonglong)in_stack_fffffffffffffef8 >> 8);
                if (sVar7 == 0x65) {
                  in_stack_fffffffffffffef8 = (double)CONCAT71(uVar21,1);
                  uVar22 = CONCAT44(uVar8,2);
                  in_stack_ffffffffffffff08 = CONCAT44(uVar9,1);
                  FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                               in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                }
                else {
                  in_stack_fffffffffffffef8 = (double)CONCAT71(uVar21,1);
                  uVar22 = CONCAT44(uVar8,1);
                  in_stack_ffffffffffffff08 = CONCAT44(uVar9,2);
                  FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                               in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                }
                dVar17 = (double)FUN_00c44590(local_88);
                dVar18 = (double)FUN_00c445d0(local_88);
                dVar18 = (double)FUN_00c43c40(dVar16 + dVar18,0x401921fb54442d18);
                dVar18 = (double)FUN_0040bdd0(dVar18 + ((double)(int)(char)*PTR_DAT_02002de8 *
                                                       3.141592653589793) / 2.0);
                dVar19 = dVar19 + dVar17 * dVar18;
                sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                                  (*(longlong **)(pcVar5 + 0x18));
                if ((sVar7 == 0x3d) ||
                   (sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                                      (*(longlong **)(pcVar5 + 0x18)), sVar7 == 0x65)) {
                  uVar9 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
                  uVar8 = (undefined4)(uVar22 >> 0x20);
                  sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                                    (*(longlong **)(pcVar5 + 0x18));
                  uVar21 = (undefined7)((ulonglong)in_stack_fffffffffffffef8 >> 8);
                  if (sVar7 == 0x65) {
                    in_stack_fffffffffffffef8 = (double)CONCAT71(uVar21,1);
                    uVar22 = CONCAT44(uVar8,3);
                    in_stack_ffffffffffffff08 = CONCAT44(uVar9,1);
                    FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                                 in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                  }
                  else {
                    in_stack_fffffffffffffef8 = (double)CONCAT71(uVar21,1);
                    uVar22 = CONCAT44(uVar8,3);
                    in_stack_ffffffffffffff08 = CONCAT44(uVar9,4);
                    FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                                 in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                  }
                  dVar17 = (double)FUN_00c44590(local_88);
                  dVar18 = (double)FUN_00c445d0(local_88);
                  dVar16 = (double)FUN_00c43c40(dVar16 + dVar18,0x401921fb54442d18);
                  dVar16 = (double)FUN_0040bdd0(dVar16 + ((double)(int)(char)*PTR_DAT_02002de8 *
                                                         3.141592653589793) / 2.0);
                  dVar20 = dVar20 + dVar17 * dVar16;
                }
                local_c0 = local_c0 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            param_2 = (ulonglong)local_bc;
            FUN_01cc46b0(param_1[0x16],param_2,dVar19);
            sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                              (*(longlong **)(pcVar5 + 0x18));
            if ((sVar7 == 0x3d) ||
               (sVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x18) + 0xf8))
                                  (*(longlong **)(pcVar5 + 0x18)), uVar11 = local_bc + 1,
               sVar7 == 0x65)) {
              param_2 = (ulonglong)(local_bc + 1);
              FUN_01cc46b0(param_1[0x16],param_2,dVar20);
              uVar11 = local_bc + 2;
            }
          }
          else if (cVar6 == '\x02') {
            iVar12 = iVar10 + -1;
            local_c0 = 1;
            if (0 < iVar12) {
              do {
                uVar9 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
                uVar8 = (undefined4)(uVar22 >> 0x20);
                dVar20 = (double)FUN_017d13a0(param_1[0x98],local_c0);
                dVar17 = dVar20 * 6.283185307179586 * local_a0;
                in_stack_fffffffffffffef8 =
                     (double)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
                uVar22 = CONCAT44(uVar8,1);
                in_stack_ffffffffffffff08 = CONCAT44(uVar9,2);
                FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                             in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                dVar20 = (double)FUN_00c44590(local_88);
                dVar16 = (double)FUN_00c445d0(local_88);
                dVar16 = (double)FUN_00c43c40(dVar17 + dVar16,0x401921fb54442d18);
                dVar16 = (double)FUN_0040bdd0(dVar16 + ((double)(int)(char)*PTR_DAT_02002de8 *
                                                       3.141592653589793) / 2.0);
                dVar19 = dVar19 + dVar20 * dVar16;
                local_c0 = local_c0 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            param_2 = (ulonglong)local_bc;
            FUN_01cc46b0(param_1[0x16],param_2,dVar19);
            uVar11 = local_bc + 1;
          }
          else if (cVar6 == '\x03') {
            iVar12 = iVar10 + -1;
            local_c0 = 1;
            if (0 < iVar12) {
              do {
                uVar9 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
                uVar8 = (undefined4)(uVar22 >> 0x20);
                dVar20 = (double)FUN_017d13a0(param_1[0x98],local_c0);
                dVar17 = dVar20 * 6.283185307179586 * local_a0;
                uVar22 = (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00;
                uVar15 = CONCAT44(uVar8,1);
                uVar23 = CONCAT44(uVar9,2);
                FUN_017d13d0(local_88,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),uVar22,uVar15,
                             uVar23,1,1);
                in_stack_fffffffffffffef8 = (double)CONCAT71((int7)(uVar22 >> 8),1);
                uVar22 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),3);
                in_stack_ffffffffffffff08 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),4);
                FUN_017d13d0(local_98,param_1,local_c0,*(undefined8 *)(pcVar5 + 0x18),
                             in_stack_fffffffffffffef8,uVar22,in_stack_ffffffffffffff08,1,1);
                dVar20 = (double)FUN_00c44590(local_88);
                dVar16 = (double)FUN_00c445d0(local_88);
                dVar16 = (double)FUN_00c43c40(dVar17 + dVar16,0x401921fb54442d18);
                dVar16 = (double)FUN_0040bdd0(dVar16 + ((double)(int)(char)*PTR_DAT_02002de8 *
                                                       3.141592653589793) / 2.0);
                dVar19 = dVar19 + dVar20 * dVar16;
                dVar20 = (double)FUN_00c44590(local_98);
                dVar16 = (double)FUN_00c445d0(local_98);
                dVar16 = (double)FUN_00c43c40(dVar17 + dVar16,0x401921fb54442d18);
                dVar16 = (double)FUN_0040bdd0(dVar16 + ((double)(int)(char)*PTR_DAT_02002de8 *
                                                       3.141592653589793) / 2.0);
                dVar19 = dVar19 * (dVar19 + dVar20 * dVar16);
                local_c0 = local_c0 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            param_2 = (ulonglong)local_bc;
            FUN_01cc46b0(param_1[0x16],param_2,dVar19);
            uVar11 = local_bc + 1;
          }
          else {
            param_2 = (ulonglong)local_bc;
            FUN_01cc46b0(param_1[0x16],param_2,0);
            uVar11 = local_bc + 1;
          }
        }
        else {
          param_2 = (ulonglong)local_bc;
          FUN_01cc46b0(param_1[0x16],param_2,0);
          uVar11 = local_bc + 1;
        }
      }
      local_a0 = local_a0 + (dVar1 - dVar2) / (double)uVar4;
      local_c4 = local_c4 + 1;
      cVar6 = FUN_01af2a10(param_1[0x1e2]);
      if (cVar6 != '\0') {
        uVar15 = FUN_01cc3a00(&PTR_FUN_01cb5bc0);
        *(undefined8 *)PTR_DAT_02005168 = uVar15;
        if (*(char *)((longlong)param_1 + 0x8b2) != '\0') {
          uVar22 = 0;
          in_stack_fffffffffffffef8 = local_a0;
          FUN_017d0c90(param_1,*(undefined8 *)PTR_DAT_02005168,0,param_1[0x114],local_a0,0);
        }
        FUN_013d87d0(*(undefined8 *)PTR_DAT_02005168);
        param_2 = 0;
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
      uVar15 = CONCAT71((int7)(param_2 >> 8),1);
      FUN_013d87d0(param_1[0x16],uVar15);
      param_2 = CONCAT71((int7)((ulonglong)uVar15 >> 8),5);
      in_stack_fffffffffffffef8 = 0.0;
      FUN_017cc020(param_1 + 0x16,param_2,0,*(undefined8 *)(param_1[0x14] + 0x360),0,
                   uVar22 & 0xffffffffffffff00);
      bVar3 = *(byte *)((longlong)param_1 + 0x5db);
      if (bVar3 < 8) {
        uVar11 = (int)CONCAT71((int7)(param_2 >> 8),1) << (bVar3 & 0x1f);
        param_2 = (ulonglong)uVar11;
        bVar13 = (uVar11 & 0xde) != 0;
      }
      else {
        bVar13 = false;
      }
      if ((bVar13) && (bVar3 == 2)) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_1 + 0xa09) != 0) {
            iVar10 = FUN_01b07e10(param_1,*(longlong *)((longlong)param_1 + 0xa09));
            param_2 = *(ulonglong *)(param_1[0x56] + -8 + (longlong)iVar10 * 8);
            param_1[0x271] = param_2;
            FUN_012b4370();
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
  if ((*(char *)((longlong)param_1 + 0x49c) != '\x01') &&
     (*(char *)((longlong)param_1 + 0x8b2) != '\0')) {
    FUN_017d0c90(param_1,param_1[0x16],0,param_1[0x114],param_1[0x115],0);
  }
  FUN_00414560(&local_b8,2);
  return;
}

