/* Ghidra address: 0118a450 */
/* Ghidra symbol: FUN_0118a450 */


undefined8 FUN_0118a450(longlong *param_1)

{
  short sVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80 [11];
  
  if (*(int *)(*param_1 + 0x1fa0) == 0) {
    uVar2 = 4;
  }
  else {
    dVar8 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
    dVar8 = (double)FUN_0040c760(dVar8 - 1.0);
    sVar1 = *(short *)(*param_1 + 0x1fa4);
    if (sVar1 == 0x48) {
      dVar12 = *(double *)(*param_1 + 0x20) / *(double *)(*param_1 + 0x30);
    }
    else if (sVar1 == 0x4c) {
      dVar12 = *(double *)(*param_1 + 0x30) / *(double *)(*param_1 + 0x20);
    }
    else if (sVar1 == 0x50) {
      dVar12 = (*(double *)(*param_1 + 0x38) - *(double *)(*param_1 + 0x30)) /
               (*(double *)(*param_1 + 0x28) - *(double *)(*param_1 + 0x20));
    }
    else {
      if (sVar1 != 0x53) {
        return 3;
      }
      dVar12 = (*(double *)(*param_1 + 0x28) - *(double *)(*param_1 + 0x20)) /
               (*(double *)(*param_1 + 0x38) - *(double *)(*param_1 + 0x30));
    }
    dVar9 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * -0.1);
    dVar10 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
    dVar12 = 1.0 / dVar12;
    dVar9 = (double)FUN_0040c760((dVar9 - 1.0) / (dVar10 - 1.0));
    dVar10 = (double)FUN_01189380(dVar12);
    dVar11 = (double)FUN_01189380(1.0 / dVar9);
    dVar8 = (double)FUN_01188f80(1.0 / dVar8,1.0 / dVar9);
    iVar4 = *(int *)(*param_1 + 0x1fa0);
    uVar2 = FUN_0040c760(1.0 - dVar12 * dVar12);
    FUN_01189130((dVar10 / (dVar11 * (double)iVar4)) * dVar8,uVar2,local_80,&local_88,&local_90);
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = *(int *)(*param_1 + 0x1fa0) % 2;
    if (iVar6 == 1) {
      *(undefined8 *)(*param_1 + 0x48) = 0x3ff0000000000000;
      *(undefined8 *)(*param_1 + 0x50) = 0;
      *(undefined8 *)(*param_1 + 0x58) = 0;
      *(double *)(*param_1 + 0x60) = (local_80[0] * local_88) / (1.0 - local_80[0] * local_80[0]);
      iVar4 = 3;
      *(undefined8 *)(*param_1 + 0xff8) = 0;
      *(undefined8 *)(*param_1 + 0x1000) = 0x3ff0000000000000;
      *(double *)(*param_1 + 0x1008) = (local_80[0] * local_88) / (1.0 - local_80[0] * local_80[0]);
      iVar5 = 3;
    }
    else {
      uVar2 = FUN_00526500(0x4024000000000000,*(double *)*param_1 * 0.05);
      *(undefined8 *)(*param_1 + 0x48) = uVar2;
    }
    iVar7 = *(int *)(*param_1 + 0x1fa0) / 2;
    uVar3 = (longlong)*(int *)(*param_1 + 0x1fa0) % 2 & 0xffffffff;
    local_ac = 0;
    if (-1 < iVar7 + -1) {
      do {
        FUN_01189130((dVar10 * (double)(local_ac * 2 + iVar6 + 1)) /
                     (double)*(int *)(*param_1 + 0x1fa0),uVar3,&local_98,&local_a0,&local_a8);
        dVar8 = (local_a0 * -1.0 * local_a8 * local_80[0] * local_88) /
                (1.0 - local_a8 * local_a8 * local_80[0] * local_80[0]);
        dVar9 = (local_98 * local_90) / (1.0 - local_a8 * local_a8 * local_80[0] * local_80[0]);
        dVar11 = 1.0 / (dVar12 * local_98);
        *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar4 * 8) = 0x3ff0000000000000;
        *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar4 + 1) * 8) = 0;
        *(double *)(*param_1 + 0x50 + (longlong)(iVar4 + 2) * 8) = dVar11 * dVar11;
        iVar4 = iVar4 + 3;
        uVar3 = 0x3ff0000000000000;
        *(undefined8 *)(*param_1 + 0xff8 + (longlong)iVar5 * 8) = 0x3ff0000000000000;
        *(double *)(*param_1 + 0xff8 + (longlong)(iVar5 + 1) * 8) = dVar8 * -2.0;
        *(double *)(*param_1 + 0xff8 + (longlong)(iVar5 + 2) * 8) = dVar8 * dVar8 + dVar9 * dVar9;
        iVar5 = iVar5 + 3;
        *(double *)(*param_1 + 0x48) =
             *(double *)(*param_1 + 0x48) * ((dVar8 * dVar8 + dVar9 * dVar9) / (dVar11 * dVar11));
        local_ac = local_ac + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

