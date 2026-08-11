/* Ghidra address: 01ccb860 */
/* Ghidra symbol: FUN_01ccb860 */


void FUN_01ccb860(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  
  FUN_01cc7e10(param_1,param_2,param_3,0);
  pdVar1 = (double *)(*(longlong *)(param_1 + 8) + 0x38);
  if (*pdVar1 <= *param_2 && *param_2 != *pdVar1) {
    *param_3 = *param_3 * 2.0;
  }
  return;
}

