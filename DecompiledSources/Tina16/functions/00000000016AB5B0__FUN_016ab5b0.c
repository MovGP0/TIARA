/* Ghidra address: 016ab5b0 */
/* Ghidra symbol: FUN_016ab5b0 */


double * FUN_016ab5b0(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00526810(*param_2);
  FUN_00c43c40(param_2[1],0x401921fb54442d18);
  dVar2 = (double)FUN_0040bcd0();
  *param_1 = dVar1 * dVar2;
  dVar1 = (double)FUN_00526970(*param_2);
  FUN_00c43c40(param_2[1],0x401921fb54442d18);
  dVar2 = (double)FUN_0040bdd0();
  param_1[1] = dVar1 * dVar2;
  return param_1;
}

