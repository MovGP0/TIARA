/* Ghidra address: 01237010 */
/* Ghidra symbol: FUN_01237010 */


undefined8 FUN_01237010(longlong *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *(double *)(*param_1 + 0x20);
  dVar5 = *(double *)(*param_1 + 0x28);
  dVar7 = *(double *)(*param_1 + 0x30);
  dVar6 = *(double *)(*param_1 + 0x38);
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    dVar7 = dVar4 / dVar7;
  }
  else if (sVar1 == 0x4c) {
    dVar7 = dVar7 / dVar4;
  }
  else if (sVar1 == 0x50) {
    if (dVar7 <= (dVar4 * dVar5) / dVar6) {
      dVar7 = (dVar4 * dVar5) / dVar6;
      *(double *)(*param_1 + 0x30) = dVar7;
    }
    else {
      dVar6 = (dVar4 * dVar5) / dVar7;
      *(double *)(*param_1 + 0x38) = dVar6;
    }
    dVar7 = (dVar6 - dVar7) / (dVar5 - dVar4);
  }
  else {
    if (sVar1 != 0x53) {
      return 3;
    }
    if (dVar4 <= (dVar7 * dVar6) / dVar5) {
      dVar4 = (dVar7 * dVar6) / dVar5;
      *(double *)(*param_1 + 0x20) = dVar4;
    }
    else {
      dVar5 = (dVar7 * dVar6) / dVar4;
      *(double *)(*param_1 + 0x28) = dVar5;
    }
    dVar7 = (dVar5 - dVar4) / (dVar6 - dVar7);
  }
  FUN_00526500(0x4024000000000000,*(double *)(*param_1 + 0x10) * -0.1);
  FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
  if (*(short *)(*param_1 + 0x1fa6) == 0x42) {
    dVar4 = (double)FUN_00526490();
    dVar5 = (double)FUN_00526490(dVar7);
    dVar4 = dVar4 / (dVar5 * 2.0);
  }
  else {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Calc order: FP.approx");
    dVar4 = (double)FUN_004134c0(uVar3);
  }
  if (200.0 < dVar4) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Calc order: exceed max");
    FUN_004134c0(uVar3);
  }
  uVar2 = FUN_00526300();
  *(undefined4 *)(*param_1 + 0x1fa0) = uVar2;
  return 0;
}

