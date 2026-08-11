/* Ghidra address: 01d75d20 */
/* Ghidra symbol: FUN_01d75d20 */


void FUN_01d75d20(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                 int param_6)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_80 [11];
  
  dVar5 = (param_1 - param_2) / (param_3 - param_2);
  dVar7 = 0.5;
  dVar6 = 0.0;
  iVar1 = param_6 + -1;
  if (-1 < iVar1) {
    pdVar2 = param_4 + iVar1;
    pdVar3 = param_5 + iVar1;
    do {
      dVar4 = (double)FUN_01d75ce0(((dVar5 - dVar6) / dVar7) / 2.0,local_80);
      *pdVar2 = dVar4;
      *pdVar3 = (local_80[0] / dVar7) / 2.0;
      if (dVar7 <= dVar5 - dVar6) {
        dVar6 = dVar6 + dVar7;
      }
      dVar7 = dVar7 / 2.0;
      iVar1 = iVar1 + -1;
      pdVar3 = pdVar3 + -1;
      pdVar2 = pdVar2 + -1;
    } while (iVar1 != -1);
  }
  if (-1 < param_6 + -1) {
    do {
      *param_4 = *param_4 * 3.5 + 0.2;
      *param_5 = (*param_5 * 3.5) / (param_3 - param_2);
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

