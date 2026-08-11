/* Ghidra address: 01a90300 */
/* Ghidra symbol: FUN_01a90300 */


double * FUN_01a90300(double *param_1,double *param_2,double param_3,double *param_4,double *param_5
                     ,double param_6,double param_7,double param_8,double param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_XMM10_Qa;
  double unaff_XMM11_Qa;
  double dVar10;
  double dVar11;
  
  dVar9 = *param_2;
  dVar8 = param_2[1];
  dVar7 = *param_4;
  dVar1 = param_4[1];
  dVar2 = *param_5;
  dVar3 = param_5[1];
  if (dVar3 == dVar1) {
    param_1[1] = dVar1;
    if (0.0 < dVar2) {
      dVar7 = (double)FUN_0040c760(param_3 * param_3 - (param_1[1] - dVar8) * (param_1[1] - dVar8));
      *param_1 = dVar7 + dVar9;
    }
    else {
      dVar7 = (double)FUN_0040c760(param_3 * param_3 - (param_1[1] - dVar8) * (param_1[1] - dVar8));
      *param_1 = -dVar7 + dVar9;
    }
    if (dVar8 <= 0.0) {
      param_1[1] = -param_1[1];
    }
  }
  else {
    unaff_XMM10_Qa = (dVar2 - dVar7) / (dVar3 - dVar1);
    unaff_XMM11_Qa = dVar7 - unaff_XMM10_Qa * dVar1;
    dVar5 = unaff_XMM11_Qa - dVar9;
    dVar10 = unaff_XMM10_Qa * unaff_XMM10_Qa + 1.0;
    dVar11 = unaff_XMM10_Qa * 2.0 * dVar5 - dVar8 * 2.0;
    dVar5 = (dVar5 * dVar5 + dVar8 * dVar8) - param_3 * param_3;
    if (dVar11 * dVar11 - dVar10 * 4.0 * dVar5 < 0.0) {
      *param_1 = -1000.0;
      param_1[1] = -1000.0;
      return param_1;
    }
    dVar6 = (double)FUN_0040c760(dVar11 * dVar11 - dVar10 * 4.0 * dVar5);
    param_1[1] = (-dVar11 - dVar6) / (dVar10 * 2.0);
    *param_1 = unaff_XMM10_Qa * param_1[1] + unaff_XMM11_Qa;
    cVar4 = FUN_01a90050(dVar7,dVar1,dVar2,dVar3,*param_1,param_1[1]);
    if (cVar4 != '\0') {
      return param_1;
    }
    dVar7 = (double)FUN_0040c760(dVar11 * dVar11 - dVar10 * 4.0 * dVar5);
    param_1[1] = (-dVar11 + dVar7) / (dVar10 * 2.0);
    *param_1 = unaff_XMM10_Qa * param_1[1] + unaff_XMM11_Qa;
  }
  cVar4 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,*param_1,param_1[1]);
  if (cVar4 == '\0') {
    *param_1 = -1000.0;
    param_1[1] = -1000.0;
    if ((param_6 - dVar9) * (param_6 - dVar9) < param_3 * param_3) {
      dVar7 = (1.0 / unaff_XMM10_Qa) * param_6 - unaff_XMM11_Qa / unaff_XMM10_Qa;
      cVar4 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_6,dVar7);
      if (cVar4 != '\0') {
        *param_1 = param_6;
        param_1[1] = dVar7;
        return param_1;
      }
    }
    if ((param_7 - dVar8) * (param_7 - dVar8) < param_3 * param_3) {
      dVar7 = unaff_XMM10_Qa * param_7 + unaff_XMM11_Qa;
      cVar4 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar7,param_7);
      if (cVar4 != '\0') {
        *param_1 = dVar7;
        param_1[1] = param_7;
        return param_1;
      }
    }
    if ((param_9 - dVar8) * (param_9 - dVar8) < param_3 * param_3) {
      dVar8 = unaff_XMM10_Qa * param_9 + unaff_XMM11_Qa;
      cVar4 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar8,param_9);
      if (cVar4 != '\0') {
        *param_1 = dVar8;
        param_1[1] = param_9;
        return param_1;
      }
    }
    if ((param_8 - dVar9) * (param_8 - dVar9) < param_3 * param_3) {
      dVar9 = (1.0 / unaff_XMM10_Qa) * param_8 - unaff_XMM11_Qa / unaff_XMM10_Qa;
      cVar4 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_8,dVar9);
      if (cVar4 != '\0') {
        *param_1 = param_8;
        param_1[1] = dVar9;
      }
    }
  }
  return param_1;
}

