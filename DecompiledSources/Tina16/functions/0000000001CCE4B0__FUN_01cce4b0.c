/* Ghidra address: 01cce4b0 */
/* Ghidra symbol: FUN_01cce4b0 */


void FUN_01cce4b0(undefined8 param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((param_2 == 0.0) && (param_3 != 0.0)) {
    dVar3 = -1.0;
    dVar4 = 0.0;
    dVar1 = (double)FUN_0040c850(param_3);
    dVar1 = 1.0 / dVar1;
    dVar2 = (double)FUN_0040c760(dVar1 * dVar1 * 4.0 - 0.0);
    dVar2 = (dVar1 * 2.0 + dVar2) / ((dVar1 * dVar1 + 1.0) * 2.0);
    dVar1 = (double)FUN_0040c760(1.0 - dVar2 * dVar2);
  }
  else if ((param_3 == 0.0) && (param_2 != 0.0)) {
    dVar1 = -1.0;
    dVar2 = 0.0;
    dVar3 = (double)FUN_0040c850(param_2);
    dVar3 = 1.0 / dVar3;
    dVar4 = (double)FUN_0040c760(dVar3 * dVar3 * 4.0 - 0.0);
    dVar4 = (dVar3 * 2.0 + dVar4) / ((dVar3 * dVar3 + 1.0) * 2.0);
    dVar3 = (double)FUN_0040c760(1.0 - dVar4 * dVar4);
  }
  else {
    dVar1 = (double)FUN_0040c850(param_2);
    dVar1 = 1.0 / dVar1;
    dVar3 = (double)FUN_0040c850(param_3);
    dVar3 = 1.0 / dVar3;
    dVar2 = (double)FUN_0040c760(dVar1 * dVar1 * 4.0 - 0.0);
    dVar4 = (dVar1 * 2.0 + dVar2) / ((dVar1 * dVar1 + 1.0) * 2.0);
    dVar1 = (double)FUN_0040c760(dVar3 * dVar3 * 4.0 - 0.0);
    dVar2 = (dVar3 * 2.0 + dVar1) / ((dVar3 * dVar3 + 1.0) * 2.0);
    dVar3 = (double)FUN_0040c760(1.0 - dVar4 * dVar4);
    dVar1 = (double)FUN_0040c760(1.0 - dVar2 * dVar2);
  }
  FUN_0040c760((dVar3 - dVar1) * (dVar3 - dVar1) + (dVar4 - dVar2) * (dVar4 - dVar2));
  return;
}

