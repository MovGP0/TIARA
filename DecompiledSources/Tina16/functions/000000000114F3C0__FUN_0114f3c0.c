/* Ghidra address: 0114f3c0 */
/* Ghidra symbol: FUN_0114f3c0 */


double FUN_0114f3c0(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)FUN_0040c850(param_3);
  dVar5 = *(double *)(param_1 + 0x38);
  dVar2 = (double)FUN_0040c850(param_4);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar3 = (double)FUN_0114eff0(param_1,param_5,param_6,1);
  if (0.5 < dVar3) {
    dVar5 = (double)FUN_0114eff0(param_1,param_5,param_6,0);
    dVar5 = (double)FUN_0040c2f0(1.0 - dVar5);
    dVar5 = (double)FUN_0040c760(dVar5 * -2.0);
    dVar1 = (double)FUN_0040bdd0(dVar3 * 6.283185307179586);
    dVar5 = 1.0 - (-dVar2 / (dVar4 * 100.0)) * dVar5 * dVar1;
  }
  else {
    dVar4 = (double)FUN_0114eff0(param_1,param_5,param_6,0);
    dVar4 = (double)FUN_0040c2f0(1.0 - dVar4);
    dVar4 = (double)FUN_0040c760(dVar4 * -2.0);
    dVar2 = (double)FUN_0040bdd0(dVar3 * 6.283185307179586);
    dVar5 = (dVar1 / (dVar5 * 100.0)) * dVar4 * dVar2 + 1.0;
  }
  dVar4 = param_2 * dVar5;
  if (param_2 * dVar5 <= 0.0) {
    dVar4 = param_2;
  }
  return dVar4;
}

