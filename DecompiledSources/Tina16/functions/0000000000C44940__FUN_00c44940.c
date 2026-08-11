/* Ghidra address: 00c44940 */
/* Ghidra symbol: FUN_00c44940 */


double * FUN_00c44940(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_2;
  dVar3 = param_2[1];
  FUN_00c43c40(dVar3,0x401921fb54442d18);
  dVar2 = (double)FUN_0040bcd0();
  *param_1 = dVar1 * dVar2;
  FUN_00c43c40(dVar3,0x401921fb54442d18);
  dVar3 = (double)FUN_0040bdd0();
  param_1[1] = dVar1 * dVar3;
  return param_1;
}

