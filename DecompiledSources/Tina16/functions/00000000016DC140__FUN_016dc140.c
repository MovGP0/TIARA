/* Ghidra address: 016dc140 */
/* Ghidra symbol: FUN_016dc140 */


double FUN_016dc140(longlong param_1,char param_2,double param_3,int *param_4)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_R8;
  double dVar4;
  double dVar5;
  
  if (param_2 == '\x06') {
    if (*(longlong *)(param_4 + 2) == 0) {
      dVar5 = 0.0;
    }
    else if (*param_4 < 2) {
      dVar5 = 0.0;
    }
    else {
      if (0 < param_4[1]) {
        dVar5 = *(double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)param_4[1] * 0x10);
        dVar4 = (double)FUN_00b90620(*(double *)
                                      (*(longlong *)(param_4 + 2) + -0x10 +
                                      (longlong)*param_4 * 0x10) - dVar5,
                                     *(undefined8 *)(param_1 + 0x378),in_R8,param_4,
                                     *(undefined8 *)param_4,*(undefined8 *)(param_4 + 2),
                                     *(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 6));
        pdVar1 = (double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)*param_4 * 0x10);
        if (*pdVar1 <= param_3 && param_3 != *pdVar1) {
          dVar5 = (double)FUN_0040af10((param_3 - dVar5) / dVar4);
          param_3 = param_3 - dVar5 * dVar4;
        }
      }
      pdVar1 = *(double **)(param_4 + 2);
      if (*pdVar1 <= param_3) {
        iVar2 = *param_4;
        if (param_3 < pdVar1[(longlong)iVar2 * 2 + -2] ||
            param_3 == pdVar1[(longlong)iVar2 * 2 + -2]) {
          iVar2 = FUN_016dc0e0(pdVar1,iVar2,param_3);
          lVar3 = (longlong)iVar2;
          dVar5 = (double)FUN_00b90620(*(double *)
                                        (*(longlong *)(param_4 + 2) + -0x10 +
                                        (longlong)(iVar2 + 1) * 0x10) -
                                       *(double *)
                                        (*(longlong *)(param_4 + 2) + -0x10 + lVar3 * 0x10),
                                       *(undefined8 *)(param_1 + 0x378));
          dVar5 = ((param_3 - *(double *)(*(longlong *)(param_4 + 2) + -0x10 + lVar3 * 0x10)) *
                  (*(double *)(*(longlong *)(param_4 + 2) + -8 + (longlong)(iVar2 + 1) * 0x10) -
                  *(double *)(*(longlong *)(param_4 + 2) + -8 + lVar3 * 0x10))) / dVar5 +
                  *(double *)(*(longlong *)(param_4 + 2) + -8 + lVar3 * 0x10);
        }
        else {
          dVar5 = *(double *)(*(longlong *)(param_4 + 2) + -8 + (longlong)iVar2 * 0x10);
        }
      }
      else {
        dVar5 = pdVar1[1];
      }
    }
  }
  else {
    dVar5 = 0.0;
  }
  return dVar5;
}

