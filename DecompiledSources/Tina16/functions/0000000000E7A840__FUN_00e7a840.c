/* Ghidra address: 00e7a840 */
/* Ghidra symbol: FUN_00e7a840 */


double FUN_00e7a840(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7,double *param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (double)FUN_0040c760((param_1 - param_2) * (param_1 - param_2) + param_4 * param_4);
  dVar6 = (param_1 + param_2 + dVar1) * 0.5;
  dVar2 = (double)FUN_0040c760((dVar6 - param_5) * (dVar6 - param_5) + 0.04000000000000001);
  dVar7 = (dVar6 + param_5 + dVar2) * 0.5;
  if (0.5 <= dVar7) {
    dVar4 = 0.5;
    dVar3 = (double)FUN_0040c760(1.0 - 0.5 / param_3);
    dVar3 = (dVar7 - 0.5) / dVar3;
  }
  else {
    dVar3 = 0.0;
    dVar4 = dVar7;
  }
  dVar7 = (double)FUN_0040c760(1.0 - dVar4 / param_3);
  dVar2 = ((dVar6 - param_5) / dVar2 + 1.0) * 0.5;
  dVar4 = (param_1 - param_2) / dVar1;
  dVar5 = (dVar4 + 1.0) * 0.5;
  dVar4 = dVar5 - dVar4;
  *param_8 = (param_6 / dVar7) * dVar2 * dVar5 + param_7 * dVar4;
  *param_9 = (param_6 / dVar7) * dVar2 * dVar4 + param_7 * dVar5;
  return param_6 * (param_3 * 2.0 * (1.0 - dVar7) + dVar3) + param_7 * (dVar6 - dVar1);
}

