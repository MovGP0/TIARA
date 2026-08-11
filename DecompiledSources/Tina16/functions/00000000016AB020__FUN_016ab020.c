/* Ghidra address: 016ab020 */
/* Ghidra symbol: FUN_016ab020 */


double * FUN_016ab020(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  FUN_00c43c40(*param_2 * 2.0,0x401921fb54442d18);
  dVar1 = (double)FUN_0040bdd0();
  FUN_00c43c40(*param_2 * 2.0,0x401921fb54442d18);
  dVar2 = (double)FUN_0040bcd0();
  dVar3 = (double)FUN_005268c0(param_2[1] * 2.0);
  *param_1 = dVar1 / (dVar2 + dVar3);
  dVar1 = (double)FUN_00526a20(param_2[1] * 2.0);
  FUN_00c43c40(*param_2 * 2.0,0x401921fb54442d18);
  dVar2 = (double)FUN_0040bcd0();
  dVar3 = (double)FUN_005268c0(param_2[1] * 2.0);
  param_1[1] = dVar1 / (dVar2 + dVar3);
  return param_1;
}

