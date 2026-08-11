/* Ghidra address: 00dbaed0 */
/* Ghidra symbol: FUN_00dbaed0 */


void FUN_00dbaed0(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double unaff_XMM10_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int *in_stack_00000040;
  
  dVar14 = *(double *)(in_stack_00000040 + 0x44);
  if (0.0 < param_2) {
    dVar2 = (double)FUN_0040c760(*(undefined8 *)(in_stack_00000040 + 0x3e));
    dVar2 = dVar2 / (param_2 / (*(double *)(in_stack_00000040 + 0x3e) * 2.0) + 1.0);
    param_2 = dVar2 * dVar2;
    dVar3 = (double)FUN_00c42670(*(undefined8 *)(in_stack_00000040 + 0x3e),0x3ff8000000000000);
    dVar3 = -param_2 / (dVar3 * 2.0);
  }
  else {
    param_2 = *(double *)(in_stack_00000040 + 0x3e) - param_2;
    dVar2 = (double)FUN_0040c760(param_2);
    dVar3 = -0.5 / dVar2;
  }
  dVar5 = (*(double *)(in_stack_00000040 + 0x4e) * 0.5) / (dVar2 * 2.0);
  dVar7 = dVar5 + *(double *)(in_stack_00000040 + 0x4a);
  dVar13 = 1.0 / (dVar7 + 1.0);
  dVar8 = *(double *)(in_stack_00000040 + 0x4e) * dVar3 - *(double *)(in_stack_00000040 + 0x4a);
  dVar9 = ((double)*in_stack_00000040 * *(double *)(in_stack_00000040 + 0x48) -
          *(double *)(in_stack_00000040 + 0x4c) * param_1) +
          *(double *)(in_stack_00000040 + 0x4e) * dVar2 +
          *(double *)(in_stack_00000040 + 0x4a) * param_2;
  *(double *)(in_stack_00000040 + 0x5e) = dVar9;
  dVar1 = *(double *)(in_stack_00000040 + 0x4c);
  if (dVar9 < param_3) {
    dVar4 = (double)FUN_00b90620();
    dVar10 = *(double *)(in_stack_00000040 + 0x50) * (dVar4 - dVar9) + 1.0;
    dVar11 = 1.0 / dVar10;
    dVar12 = -*(double *)(in_stack_00000040 + 0x50) * dVar11 * dVar11;
    dVar15 = -dVar12 * -dVar1;
    dVar16 = -dVar12 * dVar8;
    if (0.0 < *(double *)(in_stack_00000040 + 0x52)) {
      dVar17 = (*(double *)(in_stack_00000040 + 0x54) * *(double *)(in_stack_00000040 + 0x52)) /
               (*(double *)(in_stack_00000040 + 0x46) * dVar11);
      unaff_XMM10_Qa = 1.0 / dVar17;
      dVar13 = (dVar4 - dVar9) * dVar13;
      dVar6 = (double)FUN_0040c760(dVar13 * dVar13 + dVar17 * dVar17);
      dVar13 = (dVar13 + dVar17) - dVar6;
    }
    else {
      dVar13 = (dVar4 - dVar9) * dVar13;
    }
    dVar13 = (double)FUN_00b90650(param_1,dVar13);
    if (dVar13 == 0.0) {
      *param_4 = 0.0;
      in_stack_00000040[0x1a] = 0;
      in_stack_00000040[0x1b] = 0;
      *(double *)(in_stack_00000040 + 0x1c) = dVar14 * (dVar4 - dVar9) * dVar11;
      in_stack_00000040[0x1e] = 0;
      in_stack_00000040[0x1f] = 0;
    }
    else {
      dVar6 = ((dVar4 - dVar9) - (dVar7 + 1.0) * 0.5 * dVar13) * dVar13;
      *(double *)(in_stack_00000040 + 0x1a) = dVar13;
      *(double *)(in_stack_00000040 + 0x1c) = (dVar4 - dVar9) - (dVar7 + -dVar1 + 1.0) * dVar13;
      *(double *)(in_stack_00000040 + 0x1e) =
           (-dVar8 - ((-dVar5 * dVar3) / dVar2) * 0.5 * dVar13) * dVar13;
      dVar2 = dVar14 * dVar6;
      dVar14 = dVar14 * dVar11;
      *param_4 = dVar14 * dVar6;
      *(double *)(in_stack_00000040 + 0x1a) =
           dVar14 * *(double *)(in_stack_00000040 + 0x1a) + dVar12 * dVar2;
      *(double *)(in_stack_00000040 + 0x1c) =
           dVar14 * *(double *)(in_stack_00000040 + 0x1c) + dVar15 * dVar2;
      *(double *)(in_stack_00000040 + 0x1e) =
           dVar14 * *(double *)(in_stack_00000040 + 0x1e) + dVar16 * dVar2;
      if (*(double *)(in_stack_00000040 + 0x52) != 0.0) {
        dVar14 = 1.0 / (dVar13 * unaff_XMM10_Qa + 1.0);
        dVar10 = dVar14 * dVar14 * dVar13 * unaff_XMM10_Qa * dVar10;
        *(double *)(in_stack_00000040 + 0x1a) =
             dVar14 * *(double *)(in_stack_00000040 + 0x1a) + -dVar12 * dVar10 * *param_4;
        *(double *)(in_stack_00000040 + 0x1c) =
             dVar14 * *(double *)(in_stack_00000040 + 0x1c) +
             (-dVar15 * dVar10 - dVar14 * dVar14 * unaff_XMM10_Qa) * *param_4;
        *(double *)(in_stack_00000040 + 0x1e) =
             dVar14 * *(double *)(in_stack_00000040 + 0x1e) + -dVar16 * dVar10 * *param_4;
        *param_4 = dVar14 * *param_4;
      }
    }
  }
  else {
    *param_4 = 0.0;
    in_stack_00000040[0x1a] = 0;
    in_stack_00000040[0x1b] = 0;
    in_stack_00000040[0x1c] = 0;
    in_stack_00000040[0x1d] = 0;
    in_stack_00000040[0x1e] = 0;
    in_stack_00000040[0x1f] = 0;
  }
  return;
}

