/* Ghidra address: 0118aa70 */
/* Ghidra symbol: FUN_0118aa70 */


undefined8 FUN_0118aa70(longlong *param_1)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = *(double *)(*param_1 + 0x20);
  dVar7 = *(double *)(*param_1 + 0x28);
  dVar8 = *(double *)(*param_1 + 0x30);
  dVar6 = *(double *)(*param_1 + 0x38);
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    dVar8 = dVar5 / dVar8;
  }
  else if (sVar1 == 0x4c) {
    dVar8 = dVar8 / dVar5;
  }
  else if (sVar1 == 0x50) {
    if (dVar8 <= (dVar5 * dVar7) / dVar6) {
      dVar8 = (dVar5 * dVar7) / dVar6;
      *(double *)(*param_1 + 0x30) = dVar8;
    }
    else {
      dVar6 = (dVar5 * dVar7) / dVar8;
      *(double *)(*param_1 + 0x38) = dVar6;
    }
    dVar8 = (dVar6 - dVar8) / (dVar7 - dVar5);
  }
  else {
    if (sVar1 != 0x53) {
      return 3;
    }
    if (dVar5 <= (dVar8 * dVar6) / dVar7) {
      dVar5 = (dVar8 * dVar6) / dVar7;
      *(double *)(*param_1 + 0x20) = dVar5;
    }
    else {
      dVar7 = (dVar8 * dVar6) / dVar5;
      *(double *)(*param_1 + 0x28) = dVar7;
    }
    dVar8 = (dVar7 - dVar5) / (dVar6 - dVar8);
  }
  dVar5 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * -0.1);
  dVar7 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
  dVar5 = (dVar5 - 1.0) / (dVar7 - 1.0);
  sVar1 = *(short *)(*param_1 + 0x1fa6);
  if (sVar1 == 0x42) {
    dVar7 = (double)FUN_00526490(dVar5);
    dVar5 = (double)FUN_00526490(dVar8);
    dVar7 = dVar7 / (dVar5 * 2.0);
  }
  else if (sVar1 == 0x43) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0) + 0x260))
                      (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0));
    if (cVar2 == '\x01') {
      FUN_0040c760(dVar5);
      dVar7 = (double)FUN_01188f30();
      dVar5 = (double)FUN_01188f30(dVar8);
      dVar7 = dVar7 / dVar5;
    }
    else {
      dVar5 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
      dVar7 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * 0.1);
      dVar7 = ((1.0 - dVar7) / dVar7) / (dVar5 - 1.0);
      dVar5 = (double)FUN_0040c760(dVar7);
      dVar7 = (double)FUN_0040c760(dVar7 - 1.0);
      dVar7 = (double)FUN_0040c2f0(dVar5 + dVar7);
      dVar5 = (double)FUN_0040c760(dVar8 * dVar8 - 1.0);
      dVar5 = (double)FUN_0040c2f0(dVar8 + dVar5);
      dVar7 = dVar7 / dVar5;
    }
  }
  else if (sVar1 == 0x45) {
    dVar8 = 1.0 / dVar8;
    if (0.9999 < dVar8) {
      return 4;
    }
    dVar5 = (double)FUN_0040c760(dVar5);
    dVar5 = 1.0 / dVar5;
    if (dVar5 < 2e-08) {
      return 4;
    }
    dVar7 = (double)FUN_01189380(dVar8);
    FUN_0040c760(1.0 - dVar8 * dVar8);
    dVar8 = (double)FUN_01189380();
    dVar6 = (double)FUN_01189380(dVar5);
    FUN_0040c760(1.0 - dVar5 * dVar5);
    dVar5 = (double)FUN_01189380();
    dVar7 = (dVar7 * dVar5) / (dVar8 * dVar6);
  }
  else {
    if (sVar1 != 0x49) {
      return 3;
    }
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0) + 0x260))
                      (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0));
    if (cVar2 == '\x01') {
      FUN_0040c760(dVar5);
      dVar7 = (double)FUN_01188f30();
      dVar5 = (double)FUN_01188f30(dVar8);
      dVar7 = dVar7 / dVar5;
    }
    else {
      dVar5 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * 0.1);
      dVar7 = (double)FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * 0.1);
      dVar6 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * 0.1);
      dVar7 = (dVar6 / (dVar5 / (1.0 - dVar7))) / (1.0 - dVar6);
      dVar5 = (double)FUN_0040c760(dVar7);
      dVar7 = (double)FUN_0040c760(dVar7 - 1.0);
      dVar7 = (double)FUN_0040c2f0(dVar5 + dVar7);
      dVar5 = (double)FUN_0040c760(dVar8 * dVar8 - 1.0);
      dVar5 = (double)FUN_0040c2f0(dVar8 + dVar5);
      dVar7 = dVar7 / dVar5;
    }
  }
  if (dVar7 <= 200.0) {
    uVar3 = FUN_00526300();
    *(undefined4 *)(*param_1 + 0x1fa0) = uVar3;
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}

