/* Ghidra address: 010bfbe0 */
/* Ghidra symbol: FUN_010bfbe0 */


double FUN_010bfbe0(double *param_1,double param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_50 [7];
  
  local_50[0] = (double)FUN_0040c850(*param_1);
  if (local_50[0] == 0.0) {
    *param_1 = -param_2;
    dVar3 = *param_1;
  }
  else {
    dVar3 = (double)FUN_010bf890(*param_1);
    if (0.0 <= dVar3) {
      FUN_00c43d10(local_50[0]);
      iVar1 = FUN_010bf8e0();
      dVar5 = (double)(iVar1 - param_3);
      dVar4 = (double)FUN_00c43d20(dVar5);
      local_50[0] = local_50[0] / dVar4;
      lVar2 = FUN_0040c770(local_50[0]);
      local_50[0] = (double)lVar2;
      dVar4 = (double)FUN_00c43d20((double)param_3);
      dVar4 = (double)FUN_0040c850(local_50[0] / dVar4 - 1.0);
      if (1e-09 <= dVar4) {
        local_50[0] = local_50[0] - 1.0;
      }
      else {
        if (param_3 < 1) {
          local_50[0] = 9.0;
        }
        else {
          dVar4 = (double)FUN_00c43d20((double)param_3);
          local_50[0] = dVar4 * local_50[0] - 1.0;
        }
        dVar5 = dVar5 - 1.0;
      }
      dVar4 = (double)FUN_00c43d20(dVar5);
      *param_1 = dVar3 * local_50[0] * dVar4;
      dVar3 = (double)FUN_00b90620(*param_1,param_2);
      *param_1 = dVar3;
      dVar3 = *param_1;
    }
    else {
      dVar4 = (double)FUN_010bfa60(local_50,param_2,param_3);
      dVar3 = dVar3 * dVar4;
      *param_1 = dVar3;
    }
  }
  return dVar3;
}

