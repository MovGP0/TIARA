/* Ghidra address: 010bf090 */
/* Ghidra symbol: FUN_010bf090 */


void FUN_010bf090(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  
  if (*(double *)(param_1 + 8) == 1.0) {
    *param_3 = 1.0;
    param_3[1] = 0.0;
  }
  else {
    dVar1 = (double)FUN_0040bcd0(param_2);
    *param_3 = 1.0 - *(double *)(param_1 + 8) * dVar1;
    dVar1 = (double)FUN_0040bdd0(param_2);
    param_3[1] = *(double *)(param_1 + 8) * dVar1;
    FUN_00c44790(PTR_DAT_02002618,param_3,param_3);
  }
  return;
}

