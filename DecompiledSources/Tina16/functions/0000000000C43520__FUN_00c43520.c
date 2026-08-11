/* Ghidra address: 00c43520 */
/* Ghidra symbol: FUN_00c43520 */


double FUN_00c43520(double param_1,double param_2,double param_3,double param_4,undefined1 *param_5,
                   double param_6,double param_7)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = param_1 - param_2;
  dVar2 = (double)FUN_0040c850(param_4 - param_3);
  dVar2 = dVar2 / param_6;
  if (param_7 < 0.0) {
    uVar3 = FUN_0040c850(param_4);
    uVar4 = FUN_0040c850(param_3);
    dVar5 = (double)FUN_00b90620(uVar3,uVar4);
    param_7 = (*(double *)(PTR_DAT_02004010 + 0xe8) * dVar5 + *(double *)(PTR_DAT_02004010 + 0xd0))
              * 2.0;
  }
  *param_5 = 0;
  dVar5 = (double)FUN_0040c850(dVar7);
  if (dVar2 < dVar5) {
    dVar5 = (double)FUN_0040c850(dVar7);
    if (param_7 < dVar5) {
      dVar5 = dVar2 * 1.0;
      if ((param_2 <= param_3) || (param_4 <= param_2)) {
        if ((param_2 <= param_4) || (param_4 <= param_1)) {
          if (((param_2 < param_3) && (param_3 < param_1)) && (param_3 + dVar5 < param_1)) {
            param_1 = param_3 + dVar5;
            *param_5 = 1;
          }
        }
        else if (param_1 < param_4 - dVar5) {
          param_1 = param_4 - dVar5;
          *param_5 = 1;
        }
      }
      else {
        dVar6 = (double)FUN_0040c850(dVar7);
        iVar1 = FUN_00c42630(dVar7);
        dVar2 = (double)FUN_0040c760(dVar6 / dVar2);
        param_1 = param_2 + dVar5 * (double)iVar1 * dVar2;
        *param_5 = 1;
      }
    }
  }
  return param_1;
}

