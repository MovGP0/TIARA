/* Ghidra address: 010bf950 */
/* Ghidra symbol: FUN_010bf950 */


double FUN_010bf950(double param_1)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 == 0.0) {
    dVar4 = 0.0;
  }
  else {
    dVar3 = (double)FUN_0040c850(param_1);
    FUN_00c43d10(dVar3);
    iVar2 = FUN_010bf8e0();
    dVar4 = (double)FUN_00c43d20((double)iVar2);
    lVar1 = FUN_0040c770(dVar3 / dVar4);
    dVar4 = (double)FUN_00c43d20((double)iVar2);
    dVar4 = (param_1 / dVar3) * (double)lVar1 * dVar4;
  }
  return dVar4;
}

