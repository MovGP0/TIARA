/* Ghidra address: 017d3250 */
/* Ghidra symbol: FUN_017d3250 */


void FUN_017d3250(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  int local_d8;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8 [128];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  cVar4 = FUN_017d2830(param_1);
  if (cVar4 != '\0') {
    FUN_017d2d10(*(undefined8 *)(param_1 + 0xa0),6);
    uVar8 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,5,1,0);
    *(undefined8 *)PTR_DAT_020027c0 = uVar8;
    iVar6 = FUN_017d1380(*(undefined8 *)(param_1 + 0x4c0));
    iVar7 = FUN_0040c840((double)*(float *)(*(longlong *)PTR_DAT_02004e40 + 0x1924) * 100.0);
    iVar11 = *(int *)(param_1 + 0x2d8);
    local_d8 = 1;
    if (0 < iVar11) {
      do {
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_d8 * 8) +
                  0x128);
        sVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if ((sVar5 == 0x3d) || (sVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar5 == 0x65)) {
          (**(code **)(*plVar2 + 0x288))(plVar2,&local_b8);
          puVar19 = &local_aa;
          puVar20 = &local_ab;
          pdVar9 = (double *)FUN_01cfde70(plVar2,1,0,&local_a9,puVar19,puVar20);
          dVar1 = *pdVar9;
          dVar16 = 0.0;
          lVar3 = *(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8);
          uVar21 = (ulonglong)puVar20 & 0xffffffffffffff00;
          uVar23 = 0;
          FUN_01cc31d0(lVar3,2,0,0,(ulonglong)puVar19 & 0xffffffffffffff00,uVar21,0,1);
          uVar8 = FUN_01d347d0(lVar3,*(int *)(lVar3 + 0x10) + -2);
          FUN_00416ba0(&local_c0,local_b8,L"_Ch1");
          FUN_01cc09f0(uVar8,local_c0);
          uVar8 = FUN_01d347d0(lVar3,*(int *)(lVar3 + 0x10) + -1);
          FUN_00416ba0(&local_c8,local_b8);
          FUN_01cc09f0(uVar8,local_c8);
          if (-1 < iVar7) {
            iVar10 = iVar7 + 1;
            do {
              FUN_01cc4620(*(undefined8 *)PTR_DAT_020027c0,dVar16);
              dVar17 = 0.0;
              dVar18 = 0.0;
              iVar12 = iVar6 + -1;
              local_cc = 1;
              if (0 < iVar12) {
                do {
                  uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
                  uVar22 = (undefined4)(uVar21 >> 0x20);
                  dVar13 = (double)FUN_017d13a0(*(undefined8 *)(param_1 + 0x4c0),local_cc);
                  dVar13 = dVar13 * 6.283185307179586 * dVar16;
                  sVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2);
                  if (sVar5 == 0x65) {
                    uVar8 = CONCAT44(uVar22,2);
                    uVar23 = CONCAT44(uVar24,1);
                    FUN_017d13d0(local_a8,param_1,local_cc,plVar2,1,uVar8,uVar23,1,1);
                    uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
                    uVar22 = (undefined4)((ulonglong)uVar8 >> 0x20);
                  }
                  else {
                    uVar8 = CONCAT44(uVar22,1);
                    uVar23 = CONCAT44(uVar24,2);
                    FUN_017d13d0(local_a8,param_1,local_cc,plVar2,1,uVar8,uVar23,1,1);
                    uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
                    uVar22 = (undefined4)((ulonglong)uVar8 >> 0x20);
                  }
                  dVar14 = (double)FUN_00c44590(local_a8);
                  dVar15 = (double)FUN_00c445d0(local_a8);
                  dVar15 = (double)FUN_00c43c40(dVar13 + dVar15,0x401921fb54442d18);
                  dVar15 = (double)FUN_0040bdd0(dVar15 + ((double)(int)*(char *)(param_1 + 0x12f4) *
                                                         3.141592653589793) / 2.0);
                  dVar17 = dVar17 + dVar14 * dVar15;
                  sVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2);
                  if (sVar5 == 0x65) {
                    uVar21 = CONCAT44(uVar22,3);
                    uVar23 = CONCAT44(uVar24,1);
                    FUN_017d13d0(local_a8,param_1,local_cc,plVar2,1,uVar21,uVar23,1,1);
                  }
                  else {
                    uVar21 = CONCAT44(uVar22,3);
                    uVar23 = CONCAT44(uVar24,4);
                    FUN_017d13d0(local_a8,param_1,local_cc,plVar2,1,uVar21,uVar23,1,1);
                  }
                  dVar14 = (double)FUN_00c44590(local_a8);
                  dVar15 = (double)FUN_00c445d0(local_a8);
                  dVar13 = (double)FUN_00c43c40(dVar13 + dVar15,0x401921fb54442d18);
                  dVar13 = (double)FUN_0040bdd0(dVar13 + ((double)(int)*(char *)(param_1 + 0x12f4) *
                                                         3.141592653589793) / 2.0);
                  dVar18 = dVar18 + dVar14 * dVar13;
                  local_cc = local_cc + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              FUN_01cc46b0(*(undefined8 *)PTR_DAT_020027c0,0,dVar17);
              FUN_01cc46b0(*(undefined8 *)PTR_DAT_020027c0,1,dVar18);
              dVar16 = dVar16 + dVar1 / (double)iVar7;
              if (dVar1 < dVar16) {
                dVar16 = dVar1;
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        local_d8 = local_d8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_017d2950(param_1,6);
    FUN_017d2ab0(param_1,6);
    cVar4 = FUN_01cc6060(*(undefined8 *)PTR_DAT_020027c0);
    if (cVar4 != '\0') {
      *(undefined8 *)PTR_DAT_020027c0 = 0;
    }
  }
  FUN_00414560(&local_c8,3);
  return;
}

