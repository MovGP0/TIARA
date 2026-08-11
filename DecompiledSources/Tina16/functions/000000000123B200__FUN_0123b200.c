/* Ghidra address: 0123b200 */
/* Ghidra symbol: FUN_0123b200 */


double FUN_0123b200(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(short *)((longlong)param_2 + 0x1fa4) == 0x4c) {
    if (param_2[4] - 1e-12 <= param_1) {
      dVar1 = (double)FUN_00526490();
      dVar2 = (double)FUN_00526490(param_2[4]);
      dVar3 = (double)FUN_00526490(param_2[6]);
      dVar4 = (double)FUN_00526490(param_2[4]);
      dVar1 = *param_2 + ((param_2[2] - *param_2) * (dVar1 - dVar2)) / (dVar3 - dVar4);
    }
    else {
      dVar1 = 0.0;
    }
  }
  else if (*(short *)((longlong)param_2 + 0x1fa4) == 0x48) {
    if (param_1 <= param_2[4] + 1e-12) {
      dVar1 = (double)FUN_00526490();
      dVar2 = (double)FUN_00526490(param_2[6]);
      dVar3 = (double)FUN_00526490(param_2[4]);
      dVar4 = (double)FUN_00526490(param_2[6]);
      dVar1 = param_2[2] + ((*param_2 - param_2[2]) * (dVar1 - dVar2)) / (dVar3 - dVar4);
    }
    else {
      dVar1 = 0.0;
    }
  }
  else {
    dVar1 = 1.0;
  }
  return dVar1;
}

