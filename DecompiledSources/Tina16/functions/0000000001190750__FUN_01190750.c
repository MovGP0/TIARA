/* Ghidra address: 01190750 */
/* Ghidra symbol: FUN_01190750 */


double FUN_01190750(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar4 = (double)FUN_0040bcd0(param_2);
  iVar1 = 0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (-1 < *(int *)(*param_1 + 4) + -2) {
    iVar3 = *(int *)(*param_1 + 4) + -1;
    do {
      lVar2 = (longlong)iVar1;
      dVar5 = (double)FUN_0040c850(dVar4 - *(double *)(*param_1 + 0x3ba0 + lVar2 * 8));
      if (dVar5 <= 1e-12) {
        return *(double *)(*param_1 + 0x2bf8 + lVar2 * 8);
      }
      dVar5 = *(double *)(*param_1 + 0x1c50 + lVar2 * 8) /
              (dVar4 - *(double *)(*param_1 + 0x3ba0 + (longlong)iVar1 * 8));
      dVar7 = dVar7 + dVar5;
      dVar8 = dVar8 + dVar5 * *(double *)(*param_1 + 0x2bf8 + lVar2 * 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
      dVar5 = dVar7;
      dVar6 = dVar8;
    } while (iVar3 != 0);
  }
  if (dVar5 == 0.0) {
    dVar6 = 1e+300;
  }
  else {
    dVar6 = dVar6 / dVar5;
  }
  return dVar6;
}

