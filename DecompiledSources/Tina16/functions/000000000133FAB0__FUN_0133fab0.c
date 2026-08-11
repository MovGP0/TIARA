/* Ghidra address: 0133fab0 */
/* Ghidra symbol: FUN_0133fab0 */


double FUN_0133fab0(longlong param_1,char param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar6 = FUN_00b92140(0);
  dVar8 = *(double *)(param_1 + 0x390);
  dVar9 = *(double *)(param_1 + 0x10);
  dVar1 = *(double *)(param_1 + 0x888);
  dVar2 = *(double *)(param_1 + 0x890);
  dVar7 = (double)FUN_01d0e4e0(param_1 + 0x5d8);
  if (dVar8 + dVar9 < dVar1) {
    dVar7 = dVar2;
  }
  dVar8 = (double)FUN_00b90650(*(undefined8 *)(param_1 + 0x750),dVar7 * 0.01);
  *param_3 = dVar8;
  dVar8 = *param_3;
  if ((0.0 < *(double *)(param_1 + 0x360)) &&
     (*(double *)(param_1 + 0x360) <= dVar8 && dVar8 != *(double *)(param_1 + 0x360))) {
    dVar8 = *(double *)(param_1 + 0x360);
  }
  if ((0.0 < *(double *)(param_1 + 0x488)) &&
     (*(double *)(param_1 + 0x488) <= dVar8 && dVar8 != *(double *)(param_1 + 0x488))) {
    dVar8 = *(double *)(param_1 + 0x488);
  }
  if ((param_2 == '\x01') &&
     (dVar9 = *(double *)(param_1 + 0x890) / (double)*(int *)(param_1 + 0x1464), dVar9 < dVar8)) {
    dVar8 = dVar9;
  }
  iVar5 = *(int *)(param_1 + 0x2d8);
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8);
      if ((*(char *)(lVar3 + 0x11a) != '\0') &&
         (dVar9 = (double)(**(code **)(lVar3 + 0xe8))
                                    (lVar3,param_1,6,*(undefined8 *)(param_1 + 0x390)),
         dVar9 < dVar8)) {
        dVar8 = dVar9;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  dVar9 = (double)FUN_00b92140(uVar6);
  *(double *)PTR_DAT_020037e0 = dVar9 + *(double *)PTR_DAT_020037e0;
  return dVar8;
}

