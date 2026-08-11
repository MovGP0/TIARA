/* Ghidra address: 0137c420 */
/* Ghidra symbol: FUN_0137c420 */


void FUN_0137c420(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_010bfe80(*param_2,0x426d1a94a2000000,0x3eb0c6f7a0b5ed8d);
  *param_2 = dVar1;
  dVar1 = (double)FUN_010bfe80(*param_3,0x426d1a94a2000000,0x3eb0c6f7a0b5ed8d);
  *param_3 = dVar1;
  if (*param_3 <= *param_2) {
    *param_3 = *param_2 + 1e-06;
  }
  return;
}

