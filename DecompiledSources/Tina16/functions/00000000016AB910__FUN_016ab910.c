/* Ghidra address: 016ab910 */
/* Ghidra symbol: FUN_016ab910 */


double * FUN_016ab910(double *param_1,double *param_2)

{
  double *pdVar1;
  
  if (*param_2 <= 0.0) {
    pdVar1 = (double *)(PTR_DAT_020025e0 + 8);
    *param_1 = *(double *)PTR_DAT_020025e0;
    param_1[1] = *pdVar1;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return param_1;
}

