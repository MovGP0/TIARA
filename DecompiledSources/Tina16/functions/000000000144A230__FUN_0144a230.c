/* Ghidra address: 0144a230 */
/* Ghidra symbol: FUN_0144a230 */


void FUN_0144a230(double *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = param_2 + -1;
  if (0 < iVar3) {
    do {
      iVar4 = 1;
      pdVar5 = param_1;
      iVar7 = iVar3;
      if (0 < iVar3) {
        do {
          lVar6 = (longlong)(iVar4 + 1);
          if (param_1[lVar6 * 2 + -2] <= *pdVar5 && *pdVar5 != param_1[lVar6 * 2 + -2]) {
            dVar1 = *pdVar5;
            dVar2 = pdVar5[1];
            *pdVar5 = param_1[lVar6 * 2 + -2];
            pdVar5[1] = param_1[lVar6 * 2 + -1];
            param_1[lVar6 * 2 + -2] = dVar1;
            param_1[lVar6 * 2 + -1] = dVar2;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
          pdVar5 = pdVar5 + 2;
        } while (iVar7 != 0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 1;
  if (1 < param_2) {
    do {
      if (iVar3 < param_2) {
        if ((param_1[(longlong)iVar3 * 2 + -2] == param_1[(longlong)(iVar3 + 1) * 2 + -2]) &&
           (param_1[(longlong)iVar3 * 2 + -1] == param_1[(longlong)(iVar3 + 1) * 2 + -1]))
        goto LAB_0144a3c9;
        dVar1 = param_1[(longlong)iVar3 * 2 + -2];
        dVar2 = param_1[(longlong)iVar3 * 2 + -1];
        iVar7 = iVar3 + 1;
        if (iVar7 <= param_2 + -1) {
          iVar4 = ((param_2 + -1) - iVar7) + 1;
          pdVar5 = param_1 + (longlong)iVar7 * 2 + -2;
          do {
            *pdVar5 = param_1[(longlong)(iVar7 + 1) * 2 + -2];
            pdVar5[1] = param_1[(longlong)(iVar7 + 1) * 2 + -1];
            iVar7 = iVar7 + 1;
            pdVar5 = pdVar5 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        param_1[(longlong)param_2 * 2 + -2] = dVar1;
        param_1[(longlong)param_2 * 2 + -1] = dVar2;
        param_2 = param_2 + -1;
      }
      else {
LAB_0144a3c9:
        for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
          if ((param_1[(longlong)iVar3 * 2 + -2] != param_1[(longlong)(iVar3 + 1) * 2 + -2]) ||
             (param_1[(longlong)iVar3 * 2 + -1] != param_1[(longlong)(iVar3 + 1) * 2 + -1])) break;
        }
        iVar3 = iVar3 + 1;
      }
    } while (iVar3 < param_2);
  }
  return;
}

