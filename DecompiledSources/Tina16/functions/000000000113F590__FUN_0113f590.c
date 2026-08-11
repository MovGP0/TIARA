/* Ghidra address: 0113f590 */
/* Ghidra symbol: FUN_0113f590 */


void FUN_0113f590(double param_1,double param_2,char *param_3,char param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  if ((((*(double *)(param_3 + 1) < 0.0) ||
       (dVar3 = (double)FUN_0040c850(param_1), *(double *)(param_3 + 1) < param_1 - dVar3 * dVar2))
      || (*(double *)(param_3 + 9) < *(double *)(param_3 + 1) ||
          *(double *)(param_3 + 9) == *(double *)(param_3 + 1))) ||
     (dVar3 = (double)FUN_0040c850(param_2), param_2 + dVar3 * dVar2 < *(double *)(param_3 + 9))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (param_4 == '\0')) {
    dVar3 = (double)(1 << (*param_3 - 1U & 0x1f)) /
            (*(double *)(param_3 + 9) - *(double *)(param_3 + 1));
    if ((*(double *)(param_3 + 0x11) < 0.0) ||
       ((*(double *)(param_3 + 0x19) < *(double *)(param_3 + 0x11) ||
         *(double *)(param_3 + 0x19) == *(double *)(param_3 + 0x11) ||
        ((dVar2 + 1.0) * dVar3 < *(double *)(param_3 + 0x19))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (dVar3 < *(double *)(param_3 + 0x19))) {
      *(double *)(param_3 + 0x19) = dVar3;
    }
  }
  return;
}

