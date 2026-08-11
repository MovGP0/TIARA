/* Ghidra address: 00dad070 */
/* Ghidra symbol: FUN_00dad070 */


double FUN_00dad070(double param_1,double *param_2,int param_3,undefined8 param_4,double *param_5,
                   int *param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_70 [9];
  
  iVar4 = param_3 / 2;
  if (iVar4 < 2) {
    if (0 < iVar4) {
      *param_5 = 0.0;
      local_70[0] = param_2[1];
    }
  }
  else if ((param_2[2] + *param_2) / 2.0 < param_1) {
    iVar1 = (iVar4 + -1) * 2;
    iVar5 = iVar4 + -2;
    iVar2 = iVar5 * 2;
    if (param_1 < (param_2[iVar1] + param_2[iVar2]) / 2.0) {
      iVar4 = 1;
      if (0 < iVar5) {
        do {
          iVar1 = iVar4 * 2;
          iVar2 = (iVar4 + 1) * 2;
          iVar3 = (iVar4 + -1) * 2;
          if (param_1 < (param_2[iVar2] + param_2[iVar1]) / 2.0) {
            if (param_2[iVar1] <= param_1) {
              *param_6 = iVar4 + 1;
            }
            else {
              *param_6 = iVar4;
            }
            dVar7 = (double)FUN_00b90620(param_7,param_2[iVar1] - param_2[iVar3]);
            dVar6 = (double)FUN_00b90620(param_7,param_2[iVar2] - param_2[iVar1]);
            if (dVar6 < dVar7) {
              dVar8 = (double)FUN_00dac070(param_4,dVar6,param_2[iVar1],param_7);
            }
            else {
              dVar8 = (double)FUN_00dac070(param_4,dVar7,param_2[iVar1],param_7);
            }
            if (param_1 < param_2[iVar1] - dVar8) {
              *param_5 = (param_2[iVar1 + 1] - param_2[iVar3 + 1]) / dVar7;
              return param_2[iVar1 + 1] + (param_1 - param_2[iVar1]) * *param_5;
            }
            if (param_2[iVar1] + dVar8 <= param_1) {
              *param_5 = (param_2[iVar2 + 1] - param_2[iVar1 + 1]) / dVar6;
              return param_2[iVar1 + 1] + (param_1 - param_2[iVar1]) * *param_5;
            }
            iVar4 = iVar1 + 1;
            FUN_00daa300(param_1,param_2[iVar1],param_2[iVar4],dVar8,
                         (param_2[iVar4] - param_2[iVar3 + 1]) / dVar7,
                         (param_2[iVar2 + 1] - param_2[iVar4]) / dVar6,local_70,param_5);
            if (param_8 != '\0') {
              return local_70[0];
            }
            if (param_2[iVar1] <= param_1) {
              dVar7 = (param_2[iVar2 + 1] - param_2[iVar4]) / dVar6;
            }
            else {
              dVar7 = (param_2[iVar4] - param_2[iVar3 + 1]) / dVar7;
            }
            return param_2[iVar4] + (param_1 - param_2[iVar1]) * dVar7;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (param_2[iVar1] <= param_1) {
        *param_6 = iVar4;
      }
      else {
        *param_6 = iVar4 + -1;
      }
      dVar6 = (double)FUN_00dac070(param_4,param_2[iVar1] - param_2[iVar2],param_2[iVar1],param_7);
      if (param_1 <= param_2[iVar1] + dVar6) {
        if (param_1 <= param_2[iVar1] - dVar6) {
          dVar6 = (double)FUN_00b90620(param_7,param_2[iVar1] - param_2[iVar2]);
          *param_5 = (param_2[iVar1 + 1] - param_2[iVar2 + 1]) / dVar6;
          local_70[0] = param_2[iVar1 + 1] + (param_1 - param_2[iVar1]) * *param_5;
        }
        else {
          iVar4 = iVar1 + 1;
          dVar7 = (double)FUN_00b90620(param_7,param_2[iVar1] - param_2[iVar2]);
          FUN_00daa300(param_1,param_2[iVar1],param_2[iVar4],dVar6,
                       (param_2[iVar4] - param_2[iVar2 + 1]) / dVar7,0,local_70,param_5);
          if (param_8 == '\0') {
            if (param_1 < param_2[iVar1] || param_1 == param_2[iVar1]) {
              dVar6 = (double)FUN_00b90620(param_7,param_2[iVar1] - param_2[iVar2]);
              local_70[0] = param_2[iVar4] +
                            (param_1 - param_2[iVar1]) *
                            ((param_2[iVar4] - param_2[iVar2 + 1]) / dVar6);
            }
            else {
              local_70[0] = param_2[iVar4];
            }
          }
        }
      }
      else {
        *param_5 = 0.0;
        local_70[0] = param_2[iVar1 + 1];
      }
    }
  }
  else {
    if (*param_2 <= param_1) {
      *param_6 = 1;
    }
    else {
      *param_6 = 0;
    }
    dVar6 = (double)FUN_00dac070(param_4,(longlong)param_3 % 2 & 0xffffffff,*param_2,param_7);
    if (*param_2 - dVar6 <= param_1) {
      if (*param_2 + dVar6 <= param_1) {
        dVar6 = (double)FUN_00b90620(param_7,param_2[2] - *param_2);
        *param_5 = (param_2[3] - param_2[1]) / dVar6;
        local_70[0] = param_2[1] + (param_1 - *param_2) * *param_5;
      }
      else {
        dVar7 = (double)FUN_00b90620(param_7,param_2[2] - *param_2);
        FUN_00daa300(param_1,*param_2,param_2[1],dVar6,0,(param_2[3] - param_2[1]) / dVar7,local_70,
                     param_5);
        if (param_8 == '\0') {
          if (*param_2 <= param_1) {
            dVar6 = (double)FUN_00b90620(param_7,param_2[2] - *param_2);
            local_70[0] = param_2[1] + (param_1 - *param_2) * ((param_2[3] - param_2[1]) / dVar6);
          }
          else {
            local_70[0] = param_2[1];
          }
        }
      }
    }
    else {
      *param_5 = 0.0;
      local_70[0] = param_2[1];
    }
  }
  return local_70[0];
}

