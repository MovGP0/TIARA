/* Ghidra address: 01239900 */
/* Ghidra symbol: FUN_01239900 */


undefined4 FUN_01239900(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 local_16bc;
  double local_16b8;
  double local_16b0;
  double local_16a8;
  double local_16a0;
  undefined8 local_1698;
  undefined8 local_1690;
  undefined8 local_1688;
  undefined8 local_1680;
  undefined8 local_1678;
  undefined8 local_1670;
  undefined1 local_6f8;
  
  local_6f8 = 0;
  local_1670 = 0;
  local_1678 = 0;
  local_1680 = 0;
  local_1688 = 0;
  local_1690 = 0;
  local_1698 = 0;
  if ((*(short *)(*param_1 + 0x1fa4) == 0x50) || (*(short *)(*param_1 + 0x1fa4) == 0x53)) {
    iVar2 = *(int *)(*param_1 + 0x1fa0) / 2;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x1fa0);
  }
  dVar6 = (double)FUN_00526500(0x4024000000000000,*(double *)*param_1 * -0.1);
  dVar7 = (double)FUN_0040c760(dVar6 - 1.0);
  dVar8 = (double)FUN_0040c760((1.0 / dVar7) / dVar7 + 1.0);
  dVar7 = (double)FUN_0040c2f0(1.0 / dVar7 + dVar8);
  dVar7 = (1.0 / (double)iVar2) * dVar7;
  dVar8 = (double)FUN_0040af80(dVar7);
  dVar9 = (double)FUN_0040af80(-dVar7);
  dVar8 = dVar8 * 0.5 - dVar9 * 0.5;
  FUN_00526970(dVar7);
  iVar3 = 0;
  iVar5 = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      iVar4 = iVar3 + 1;
      sVar1 = *(short *)(*param_1 + 0x1fa6);
      if (sVar1 == 0x42) {
        dVar7 = (double)FUN_0040bdd0(((double)(iVar4 * 2 + -1) * 3.1415926535898) /
                                     (double)(iVar2 * 2));
        local_16a8 = dVar7 * 2.0;
      }
      else {
        if (sVar1 != 0x43) {
          if (sVar1 == 0x49) {
            local_16bc = 3;
          }
          else {
            local_16bc = 3;
          }
          goto LAB_01239dbe;
        }
        dVar7 = (double)FUN_0040bdd0((((double)(iVar4 * 2 + -1) * 3.1415926535898) / 2.0) /
                                     (double)iVar2);
        dVar9 = (double)FUN_0040bdd0(((double)iVar4 * 3.1415926535898) / (double)iVar2);
        if (iVar4 == 1) {
          local_16a8 = (dVar7 * 2.0) / dVar8;
        }
        if (1 < iVar4) {
          local_16a8 = (dVar7 * 4.0 * local_16b8) / (local_16a0 * local_16b0);
        }
        local_16a0 = local_16a8;
        local_16b8 = dVar7;
        local_16b0 = dVar8 * dVar8 + dVar9 * dVar9;
      }
      if ((*(short *)(*param_1 + 0x1fa6) == 0x42) || (*(short *)(*param_1 + 0x1fa6) == 0x43)) {
        if (*(char *)(*param_1 + 0x1fd0) == '\0') {
          if (iVar3 % 2 == 1) {
            *(double *)(*param_2 + 0x10 + (longlong)(iVar3 / 2) * 8) = local_16a8;
          }
          else {
            *(double *)(*param_2 + 0x978 + (longlong)(iVar3 / 2) * 8) = local_16a8;
          }
        }
        else if (iVar3 % 2 == 0) {
          *(double *)(*param_2 + 0x10 + (longlong)(iVar3 / 2) * 8) = local_16a8;
        }
        else {
          *(double *)(*param_2 + 0x978 + (longlong)(iVar3 / 2) * 8) = local_16a8;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(short *)(*param_1 + 0x1fa6) == 0x42) || (*(short *)(*param_1 + 0x1fa6) == 0x43)) {
    dVar6 = (double)FUN_0040c760((dVar6 - 1.0) + 1.0);
    if (*(short *)(*param_1 + 0x1fa6) == 0x43) {
      if (iVar2 % 2 == 0) {
        dVar7 = (double)FUN_0040c760(dVar6 * dVar6 - 1.0);
        *(double *)(*param_2 + 0x12e0) = (dVar6 * 2.0 * dVar6 - dVar6 * 2.0 * dVar7) - 1.0;
      }
      else {
        *(undefined8 *)(*param_2 + 0x12e0) = 0x3ff0000000000000;
      }
    }
    else if (*(short *)(*param_1 + 0x1fa6) == 0x42) {
      *(undefined8 *)(*param_2 + 0x12e0) = 0x3ff0000000000000;
    }
  }
  local_16bc = 0;
LAB_01239dbe:
  FUN_00414560(&local_1698,6);
  return local_16bc;
}

