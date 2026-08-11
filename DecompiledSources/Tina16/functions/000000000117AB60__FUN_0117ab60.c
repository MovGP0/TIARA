/* Ghidra address: 0117ab60 */
/* Ghidra symbol: FUN_0117ab60 */


undefined8 FUN_0117ab60(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = 1.0;
  iVar5 = *(int *)(*param_2 + 0x3880);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)(iVar3 * 3 + 2);
      dVar1 = *(double *)(*param_1 + 0x50 + lVar4 * 8);
      dVar6 = (double)FUN_0040c760(dVar1);
      dVar7 = *(double *)(*param_1 + 0xff8 + (longlong)(iVar3 * 3 + 1) * 8);
      dVar2 = *(double *)(*param_1 + 0xff8 + lVar4 * 8);
      lVar4 = (longlong)iVar3;
      *(double *)(*param_2 + 0x978 + lVar4 * 8) = param_3;
      *(double *)(*param_2 + 0x12e0 + lVar4 * 8) = param_4;
      *(double *)(*param_2 + 0x10 + lVar4 * 8) = 1.0 / (param_3 * dVar6);
      if (dVar1 <= dVar2) {
        if (dVar2 <= dVar1) {
          dVar7 = 2.0 - dVar7 / (dVar6 * 2.0);
        }
        else {
          dVar7 = ((dVar2 - dVar1) - dVar7 * dVar6) / (dVar1 * 2.0) + 2.0;
          *(double *)(*param_2 + 0x25b0 + lVar4 * 8) =
               (*(double *)(*param_2 + 0x10 + (longlong)iVar3 * 8) * 2.0) / (dVar2 / dVar1 - 1.0);
        }
      }
      else {
        dVar7 = ((dVar1 - dVar2) - dVar7 * dVar6) / (dVar2 * 2.0) + 2.0;
        *(double *)(*param_2 + 0x2f18 + lVar4 * 8) = ((dVar1 / dVar2 - 1.0) * param_3) / 2.0;
      }
      dVar8 = dVar8 * ((dVar7 * param_3) /
                      (param_3 + *(double *)(*param_2 + 0x2f18 + lVar4 * 8) * 2.0));
      *(double *)(*param_2 + 0x1c48 + lVar4 * 8) = param_4 * (dVar7 - 1.0);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  dVar8 = dVar8 / *(double *)(*param_1 + 0x48);
  if (dVar8 != 1.0) {
    *(double *)*param_2 = dVar8 * 10000.0;
    *(double *)(*param_2 + 8) = (dVar8 * 10000.0) / (dVar8 - 1.0);
  }
  return 0;
}

