/* Ghidra address: 018a7120 */
/* Ghidra symbol: FUN_018a7120 */


void FUN_018a7120(undefined8 param_1,double *param_2,int *param_3,double param_4,double param_5,
                 double param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = param_3[2];
  if (iVar2 < iVar1) {
    *param_2 = ((double)iVar2 - param_5) / param_4;
    param_2[2] = ((double)iVar1 - param_5) / param_4;
  }
  else {
    *param_2 = ((double)iVar1 - param_5) / param_4;
    param_2[2] = ((double)iVar2 - param_5) / param_4;
  }
  iVar1 = param_3[1];
  iVar2 = param_3[3];
  if (iVar2 < iVar1) {
    param_2[1] = ((double)iVar2 - param_6) / param_4;
    param_2[3] = ((double)iVar1 - param_6) / param_4;
  }
  else {
    param_2[1] = ((double)iVar1 - param_6) / param_4;
    param_2[3] = ((double)iVar2 - param_6) / param_4;
  }
  return;
}

