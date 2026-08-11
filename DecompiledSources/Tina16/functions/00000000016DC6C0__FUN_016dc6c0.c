/* Ghidra address: 016dc6c0 */
/* Ghidra symbol: FUN_016dc6c0 */


double FUN_016dc6c0(undefined8 param_1,char param_2,double param_3,longlong param_4)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if (param_2 == '\x06') {
    pdVar2 = *(double **)(param_4 + 0x17);
    if (pdVar2 == (double *)0x0) {
      dVar5 = 0.0;
    }
    else {
      iVar3 = *(int *)(param_4 + 0x13);
      if (iVar3 < 2) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = pdVar2[(longlong)iVar3 * 2 + -2] - *pdVar2;
        pdVar1 = (double *)(*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)iVar3 * 0x10);
        if (*pdVar1 <= param_3 && param_3 != *pdVar1) {
          dVar4 = (double)FUN_0040af10((param_3 - *pdVar2) / dVar5);
          param_3 = param_3 - dVar4 * dVar5;
        }
        pdVar2 = *(double **)(param_4 + 0x17);
        if (*pdVar2 <= param_3) {
          iVar3 = *(int *)(param_4 + 0x13);
          if (param_3 < pdVar2[(longlong)iVar3 * 2 + -2] ||
              param_3 == pdVar2[(longlong)iVar3 * 2 + -2]) {
            iVar3 = FUN_016dc0e0(pdVar2,iVar3,param_3);
            dVar5 = ((param_3 -
                     *(double *)(*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)iVar3 * 0x10)) *
                    (*(double *)(*(longlong *)(param_4 + 0x17) + -8 + (longlong)(iVar3 + 1) * 0x10)
                    - *(double *)(*(longlong *)(param_4 + 0x17) + -8 + (longlong)iVar3 * 0x10))) /
                    (*(double *)
                      (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)(iVar3 + 1) * 0x10) -
                    *(double *)(*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)iVar3 * 0x10)) +
                    *(double *)(*(longlong *)(param_4 + 0x17) + -8 + (longlong)iVar3 * 0x10);
          }
          else {
            dVar5 = *(double *)(*(longlong *)(param_4 + 0x17) + -8 + (longlong)iVar3 * 0x10);
          }
        }
        else {
          dVar5 = pdVar2[1];
        }
      }
    }
  }
  else {
    dVar5 = 0.0;
  }
  return dVar5;
}

