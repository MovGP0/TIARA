/* Ghidra address: 010bfa60 */
/* Ghidra symbol: FUN_010bfa60 */


double FUN_010bfa60(double *param_1,double param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_40 [5];
  
  local_40[0] = (double)FUN_0040c850(*param_1);
  if (local_40[0] == 0.0) {
    *param_1 = param_2;
    dVar3 = *param_1;
  }
  else {
    dVar3 = (double)FUN_010bf890(*param_1);
    if (0.0 <= dVar3) {
      FUN_00c43d10(local_40[0]);
      iVar1 = FUN_010bf8e0();
      dVar5 = (double)(iVar1 - param_3);
      dVar4 = (double)FUN_00c43d20(dVar5);
      local_40[0] = local_40[0] / dVar4;
      lVar2 = FUN_0040c770(local_40[0]);
      local_40[0] = (double)lVar2;
      dVar4 = (double)FUN_00c43d20((double)(param_3 + 1));
      dVar4 = (double)FUN_0040c850(local_40[0] / dVar4 - 1.0);
      if (dVar4 < 1e-09) {
        dVar4 = (double)FUN_00c43d20((double)param_3);
        local_40[0] = local_40[0] / dVar4;
        dVar5 = dVar5 + 1.0;
      }
      local_40[0] = local_40[0] + 1.0;
      dVar4 = (double)FUN_00c43d20(dVar5);
      *param_1 = dVar3 * local_40[0] * dVar4;
      dVar3 = *param_1;
    }
    else {
      dVar4 = (double)FUN_010bfbe0(local_40,param_2,param_3);
      dVar3 = dVar3 * dVar4;
      *param_1 = dVar3;
    }
  }
  return dVar3;
}

