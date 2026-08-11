/* Ghidra address: 01d6d880 */
/* Ghidra symbol: FUN_01d6d880 */


double FUN_01d6d880(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                   longlong *param_5)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_48;
  double local_40 [5];
  
  uVar1 = *param_4;
  dVar2 = (double)FUN_00dd07b0(uVar1);
  FUN_00dd0a10(uVar1,local_40,&local_48,0);
  dVar4 = local_40[0] - local_48;
  dVar3 = (double)FUN_00dd1640(*param_3,*param_5,uVar1);
  local_48 = local_48 + dVar4 * dVar3;
  *(double *)*param_5 = dVar4 * *(double *)*param_5;
  dVar3 = (double)param_3[1] / dVar2;
  if (dVar3 < 1.0) {
    dVar4 = dVar2 + dVar3 * (local_48 - dVar2);
    *(double *)*param_5 = dVar3 * *(double *)*param_5;
    *(double *)(*param_5 + 8) = (local_48 - dVar2) / dVar2;
  }
  else {
    *(undefined8 *)(*param_5 + 8) = 0;
    dVar4 = local_48;
  }
  return dVar4;
}

