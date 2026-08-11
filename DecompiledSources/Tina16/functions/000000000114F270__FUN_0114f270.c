/* Ghidra address: 0114f270 */
/* Ghidra symbol: FUN_0114f270 */


double FUN_0114f270(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_0040c850(param_3);
  dVar2 = (double)FUN_0040c850(param_4);
  dVar3 = (double)FUN_0114eff0(param_1,param_5,param_6,1);
  if (0.5 < dVar3) {
    dVar1 = 1.0 - (-dVar2 / 100.0) * (1.0 - dVar3 * 2.0);
  }
  else {
    dVar1 = (dVar1 / 100.0) * (1.0 - dVar3 * 2.0) + 1.0;
  }
  dVar2 = param_2 * dVar1;
  if (param_2 * dVar1 <= 0.0) {
    dVar2 = param_2;
  }
  return dVar2;
}

