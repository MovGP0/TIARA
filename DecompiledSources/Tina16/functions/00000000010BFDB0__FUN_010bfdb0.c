/* Ghidra address: 010bfdb0 */
/* Ghidra symbol: FUN_010bfdb0 */


double FUN_010bfdb0(double *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  if (*param_1 == 0.0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = (double)FUN_0040c850(*param_1);
    iVar1 = FUN_00c42630(*param_1);
    FUN_00c43d10(dVar4);
    iVar2 = FUN_010bf8e0();
    dVar5 = (double)FUN_00c43d20((double)(iVar2 - param_2));
    lVar3 = FUN_0040c770(dVar4 / dVar5);
    dVar4 = (double)FUN_00c43d20((double)(iVar2 - param_2));
    *param_1 = (double)iVar1 * (double)lVar3 * dVar4;
    dVar4 = *param_1;
  }
  return dVar4;
}

