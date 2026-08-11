/* Ghidra address: 0113f080 */
/* Ghidra symbol: FUN_0113f080 */


void FUN_0113f080(double param_1,double param_2,longlong param_3,char param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  if (0.0 <= *(double *)(param_3 + 1)) {
    dVar3 = (double)FUN_0040c850(param_1);
    if (param_1 - dVar3 * dVar2 <= *(double *)(param_3 + 1)) {
      dVar3 = (double)FUN_0040c850(param_2);
      if (*(double *)(param_3 + 1) <= param_2 + dVar3 * dVar2) {
        bVar1 = true;
        goto LAB_0113f115;
      }
    }
  }
  bVar1 = false;
LAB_0113f115:
  if ((((bVar1) && (param_4 == '\0')) &&
      (dVar3 = 1.0 / (param_2 - param_1), (1.0 - dVar2) * dVar3 <= *(double *)(param_3 + 9))) &&
     (*(double *)(param_3 + 9) <= dVar3 && dVar3 != *(double *)(param_3 + 9))) {
    *(double *)(param_3 + 9) = dVar3;
  }
  return;
}

