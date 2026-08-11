/* Ghidra address: 00dff9c0 */
/* Ghidra symbol: FUN_00dff9c0 */


double FUN_00dff9c0(double *param_1,double *param_2,longlong param_3,int param_4,int param_5,
                   int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (param_6 == 0) {
    if (param_5 == 1) {
      dVar6 = *param_1;
      dVar7 = 1.0;
      param_4 = param_4 + -1;
      iVar1 = 1;
      if (0 < param_4) {
        do {
          dVar7 = dVar7 * *param_2;
          if (param_1[iVar1] != 0.0) {
            dVar6 = dVar6 + param_1[iVar1] * dVar7;
          }
          iVar1 = iVar1 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else {
      dVar6 = *param_1;
      if (1 < param_4) {
        FUN_0040d200(param_3,(longlong)(param_5 * 2),0);
        param_4 = param_4 + -1;
        iVar1 = 1;
        if (0 < param_4) {
          do {
            FUN_00dff7c0(param_3,param_5);
            if (param_1[iVar1] != 0.0) {
              dVar7 = 1.0;
              iVar2 = 0;
              iVar3 = param_5;
              if (-1 < param_5 + -1) {
                do {
                  dVar5 = (double)FUN_00dff8b0(param_2[iVar2],
                                               *(undefined2 *)(param_3 + (longlong)iVar2 * 2));
                  dVar7 = dVar7 * dVar5;
                  iVar2 = iVar2 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              dVar6 = dVar6 + dVar7 * param_1[iVar1];
            }
            iVar1 = iVar1 + 1;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
    }
  }
  else {
    dVar7 = 0.0;
    dVar6 = 0.0;
    if (1 < param_4) {
      FUN_0040d200(param_3,(longlong)(param_5 * 2),0);
      param_4 = param_4 + -1;
      iVar1 = 1;
      if (0 < param_4) {
        do {
          FUN_00dff7c0(param_3,param_5);
          dVar6 = dVar7;
          if ((*(short *)(param_3 + (longlong)(param_6 + -1) * 2) != 0) && (param_1[iVar1] != 0.0))
          {
            dVar6 = 1.0;
            iVar2 = 0;
            iVar3 = param_5;
            if (-1 < param_5 + -1) {
              do {
                if (iVar2 == param_6 + -1) {
                  lVar4 = (longlong)iVar2;
                  dVar5 = (double)FUN_00dff8b0(param_2[lVar4],*(ushort *)(param_3 + lVar4 * 2) - 1);
                  dVar6 = dVar6 * dVar5 * (double)*(ushort *)(param_3 + lVar4 * 2);
                }
                else {
                  dVar5 = (double)FUN_00dff8b0(param_2[iVar2],
                                               *(undefined2 *)(param_3 + (longlong)iVar2 * 2));
                  dVar6 = dVar6 * dVar5;
                }
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            dVar6 = dVar7 + dVar6 * param_1[iVar1];
          }
          iVar1 = iVar1 + 1;
          param_4 = param_4 + -1;
          dVar7 = dVar6;
        } while (param_4 != 0);
      }
    }
  }
  return dVar6;
}

