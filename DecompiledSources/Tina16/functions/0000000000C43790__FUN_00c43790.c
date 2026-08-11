/* Ghidra address: 00c43790 */
/* Ghidra symbol: FUN_00c43790 */


double FUN_00c43790(double param_1,double param_2,double param_3,double param_4,undefined1 *param_5,
                   double param_6,double param_7)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = param_1 - param_2;
  dVar2 = (double)FUN_0040c850(param_4 - param_3);
  param_6 = (dVar2 * 0.99) / param_6;
  if (param_7 < 0.0) {
    uVar3 = FUN_0040c850(param_4);
    uVar4 = FUN_0040c850(param_3);
    dVar2 = (double)FUN_00b90620(uVar3,uVar4);
    param_7 = (*(double *)(PTR_DAT_02004010 + 0xe8) * dVar2 + *(double *)(PTR_DAT_02004010 + 0xd0))
              * 2.0;
  }
  *param_5 = 0;
  dVar2 = (double)FUN_0040c850(dVar5);
  if (param_6 < dVar2) {
    dVar2 = (double)FUN_0040c850(dVar5);
    if (param_7 < dVar2) {
      if ((param_2 < param_3) || (param_4 < param_2)) {
        if ((param_2 <= param_4) || (param_4 <= param_1)) {
          if (((param_2 < param_3) && (param_3 < param_1)) && (param_3 + param_6 < param_1)) {
            param_1 = param_3 + param_6;
            *param_5 = 1;
          }
        }
        else if (param_1 < param_4 - param_6) {
          param_1 = param_4 - param_6;
          *param_5 = 1;
        }
      }
      else {
        dVar2 = (double)FUN_0040c850(dVar5);
        iVar1 = FUN_00c42630(dVar5);
        dVar2 = (double)FUN_0040c760(dVar2 / param_6);
        param_1 = param_2 + param_6 * (double)iVar1 * dVar2;
        *param_5 = 1;
      }
    }
  }
  return param_1;
}

