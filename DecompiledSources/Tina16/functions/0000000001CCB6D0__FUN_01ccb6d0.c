/* Ghidra address: 01ccb6d0 */
/* Ghidra symbol: FUN_01ccb6d0 */


void FUN_01ccb6d0(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  
  FUN_01cc7e10(param_1,param_2,param_3,0);
  pdVar1 = (double *)(*(longlong *)(param_1 + 8) + 0x38);
  if (*pdVar1 <= *param_2 && *param_2 != *pdVar1) {
    *param_3 = *param_3 * 4.0 * *param_3;
  }
  return;
}

