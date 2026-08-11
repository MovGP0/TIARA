/* Ghidra address: 01b23640 */
/* Ghidra symbol: FUN_01b23640 */


bool FUN_01b23640(double param_1,double param_2,double param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 == param_2) {
    bVar1 = true;
  }
  else if ((param_1 == 0.0) || (param_2 == 0.0)) {
    dVar2 = (double)FUN_0040c850(param_1 - param_2);
    bVar1 = dVar2 < param_3;
  }
  else {
    dVar2 = (double)FUN_0040c850(param_1);
    dVar3 = (double)FUN_0040c850(param_2);
    if (dVar2 <= dVar3) {
      dVar2 = (double)FUN_0040c850(param_2);
    }
    else {
      dVar2 = (double)FUN_0040c850(param_1);
    }
    dVar3 = (double)FUN_0040c850(param_1 - param_2);
    bVar1 = dVar3 / dVar2 < param_3;
  }
  return bVar1;
}

