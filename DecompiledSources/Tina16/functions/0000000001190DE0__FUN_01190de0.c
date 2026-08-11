/* Ghidra address: 01190de0 */
/* Ghidra symbol: FUN_01190de0 */


undefined8 FUN_01190de0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  double *pdVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  int local_220;
  int local_21c;
  double local_210 [10];
  double local_1c0 [10];
  undefined8 local_170 [10];
  double local_120 [20];
  int local_80 [20];
  
  dVar16 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * 0.05);
  dVar17 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * 0.05);
  dVar16 = (1.0 - dVar17) / dVar16;
  sVar2 = *(short *)(*param_1 + 0x1fa4);
  if (sVar2 == 0x48) {
    *(undefined4 *)(*param_2 + 8) = 2;
    local_120[0] = 0.0;
    local_120[1] = *(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[2] = *(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    if (0.5 <= local_120[2]) {
      local_120[2] = 0.4999;
    }
    local_120[3] = 0.5;
    local_170[0] = 0;
    local_170[1] = 0x3ff0000000000000;
    local_1c0[0] = dVar16;
    local_1c0[1] = 1.0;
  }
  else if (sVar2 == 0x4c) {
    *(undefined4 *)(*param_2 + 8) = 2;
    local_120[0] = 0.0;
    local_120[1] = *(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[2] = *(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    if (0.5 <= local_120[2]) {
      local_120[2] = 0.4999;
    }
    local_120[3] = 0.5;
    local_170[0] = 0x3ff0000000000000;
    local_170[1] = 0;
    local_1c0[0] = 1.0;
    local_1c0[1] = dVar16;
  }
  else if (sVar2 == 0x50) {
    *(undefined4 *)(*param_2 + 8) = 3;
    local_120[0] = 0.0;
    local_120[1] = *(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[2] = *(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[3] = *(double *)(*param_1 + 0x28) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[4] = *(double *)(*param_1 + 0x38) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    if (0.5 <= local_120[4]) {
      local_120[4] = 0.4999;
    }
    local_120[5] = 0.5;
    local_170[0] = 0;
    local_170[1] = 0x3ff0000000000000;
    local_170[2] = 0;
    local_1c0[0] = dVar16;
    local_1c0[1] = 1.0;
    local_1c0[2] = dVar16;
  }
  else {
    if (sVar2 != 0x53) {
      return 3;
    }
    *(undefined4 *)(*param_2 + 8) = 3;
    local_120[0] = 0.0;
    local_120[1] = *(double *)(*param_1 + 0x20) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[2] = *(double *)(*param_1 + 0x30) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[3] = *(double *)(*param_1 + 0x38) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    local_120[4] = *(double *)(*param_1 + 0x28) / (*(double *)(*param_1 + 0x40) * 6.2831853071796);
    if (0.5 <= local_120[4]) {
      local_120[4] = 0.4999;
    }
    local_120[5] = 0.5;
    local_170[0] = 0x3ff0000000000000;
    local_170[1] = 0;
    local_170[2] = 0x3ff0000000000000;
    local_1c0[0] = 1.0;
    local_1c0[1] = dVar16;
    local_1c0[2] = 1.0;
  }
  local_120[0] = 0.0;
  iVar3 = *(int *)(*param_1 + 0x1fa0);
  *(undefined4 *)(*param_2 + 0xc) = 1;
  iVar3 = (iVar3 + 1) / 2 + 1;
  *(int *)(*param_2 + 4) = iVar3;
  *(int *)*param_2 = iVar3 * *(int *)(*param_2 + 0x10);
  dVar17 = 0.0;
  iVar3 = *(int *)(*param_2 + 8);
  local_21c = 0;
  if (-1 < iVar3 + -1) {
    pdVar9 = local_210;
    do {
      *pdVar9 = local_120[local_21c * 2 + 1] - local_120[local_21c * 2];
      dVar17 = dVar17 + *pdVar9;
      local_21c = local_21c + 1;
      pdVar9 = pdVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*param_2 + 8);
  iVar5 = *(int *)*param_2;
  iVar11 = *(int *)(*param_2 + 4);
  local_80[iVar3 + -1] = iVar11;
  *(undefined4 *)(*param_2 + 0x14 + (longlong)(iVar3 + -1) * 4) = *(undefined4 *)*param_2;
  local_21c = 0;
  if (-1 < *(int *)(*param_2 + 8) + -2) {
    iVar13 = *(int *)(*param_2 + 8) + -1;
    pdVar9 = local_210;
    piVar12 = local_80;
    do {
      iVar4 = FUN_0040c770(((double)(iVar5 - iVar3) / dVar17) * *pdVar9 + 1.5);
      *(int *)(*param_2 + 0x14 + (longlong)local_21c * 4) = iVar4;
      piVar1 = (int *)(*param_2 + 0x14 + (longlong)(*(int *)(*param_2 + 8) + -1) * 4);
      *piVar1 = *piVar1 - iVar4;
      iVar4 = FUN_0040c770(((double)(iVar11 - iVar3) / dVar17) * *pdVar9 + 1.5);
      *piVar12 = iVar4;
      local_80[*(int *)(*param_2 + 8) + -1] = local_80[*(int *)(*param_2 + 8) + -1] - iVar4;
      local_21c = local_21c + 1;
      piVar12 = piVar12 + 1;
      pdVar9 = pdVar9 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar5 = 0;
  *(undefined8 *)(*param_2 + 0x4b48) = 0;
  iVar3 = *(int *)(*param_2 + 8);
  local_21c = 0;
  if (-1 < iVar3 + -1) {
    pdVar9 = local_210;
    puVar10 = local_170;
    pdVar14 = local_1c0;
    do {
      iVar11 = *(int *)(*param_2 + 0x14 + (longlong)local_21c * 4);
      dVar17 = *pdVar9;
      lVar8 = (longlong)iVar5;
      *(double *)(*param_2 + 0x4b48 + lVar8 * 8) = local_120[local_21c * 2];
      *(undefined8 *)(*param_2 + 0x14550 + lVar8 * 8) = *puVar10;
      *(double *)(*param_2 + 0x23f58 + lVar8 * 8) = *pdVar14;
      iVar5 = iVar5 + 1;
      iVar13 = *(int *)(*param_2 + 0x14 + (longlong)local_21c * 4) + -1;
      if (0 < iVar13) {
        do {
          lVar8 = (longlong)iVar5;
          *(double *)(*param_2 + 0x4b48 + lVar8 * 8) =
               *(double *)(*param_2 + 0x4b48 + (longlong)(iVar5 + -1) * 8) +
               dVar17 / (double)(iVar11 + -1);
          *(undefined8 *)(*param_2 + 0x14550 + lVar8 * 8) = *puVar10;
          *(double *)(*param_2 + 0x23f58 + lVar8 * 8) = *pdVar14;
          iVar5 = iVar5 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      local_21c = local_21c + 1;
      pdVar14 = pdVar14 + 1;
      puVar10 = puVar10 + 1;
      pdVar9 = pdVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*param_2 + 0xc);
  if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 4)) {
    iVar5 = 0;
    iVar11 = 0;
    iVar3 = *(int *)(*param_2 + 8);
    local_21c = 0;
    if (-1 < iVar3 + -1) {
      piVar12 = local_80;
      do {
        iVar13 = *(int *)(*param_2 + 0x14 + (longlong)local_21c * 4);
        iVar4 = *piVar12;
        *(int *)(*param_2 + 0x4c8 + (longlong)iVar5 * 4) = iVar11;
        iVar5 = iVar5 + 1;
        iVar15 = *piVar12 + -1;
        local_220 = 1;
        if (0 < iVar15) {
          do {
            uVar6 = FUN_0040c770((double)local_220 * ((double)iVar13 / (double)iVar4) +
                                 (double)iVar11 + 0.5);
            *(undefined4 *)(*param_2 + 0x4c8 + (longlong)iVar5 * 4) = uVar6;
            iVar5 = iVar5 + 1;
            local_220 = local_220 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        iVar11 = iVar11 + *(int *)(*param_2 + 0x14 + (longlong)local_21c * 4);
        local_21c = local_21c + 1;
        piVar12 = piVar12 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
  }
  return uVar7;
}

