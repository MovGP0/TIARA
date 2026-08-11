/* Ghidra address: 01d60770 */
/* Ghidra symbol: FUN_01d60770 */


bool FUN_01d60770(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  
  dVar2 = (double)FUN_0040c850(param_5 - param_1);
  if (1e-14 <= dVar2) {
    uVar3 = FUN_0040c850(param_2);
    uVar4 = FUN_0040c850(param_4);
    dVar2 = (double)FUN_00b90620(uVar3,uVar4);
    FUN_0040c850((((param_4 - param_2) / (param_3 - param_1)) * (param_5 - param_1) + param_2) -
                 param_6);
    bVar1 = extraout_XMM0_Qa_00 < dVar2 * param_7 + param_8;
  }
  else {
    uVar3 = FUN_0040c850(param_2);
    uVar4 = FUN_0040c850(param_4);
    dVar2 = (double)FUN_00b90620(uVar3,uVar4);
    dVar5 = (double)FUN_0040c850(param_2 - param_4);
    if (dVar5 < dVar2 * param_7 + param_8) {
      uVar3 = FUN_0040c850(param_2);
      uVar4 = FUN_0040c850(param_6);
      dVar2 = (double)FUN_00b90620(uVar3,uVar4);
      FUN_0040c850(param_2 - param_6);
      if (extraout_XMM0_Qa < dVar2 * param_7 + param_8) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

