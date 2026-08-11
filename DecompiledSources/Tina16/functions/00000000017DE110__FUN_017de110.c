/* Ghidra address: 017de110 */
/* Ghidra symbol: FUN_017de110 */


void FUN_017de110(longlong param_1,double param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  double *pdVar2;
  double local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00c43ea0(*(undefined8 *)(param_1 + 0x50),local_res10);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
  if (*(char *)(lVar1 + 0xe) != '\0') {
    FUN_01663140(lVar1,param_3,*param_4,4);
  }
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_4 + 1) * 8);
  *pdVar2 = *pdVar2 + local_res10[0];
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_4 + 2) * 8);
  *pdVar2 = *pdVar2 - local_res10[0];
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_4 + 3) * 8);
  *pdVar2 = *pdVar2 - local_res10[0];
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_4 + 4) * 8);
  *pdVar2 = *pdVar2 + local_res10[0];
  *param_4 = *param_4 + 4;
  return;
}

