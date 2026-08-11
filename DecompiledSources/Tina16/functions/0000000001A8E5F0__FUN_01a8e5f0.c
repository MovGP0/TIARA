/* Ghidra address: 01a8e5f0 */
/* Ghidra symbol: FUN_01a8e5f0 */


double * FUN_01a8e5f0(double *param_1,double *param_2,double param_3,double *param_4,double param_5,
                     double param_6,double param_7,double param_8,double param_9,double param_10,
                     char param_11,undefined1 *param_12)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar1 = *param_4;
  dVar2 = param_4[1];
  *param_12 = param_5 - param_3 <= 1e-05;
  dVar6 = ((dVar1 * dVar1 - dVar4 * dVar4) + (dVar5 - dVar2) * (dVar5 - dVar2) + param_3 * param_3)
          - param_5 * param_5;
  dVar7 = (dVar4 - dVar1) * (dVar4 - dVar1) * 4.0 + (dVar5 - dVar2) * (dVar5 - dVar2) * 4.0;
  dVar8 = (dVar4 - dVar1) * 4.0 * dVar6 - dVar4 * 8.0 * (dVar2 - dVar5) * (dVar2 - dVar5);
  dVar6 = dVar6 * dVar6 -
          (dVar5 - dVar2) * (dVar5 - dVar2) * 4.0 * (param_3 * param_3 - dVar4 * dVar4);
  if (0.0 <= dVar8 * dVar8 - dVar7 * 4.0 * dVar6) {
    dVar6 = (double)FUN_0040c760(dVar8 * dVar8 - dVar7 * 4.0 * dVar6);
    *param_1 = (-dVar8 - dVar6) / (dVar7 * 2.0);
    dVar4 = (double)FUN_0040c760(param_3 * param_3 - (*param_1 - dVar4) * (*param_1 - dVar4));
    param_1[1] = dVar4 + dVar5;
    if (dVar2 < 0.0) {
      param_1[1] = -param_1[1];
    }
    cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,*param_1,param_1[1]);
    if (cVar3 == '\0') {
      *param_12 = 0;
      *param_1 = -1000.0;
      param_1[1] = -1000.0;
      if (0.0 <= param_9) {
        if (param_11 == '\0') {
          dVar4 = param_9 + param_10;
          if ((dVar4 - dVar2) * (dVar4 - dVar2) < param_5 * param_5) {
            dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar2) * (dVar4 - dVar2));
            cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar5 + dVar1,dVar4);
            if (cVar3 != '\0') {
              *param_1 = dVar5 + dVar1;
              param_1[1] = dVar4;
              return param_1;
            }
            dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar2) * (dVar4 - dVar2));
            cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar5 + dVar1,dVar4);
            if (cVar3 != '\0') {
              *param_1 = -dVar5 + dVar1;
              param_1[1] = dVar4;
              return param_1;
            }
          }
          param_10 = param_8 - param_10;
          if (param_5 * param_5 <= (param_10 - dVar1) * (param_10 - dVar1)) {
            return param_1;
          }
          dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar1) * (param_10 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_10,dVar4 + dVar2);
          if (cVar3 != '\0') {
            *param_1 = param_10;
            param_1[1] = dVar4 + dVar2;
            return param_1;
          }
          dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar1) * (param_10 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_10,-dVar4 + dVar2);
          if (cVar3 == '\0') {
            return param_1;
          }
          *param_1 = param_10;
          param_1[1] = -dVar4 + dVar2;
          return param_1;
        }
        dVar4 = param_6 + param_10;
        if ((dVar4 - dVar1) * (dVar4 - dVar1) < param_5 * param_5) {
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar1) * (dVar4 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4,dVar5 + dVar2);
          if (cVar3 != '\0') {
            *param_1 = dVar4;
            param_1[1] = dVar5 + dVar2;
            return param_1;
          }
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar1) * (dVar4 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4,-dVar5 + dVar2);
          if (cVar3 != '\0') {
            *param_1 = dVar4;
            param_1[1] = -dVar5 + dVar2;
            return param_1;
          }
        }
        param_10 = param_7 - param_10;
        if ((param_10 - dVar2) * (param_10 - dVar2) < param_5 * param_5) {
          dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar2) * (param_10 - dVar2));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4 + dVar1,param_10);
          if (cVar3 == '\0') {
            dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar2) * (param_10 - dVar2)
                                        );
            cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar4 + dVar1,param_10);
            if (cVar3 != '\0') {
              *param_1 = -dVar4 + dVar1;
              param_1[1] = param_10;
            }
          }
          else {
            *param_1 = dVar4 + dVar1;
            param_1[1] = param_10;
          }
        }
      }
      else if (param_11 == '\0') {
        dVar4 = param_6 + param_10;
        if ((dVar4 - dVar1) * (dVar4 - dVar1) < param_5 * param_5) {
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar1) * (dVar4 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4,dVar5 + dVar2);
          if (cVar3 != '\0') {
            *param_1 = dVar4;
            param_1[1] = dVar5 + dVar2;
            return param_1;
          }
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar1) * (dVar4 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4,-dVar5 + dVar2);
          if (cVar3 != '\0') {
            *param_1 = dVar4;
            param_1[1] = -dVar5 + dVar2;
            return param_1;
          }
        }
        param_10 = param_7 - param_10;
        if ((param_10 - dVar2) * (param_10 - dVar2) < param_5 * param_5) {
          dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar2) * (param_10 - dVar2));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar4 + dVar1,param_10);
          if (cVar3 == '\0') {
            dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar2) * (param_10 - dVar2)
                                        );
            cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar4 + dVar1,param_10);
            if (cVar3 != '\0') {
              *param_1 = -dVar4 + dVar1;
              param_1[1] = param_10;
            }
          }
          else {
            *param_1 = dVar4 + dVar1;
            param_1[1] = param_10;
          }
        }
      }
      else {
        dVar4 = param_9 + param_10;
        if ((dVar4 - dVar2) * (dVar4 - dVar2) < param_5 * param_5) {
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar2) * (dVar4 - dVar2));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar5 + dVar1,dVar4);
          if (cVar3 != '\0') {
            *param_1 = dVar5 + dVar1;
            param_1[1] = dVar4;
            return param_1;
          }
          dVar5 = (double)FUN_0040c760(param_5 * param_5 - (dVar4 - dVar2) * (dVar4 - dVar2));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar5 + dVar1,dVar4);
          if (cVar3 != '\0') {
            *param_1 = -dVar5 + dVar1;
            param_1[1] = dVar4;
            return param_1;
          }
        }
        param_10 = param_8 - param_10;
        if ((param_10 - dVar1) * (param_10 - dVar1) < param_5 * param_5) {
          dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar1) * (param_10 - dVar1));
          cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_10,dVar4 + dVar2);
          if (cVar3 == '\0') {
            dVar4 = (double)FUN_0040c760(param_5 * param_5 - (param_10 - dVar1) * (param_10 - dVar1)
                                        );
            cVar3 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_10,-dVar4 + dVar2);
            if (cVar3 != '\0') {
              *param_1 = param_10;
              param_1[1] = -dVar4 + dVar2;
            }
          }
          else {
            *param_1 = param_10;
            param_1[1] = dVar4 + dVar2;
          }
        }
      }
    }
  }
  else {
    *param_1 = -1000.0;
    param_1[1] = -1000.0;
  }
  return param_1;
}

