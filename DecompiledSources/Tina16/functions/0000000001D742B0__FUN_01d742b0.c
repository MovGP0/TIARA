/* Ghidra address: 01d742b0 */
/* Ghidra symbol: FUN_01d742b0 */


void FUN_01d742b0(double param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_80 [11];
  
  dVar5 = (param_1 - param_2) / (param_3 - param_2);
  dVar7 = 0.5;
  dVar6 = 0.0;
  cVar3 = -8;
  pdVar1 = param_4 + 7;
  pdVar2 = param_5 + 7;
  do {
    dVar4 = (double)FUN_01d74270(((dVar5 - dVar6) / dVar7) / 2.0,local_80);
    *pdVar1 = dVar4;
    *pdVar2 = (local_80[0] / dVar7) / 2.0;
    if (dVar7 <= dVar5 - dVar6) {
      dVar6 = dVar6 + dVar7;
    }
    dVar7 = dVar7 / 2.0;
    pdVar2 = pdVar2 + -1;
    pdVar1 = pdVar1 + -1;
    cVar3 = cVar3 + '\x01';
  } while (cVar3 != '\0');
  cVar3 = '\b';
  do {
    *param_4 = *param_4 * 3.5 + 0.2;
    *param_5 = (*param_5 * 3.5) / (param_3 - param_2);
    param_5 = param_5 + 1;
    param_4 = param_4 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return;
}

