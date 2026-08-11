/* Ghidra address: 01cd2f30 */
/* Ghidra symbol: FUN_01cd2f30 */


void FUN_01cd2f30(longlong param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  
  uVar9 = param_2 - param_3 >> 0x1f;
  if ((int)((param_2 - param_3 ^ uVar9) - uVar9) < 5) {
    param_2 = FUN_0040c770((double)param_2 +
                           (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) / 4.0);
    param_3 = FUN_0040c770((double)param_2 -
                           (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) / 2.0);
  }
  uVar8 = FUN_01cd6670(param_1);
  uVar8 = uVar8 & 0xff;
  if (uVar8 < 6) {
    if (uVar8 != 5) {
      uVar8 = uVar8 - 1;
      if (uVar8 != 0xffffffffffffffff) {
        if (uVar8 < 2) goto LAB_01cd31aa;
        if (uVar8 != 3) goto LAB_01cd336d;
      }
LAB_01cd3010:
      iVar2 = *(int *)(param_1 + 0xe8);
      if (param_2 <= iVar2) {
        param_2 = iVar2;
      }
      iVar3 = *(int *)(param_1 + 0xec);
      if (iVar3 <= param_2) {
        param_2 = iVar3;
      }
      if (param_3 <= iVar2) {
        param_3 = iVar2;
      }
      if (iVar3 <= param_3) {
        param_3 = iVar3;
      }
      if (param_2 == param_3) {
        return;
      }
      bVar1 = *(byte *)(param_1 + 0x70);
      if (bVar1 < 2) {
LAB_01cd3060:
        unaff_XMM6_Qa =
             ((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) *
             (double)(param_2 - iVar2)) / (double)(iVar3 - iVar2) + *(double *)(param_1 + 0xb8);
        unaff_XMM7_Qa =
             ((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) *
             (double)(param_3 - iVar2)) /
             (double)(*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) +
             *(double *)(param_1 + 0xb8);
      }
      else if (bVar1 == 2) {
        dVar10 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
        dVar11 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        dVar12 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        unaff_XMM6_Qa =
             (double)FUN_00c43d20(((dVar10 - dVar11) * (double)(param_2 - *(int *)(param_1 + 0xe8)))
                                  / (double)(*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) +
                                  dVar12);
        dVar10 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
        dVar11 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        dVar12 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        unaff_XMM7_Qa =
             (double)FUN_00c43d20(((dVar10 - dVar11) * (double)(param_3 - *(int *)(param_1 + 0xe8)))
                                  / (double)(*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) +
                                  dVar12);
      }
      else if (bVar1 == 3) goto LAB_01cd3060;
      *(double *)(param_1 + 0xb8) = unaff_XMM6_Qa;
      *(double *)(param_1 + 0xc0) = unaff_XMM7_Qa;
      goto LAB_01cd336d;
    }
  }
  else {
    if (uVar8 == 6) goto LAB_01cd3010;
    if (uVar8 != 7) goto LAB_01cd336d;
  }
LAB_01cd31aa:
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xec);
  iVar5 = iVar2;
  if (iVar2 <= iVar3) {
    iVar5 = iVar3;
  }
  if (iVar5 <= param_2) {
    param_2 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar3 <= iVar2) {
    iVar5 = iVar3;
  }
  if (param_2 <= iVar5) {
    param_2 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar2 <= iVar3) {
    iVar5 = iVar3;
  }
  if (iVar5 <= param_3) {
    param_3 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar3 <= iVar2) {
    iVar5 = iVar3;
  }
  if (param_3 <= iVar5) {
    param_3 = iVar5;
  }
  if (param_2 == param_3) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  if (bVar1 < 2) {
LAB_01cd321f:
    unaff_XMM6_Qa =
         ((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) * (double)(iVar2 - param_2)) /
         (double)(iVar2 - iVar3) + *(double *)(param_1 + 0xb8);
    unaff_XMM7_Qa =
         ((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) * (double)(iVar2 - param_3)) /
         (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) + *(double *)(param_1 + 0xb8)
    ;
  }
  else if (bVar1 == 2) {
    dVar10 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
    dVar11 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    dVar12 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    unaff_XMM6_Qa =
         (double)FUN_00c43d20(((dVar10 - dVar11) * (double)(*(int *)(param_1 + 0xe8) - param_2)) /
                              (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) + dVar12
                             );
    dVar10 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
    dVar11 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    dVar12 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    unaff_XMM7_Qa =
         (double)FUN_00c43d20(((dVar10 - dVar11) * (double)(*(int *)(param_1 + 0xe8) - param_3)) /
                              (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)) + dVar12
                             );
  }
  else if (bVar1 == 3) goto LAB_01cd321f;
  *(double *)(param_1 + 0xb8) = unaff_XMM6_Qa;
  *(double *)(param_1 + 0xc0) = unaff_XMM7_Qa;
LAB_01cd336d:
  cVar4 = FUN_01ae78c0(*(undefined8 *)(param_1 + 0x60),L"RoundAfterZoom",1);
  if (cVar4 != '\0') {
    uVar6 = FUN_01ccddc0(param_1);
    uVar7 = FUN_01ccddd0(param_1);
    FUN_01cd43b0(param_1,uVar6,uVar7);
  }
  return;
}

