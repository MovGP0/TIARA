/* Ghidra address: 017d3880 */
/* Ghidra symbol: FUN_017d3880 */


void FUN_017d3880(longlong param_1)

{
  double dVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
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
  double dVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined4 uVar26;
  undefined8 uVar25;
  int local_e8;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8 [144];
  
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if ((*(longlong *)PTR_DAT_020027c0 != 0) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
    FUN_01d34d40(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8));
    iVar4 = FUN_017d1380();
    iVar5 = FUN_0040c840((double)*(float *)(*(longlong *)PTR_DAT_02004e40 + 0x1924) * 100.0);
    lVar6 = FUN_019a45d0();
    iVar11 = *(int *)(lVar6 + 0x10);
    local_e8 = 0;
    if (-1 < iVar11 + -1) {
      do {
        uVar7 = FUN_019a45d0();
        uVar7 = FUN_00b94e60(uVar7,local_e8);
        cVar2 = FUN_0198a580(uVar7);
        if (cVar2 == '\x04') {
          uVar7 = FUN_019a45d0();
          plVar8 = (longlong *)FUN_00b94e60(uVar7,local_e8);
          sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if ((sVar3 == 0x3d) || (sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8), sVar3 == 0x65)) {
            (**(code **)(*plVar8 + 0x288))(plVar8,&local_c8);
            puVar20 = &local_ba;
            puVar23 = &local_bb;
            pdVar9 = (double *)FUN_01cfde70(plVar8,1,0,&local_b9,puVar20,puVar23);
            dVar1 = *pdVar9;
            dVar16 = 0.0;
            lVar6 = *(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8);
            uVar21 = (ulonglong)puVar20 & 0xffffffffffffff00;
            uVar24 = (ulonglong)puVar23 & 0xffffffffffffff00;
            FUN_01cc31d0(lVar6,2,0,0,uVar21,uVar24,0,1);
            uVar7 = FUN_01d347d0(lVar6,*(int *)(lVar6 + 0x10) + -2);
            FUN_00416ba0(&local_d0,local_c8,L"_Ch1");
            FUN_01cc09f0(uVar7,local_d0);
            uVar7 = FUN_01d347d0(lVar6,*(int *)(lVar6 + 0x10) + -1);
            FUN_00416ba0(&local_d8,local_c8);
            FUN_01cc09f0(uVar7,local_d8);
            dVar19 = ((double)(int)*(char *)(param_1 + 0x12f4) * 3.141592653589793) / 2.0;
            if (-1 < iVar5) {
              iVar10 = iVar5 + 1;
              do {
                FUN_01cc4620(*(undefined8 *)PTR_DAT_020027c0,dVar16);
                dVar17 = 0.0;
                dVar18 = 0.0;
                iVar12 = iVar4 + -1;
                local_dc = 1;
                if (0 < iVar12) {
                  do {
                    uVar26 = (undefined4)(uVar24 >> 0x20);
                    uVar22 = (undefined4)(uVar21 >> 0x20);
                    dVar13 = (double)FUN_017d13a0(*(undefined8 *)(param_1 + 0x4c0),local_dc);
                    dVar13 = dVar13 * 6.283185307179586 * dVar16;
                    sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
                    if (sVar3 == 0x65) {
                      uVar7 = CONCAT44(uVar22,2);
                      uVar25 = CONCAT44(uVar26,1);
                      FUN_017d15a0(local_b8,*(undefined8 *)(param_1 + 0x4c0),local_dc,plVar8,uVar7,
                                   uVar25);
                      uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
                      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    }
                    else {
                      uVar7 = CONCAT44(uVar22,1);
                      uVar25 = CONCAT44(uVar26,2);
                      FUN_017d15a0(local_b8,*(undefined8 *)(param_1 + 0x4c0),local_dc,plVar8,uVar7,
                                   uVar25);
                      uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
                      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    }
                    dVar14 = (double)FUN_00c44590(local_b8);
                    dVar15 = (double)FUN_00c445d0(local_b8);
                    dVar15 = (double)FUN_00c43c40(dVar13 + dVar15,0x401921fb54442d18);
                    dVar15 = (double)FUN_0040bdd0(dVar15 + dVar19);
                    dVar17 = dVar17 + dVar14 * dVar15;
                    sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
                    if (sVar3 == 0x65) {
                      uVar21 = CONCAT44(uVar22,3);
                      uVar24 = CONCAT44(uVar26,1);
                      FUN_017d15a0(local_b8,*(undefined8 *)(param_1 + 0x4c0),local_dc,plVar8,uVar21,
                                   uVar24);
                    }
                    else {
                      uVar21 = CONCAT44(uVar22,3);
                      uVar24 = CONCAT44(uVar26,4);
                      FUN_017d15a0(local_b8,*(undefined8 *)(param_1 + 0x4c0),local_dc,plVar8,uVar21,
                                   uVar24);
                    }
                    dVar14 = (double)FUN_00c44590(local_b8);
                    dVar15 = (double)FUN_00c445d0(local_b8);
                    dVar13 = (double)FUN_00c43c40(dVar13 + dVar15,0x401921fb54442d18);
                    dVar13 = (double)FUN_0040bdd0(dVar13 + dVar19);
                    dVar18 = dVar18 + dVar14 * dVar13;
                    local_dc = local_dc + 1;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                FUN_01cc46b0(*(undefined8 *)PTR_DAT_020027c0,0,dVar17);
                FUN_01cc46b0(*(undefined8 *)PTR_DAT_020027c0,1,dVar18);
                dVar16 = dVar16 + dVar1 / (double)iVar5;
                if (dVar1 < dVar16) {
                  dVar16 = dVar1;
                }
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
        }
        local_e8 = local_e8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  FUN_00414560(&local_d8,3);
  return;
}

