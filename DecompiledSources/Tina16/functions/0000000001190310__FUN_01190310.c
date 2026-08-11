/* Ghidra address: 01190310 */
/* Ghidra symbol: FUN_01190310 */


int * FUN_01190310(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  int *piVar4;
  
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if ((sVar1 == 0x48) || (sVar1 == 0x4c)) {
    dVar5 = (double)FUN_0040c850(*(double *)(*param_1 + 0x30) - *(double *)(*param_1 + 0x20));
    dVar5 = dVar5 / *(double *)(*param_1 + 0x40);
  }
  else if ((sVar1 == 0x50) || (dVar5 = 1.0, sVar1 == 0x53)) {
    dVar5 = (double)FUN_0040c850(*(double *)(*param_1 + 0x30) - *(double *)(*param_1 + 0x20));
    dVar5 = dVar5 / *(double *)(*param_1 + 0x40);
    dVar6 = (double)FUN_0040c850(*(double *)(*param_1 + 0x38) - *(double *)(*param_1 + 0x28));
    dVar6 = dVar6 / *(double *)(*param_1 + 0x40);
    if (dVar6 < dVar5) {
      dVar5 = dVar6;
    }
  }
  dVar7 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * 0.05);
  dVar6 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * 0.05);
  dVar6 = 1.0 - dVar6;
  if ((ushort)(*(short *)(*param_1 + 0x1fa6) - 0x30U) < 6) {
    if (dVar7 < dVar6) {
      dVar6 = dVar7;
    }
    dVar6 = (double)FUN_00526490(dVar6);
    dVar6 = dVar6 * -20.0;
    if ((dVar6 <= 50.0) && (21.0 < dVar6)) {
      FUN_00526500(dVar6 - 21.0,0x3fd999999999999a);
    }
    if (dVar6 <= 21.0) {
      uVar3 = FUN_00526350(5.794 / dVar5 + 1.0);
      *(undefined4 *)(*param_1 + 0x1fa0) = uVar3;
    }
    else {
      uVar3 = FUN_00526350((dVar6 - 7.95) / (dVar5 * 2.285) + 1.0);
      *(undefined4 *)(*param_1 + 0x1fa0) = uVar3;
    }
    piVar4 = (int *)((longlong)*(int *)(*param_1 + 0x1fa0) / 2 & 0xffffffff);
    if (*(int *)(*param_1 + 0x1fa0) % 2 == 0) {
      piVar4 = (int *)(*param_1 + 0x1fa0);
      *piVar4 = *piVar4 + 1;
    }
  }
  else {
    uVar2 = *(short *)(*param_1 + 0x1fa6) - 0x36;
    piVar4 = (int *)(ulonglong)uVar2;
    if (uVar2 == 0) {
      dVar7 = (double)FUN_00526490(dVar7);
      dVar6 = (double)FUN_00526490(dVar6);
      dVar5 = dVar5 / 6.2831853071796;
      uVar3 = FUN_00526350((((((dVar6 * 0.005309 * dVar6 + dVar6 * 0.07114) - 0.4761) * dVar7 -
                             (dVar6 * 0.00266 * dVar6 + dVar6 * 0.5941)) - 0.4278) -
                           ((dVar6 - dVar7) * 0.51244 + 11.012) * dVar5 * dVar5) / dVar5 + 1.5);
      *(undefined4 *)(*param_1 + 0x1fa0) = uVar3;
      piVar4 = (int *)((longlong)*(int *)(*param_1 + 0x1fa0) / 2 & 0xffffffff);
      if (*(int *)(*param_1 + 0x1fa0) % 2 == 0) {
        piVar4 = (int *)(*param_1 + 0x1fa0);
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  return piVar4;
}

