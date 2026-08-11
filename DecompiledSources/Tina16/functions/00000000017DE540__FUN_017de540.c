/* Ghidra address: 017de540 */
/* Ghidra symbol: FUN_017de540 */


void FUN_017de540(longlong param_1,double param_2,longlong param_3,char param_4,int *param_5)

{
  longlong lVar1;
  double *pdVar2;
  double local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_4 == '\0') {
    FUN_00c43f10(*(undefined8 *)(param_1 + 0x48),local_res10);
  }
  else {
    FUN_00c43ea0(*(undefined8 *)(param_1 + 0x50),local_res10);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
  if (*(char *)(lVar1 + 0xe) != '\0') {
    FUN_01663140(lVar1,param_3,*param_5,2);
  }
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_5 + 1) * 8);
  *pdVar2 = *pdVar2 + local_res10[0];
  pdVar2 = *(double **)(param_3 + -8 + (longlong)(*param_5 + 2) * 8);
  *pdVar2 = *pdVar2 - local_res10[0];
  *param_5 = *param_5 + 2;
  return;
}

