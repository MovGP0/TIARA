/* Ghidra address: 01d5f3c0 */
/* Ghidra symbol: FUN_01d5f3c0 */


void FUN_01d5f3c0(double *param_1,double *param_2,double *param_3,longlong param_4,longlong param_5,
                 longlong param_6,double param_7,double param_8,double param_9,longlong param_10,
                 int param_11,double param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 local_104;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  bVar1 = true;
  bVar2 = true;
  bVar3 = true;
  dVar6 = param_9 - *(double *)(param_10 + (longlong)param_11 * 8);
  local_d8 = (double)FUN_0040c760((param_7 * 4.0 * dVar6) / 3.141592653589793);
  local_b0 = local_d8 / dVar6;
  *param_1 = local_b0;
  dVar7 = (double)FUN_0040c850(local_b0 * param_12);
  dVar18 = param_8 / (dVar6 * 4.0);
  if (dVar18 < 100.0) {
    FUN_0040c760(dVar18);
    local_c0 = (double)FUN_00c43f80();
  }
  else {
    local_c0 = 0.0;
  }
  local_b8 = (double)FUN_00c42a20(-dVar18);
  dVar18 = (double)FUN_0040c760(param_8);
  dVar8 = (double)FUN_0040c760(param_7);
  if (dVar6 == 0.0) {
    local_d0 = 0.0;
  }
  else {
    dVar9 = (double)FUN_0040c760((dVar6 * param_8) / 3.141592653589793);
    local_d0 = (dVar6 + param_8 * 0.5) * local_c0 - dVar9 * local_b8;
  }
  dVar9 = local_d0 / dVar6;
  *param_2 = dVar9;
  dVar10 = (double)FUN_0040c850(dVar9 * param_12);
  if (dVar6 == 0.0) {
    local_c8 = 0.0;
  }
  else {
    dVar11 = (double)FUN_0040c760(dVar6 / 3.141592653589793);
    local_c8 = dVar8 * (dVar11 * 2.0 * local_b8 - dVar18 * local_c0);
  }
  dVar6 = local_c8 / dVar6;
  *param_3 = dVar6;
  dVar11 = (double)FUN_0040c850(dVar6 * param_12);
  local_104 = param_11;
  if (0 < param_11) {
    do {
      dVar4 = local_c8;
      dVar17 = local_d0;
      lVar5 = (longlong)local_104;
      dVar12 = *(double *)(param_10 + lVar5 * 8) -
               *(double *)(param_10 + (longlong)(local_104 + -1) * 8);
      dVar13 = param_9 - *(double *)(param_10 + (longlong)(local_104 + -1) * 8);
      if (bVar1) {
        dVar14 = (double)FUN_0040c760((param_7 * 4.0 * dVar13) / 3.141592653589793);
        dVar15 = (dVar14 - local_d8) / dVar12;
        *(double *)(param_4 + lVar5 * 8) = dVar15 - local_b0;
        dVar16 = (double)FUN_0040c850(*(undefined8 *)(param_4 + (longlong)local_104 * 8));
        local_d8 = dVar14;
        local_b0 = dVar15;
        if (dVar16 < dVar7) {
          bVar1 = false;
        }
      }
      else {
        *(undefined8 *)(param_4 + lVar5 * 8) = 0;
      }
      if (bVar2 || bVar3) {
        dVar14 = param_8 / (dVar13 * 4.0);
        if (dVar14 < 100.0) {
          FUN_0040c760(dVar14);
          local_c0 = (double)FUN_00c43f80();
        }
        else {
          local_c0 = 0.0;
        }
        local_b8 = (double)FUN_00c42a20(-dVar14);
      }
      if (bVar2) {
        if (dVar13 == 0.0) {
          local_d0 = 0.0;
        }
        else {
          dVar14 = (double)FUN_0040c760((dVar13 * param_8) / 3.141592653589793);
          local_d0 = (dVar13 + param_8 * 0.5) * local_c0 - dVar14 * local_b8;
        }
        dVar17 = (local_d0 - dVar17) / dVar12;
        *(double *)(param_5 + lVar5 * 8) = dVar17 - dVar9;
        dVar14 = (double)FUN_0040c850(*(undefined8 *)(param_5 + lVar5 * 8));
        dVar9 = dVar17;
        if (dVar14 < dVar10) {
          bVar2 = false;
        }
      }
      else {
        *(undefined8 *)(param_5 + lVar5 * 8) = 0;
      }
      if (bVar3) {
        if (dVar13 == 0.0) {
          local_c8 = 0.0;
        }
        else {
          dVar17 = (double)FUN_0040c760(dVar13 / 3.141592653589793);
          local_c8 = dVar8 * (dVar17 * 2.0 * local_b8 - dVar18 * local_c0);
        }
        dVar12 = (local_c8 - dVar4) / dVar12;
        *(double *)(param_6 + lVar5 * 8) = dVar12 - dVar6;
        dVar17 = (double)FUN_0040c850(*(undefined8 *)(param_6 + lVar5 * 8));
        dVar6 = dVar12;
        if (dVar17 < dVar11) {
          bVar3 = false;
        }
      }
      else {
        *(undefined8 *)(param_6 + lVar5 * 8) = 0;
      }
      local_104 = local_104 + -1;
    } while (local_104 != 0);
  }
  return;
}

