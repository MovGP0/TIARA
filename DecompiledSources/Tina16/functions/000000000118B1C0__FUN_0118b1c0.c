/* Ghidra address: 0118b1c0 */
/* Ghidra symbol: FUN_0118b1c0 */


undefined8 FUN_0118b1c0(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*(int *)(*param_1 + 0x1fa0) == 0) {
    uVar1 = 4;
  }
  else {
    dVar7 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * -0.1);
    dVar7 = (double)FUN_0040c760(dVar7 - 1.0);
    dVar7 = (double)FUN_011890e0(1.0 / (1.0 / dVar7));
    dVar7 = dVar7 / (double)*(int *)(*param_1 + 0x1fa0);
    *(undefined8 *)(*param_1 + 0x48) = 0x3ff0000000000000;
    iVar4 = 0;
    iVar5 = 0;
    if (*(int *)(*param_1 + 0x1fa0) % 2 == 1) {
      *(undefined8 *)(*param_1 + 0x50) = 0;
      *(undefined8 *)(*param_1 + 0x58) = 0;
      dVar8 = (double)FUN_00526970(dVar7);
      *(double *)(*param_1 + 0x60) = 1.0 / dVar8;
      iVar4 = 3;
      *(undefined8 *)(*param_1 + 0xff8) = 0;
      *(undefined8 *)(*param_1 + 0x1000) = 0x3ff0000000000000;
      dVar8 = (double)FUN_00526970(dVar7);
      *(double *)(*param_1 + 0x1008) = 1.0 / dVar8;
      iVar5 = 3;
    }
    iVar3 = 0;
    iVar6 = *(int *)(*param_1 + 0x1fa0) / 2;
    uVar2 = (longlong)*(int *)(*param_1 + 0x1fa0) % 2 & 0xffffffff;
    if (-1 < iVar6 + -1) {
      do {
        dVar11 = ((double)(iVar3 * 2 + 1) * 3.1415926535898) /
                 (double)(*(int *)(*param_1 + 0x1fa0) * 2);
        dVar8 = (double)FUN_00526970(dVar7,uVar2);
        dVar9 = (double)FUN_0040bdd0(dVar11);
        dVar9 = dVar8 * -1.0 * dVar9;
        dVar8 = (double)FUN_00526810(dVar7);
        dVar10 = (double)FUN_0040bcd0(dVar11);
        dVar8 = dVar8 * dVar10;
        dVar10 = dVar8 * dVar8 + dVar9 * dVar9;
        dVar12 = (dVar8 * -1.0) / dVar10;
        dVar9 = dVar9 / dVar10;
        dVar8 = (double)FUN_0040bcd0(dVar11);
        dVar8 = 1.0 / dVar8;
        dVar10 = dVar12 * dVar12 + dVar9 * dVar9;
        *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar4 * 8) = 0x3ff0000000000000;
        *(undefined8 *)(*param_1 + 0x50 + (longlong)(iVar4 + 1) * 8) = 0;
        *(double *)(*param_1 + 0x50 + (longlong)(iVar4 + 2) * 8) = dVar8 * dVar8;
        iVar4 = iVar4 + 3;
        uVar2 = 0x3ff0000000000000;
        *(undefined8 *)(*param_1 + 0xff8 + (longlong)iVar5 * 8) = 0x3ff0000000000000;
        *(double *)(*param_1 + 0xff8 + (longlong)(iVar5 + 1) * 8) = dVar9 * -2.0;
        *(double *)(*param_1 + 0xff8 + (longlong)(iVar5 + 2) * 8) = dVar10;
        iVar5 = iVar5 + 3;
        *(double *)(*param_1 + 0x48) = *(double *)(*param_1 + 0x48) * (dVar10 / (dVar8 * dVar8));
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

