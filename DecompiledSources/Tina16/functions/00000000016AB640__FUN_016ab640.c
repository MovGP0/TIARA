/* Ghidra address: 016ab640 */
/* Ghidra symbol: FUN_016ab640 */


double * FUN_016ab640(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_00526970(*param_2);
  dVar2 = (double)FUN_00526810(*param_2);
  FUN_00c43c40((double)param_2[1] * 2.0,0x401921fb54442d18);
  dVar3 = (double)FUN_0040bcd0();
  *param_1 = dVar1 / (dVar2 + dVar3);
  FUN_00c43c40((double)param_2[1] * 2.0,0x401921fb54442d18);
  dVar1 = (double)FUN_0040bdd0();
  dVar2 = (double)FUN_00526810(*param_2);
  FUN_00c43c40((double)param_2[1] * 2.0,0x401921fb54442d18);
  dVar3 = (double)FUN_0040bcd0();
  param_1[1] = dVar1 / (dVar2 + dVar3);
  return param_1;
}

