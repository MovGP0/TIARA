/* Ghidra address: 01a8f370 */
/* Ghidra symbol: FUN_01a8f370 */


double * FUN_01a8f370(double *param_1,double *param_2,double param_3,double *param_4,double *param_5
                     ,double param_6,double param_7,double param_8,double param_9,char param_10)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar2 = param_4[1];
  if (param_5[1] == dVar2) {
    param_1[1] = dVar2;
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_1[1] - dVar4) * (param_1[1] - dVar4));
    *param_1 = -dVar2 + dVar3;
    if (dVar4 < 0.0) {
      param_1[1] = -param_1[1];
    }
  }
  else {
    dVar5 = (*param_5 - *param_4) / (param_5[1] - dVar2);
    dVar2 = (*param_4 - dVar5 * dVar2) - dVar3;
    dVar6 = dVar5 * dVar5 + 1.0;
    dVar5 = dVar5 * 2.0 * dVar2 - dVar4 * 2.0;
    dVar2 = (dVar2 * dVar2 + dVar4 * dVar4) - param_3 * param_3;
    if (dVar5 * dVar5 - dVar6 * 4.0 * dVar2 < 0.0) {
      *param_1 = -1000.0;
      param_1[1] = -1000.0;
      return param_1;
    }
    dVar2 = (double)FUN_0040c760(dVar5 * dVar5 - dVar6 * 4.0 * dVar2);
    param_1[1] = (-dVar5 - dVar2) / (dVar6 * 2.0);
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_1[1] - dVar4) * (param_1[1] - dVar4));
    *param_1 = -dVar2 + dVar3;
    if (dVar4 < 0.0) {
      param_1[1] = -param_1[1];
    }
  }
  cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,*param_1,param_1[1]);
  if (cVar1 != '\0') {
    return param_1;
  }
  *param_1 = -1000.0;
  param_1[1] = -1000.0;
  if (param_9 < 0.0) {
    if (param_10 != '\0') {
      if ((param_9 - dVar4) * (param_9 - dVar4) < param_3 * param_3) {
        dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_9 - dVar4) * (param_9 - dVar4));
        cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar2 + dVar3,param_9);
        if (cVar1 != '\0') {
          *param_1 = dVar2 + dVar3;
          param_1[1] = param_9;
          return param_1;
        }
        dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_9 - dVar4) * (param_9 - dVar4));
        cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar2 + dVar3,param_9);
        if (cVar1 != '\0') {
          *param_1 = -dVar2 + dVar3;
          param_1[1] = param_9;
          return param_1;
        }
      }
      if ((param_8 - dVar3) * (param_8 - dVar3) < param_3 * param_3) {
        dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_8 - dVar3) * (param_8 - dVar3));
        cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_8,dVar2 + dVar4);
        if (cVar1 == '\0') {
          dVar3 = (double)FUN_0040c760(param_3 * param_3 - (param_8 - dVar3) * (param_8 - dVar3));
          cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_8,-dVar3 + dVar4);
          if (cVar1 != '\0') {
            *param_1 = param_8;
            param_1[1] = -dVar3 + dVar4;
          }
        }
        else {
          *param_1 = param_8;
          param_1[1] = dVar2 + dVar4;
        }
      }
      return param_1;
    }
    if ((param_6 - dVar3) * (param_6 - dVar3) < param_3 * param_3) {
      dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_6 - dVar3) * (param_6 - dVar3));
      cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_6,dVar2 + dVar4);
      if (cVar1 != '\0') {
        *param_1 = param_6;
        param_1[1] = dVar2 + dVar4;
        return param_1;
      }
      dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_6 - dVar3) * (param_6 - dVar3));
      cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_6,-dVar2 + dVar4);
      if (cVar1 != '\0') {
        *param_1 = param_6;
        param_1[1] = -dVar2 + dVar4;
        return param_1;
      }
    }
    if (param_3 * param_3 <= (param_7 - dVar4) * (param_7 - dVar4)) {
      return param_1;
    }
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_7 - dVar4) * (param_7 - dVar4));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar2 + dVar3,param_7);
    if (cVar1 != '\0') {
      *param_1 = dVar2 + dVar3;
      param_1[1] = param_7;
      return param_1;
    }
    dVar4 = (double)FUN_0040c760(param_3 * param_3 - (param_7 - dVar4) * (param_7 - dVar4));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar4 + dVar3,param_7);
    if (cVar1 == '\0') {
      return param_1;
    }
    *param_1 = -dVar4 + dVar3;
    param_1[1] = param_7;
    return param_1;
  }
  if (param_10 == '\0') {
    if ((param_9 - dVar4) * (param_9 - dVar4) < param_3 * param_3) {
      dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_9 - dVar4) * (param_9 - dVar4));
      cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar2 + dVar3,param_9);
      if (cVar1 != '\0') {
        *param_1 = dVar2 + dVar3;
        param_1[1] = param_9;
        return param_1;
      }
      dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_9 - dVar4) * (param_9 - dVar4));
      cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar2 + dVar3,param_9);
      if (cVar1 != '\0') {
        *param_1 = -dVar2 + dVar3;
        param_1[1] = param_9;
        return param_1;
      }
    }
    if (param_3 * param_3 <= (param_8 - dVar3) * (param_8 - dVar3)) {
      return param_1;
    }
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_8 - dVar3) * (param_8 - dVar3));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_8,dVar2 + dVar4);
    if (cVar1 != '\0') {
      *param_1 = param_8;
      param_1[1] = dVar2 + dVar4;
      return param_1;
    }
    dVar3 = (double)FUN_0040c760(param_3 * param_3 - (param_8 - dVar3) * (param_8 - dVar3));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_8,-dVar3 + dVar4);
    if (cVar1 == '\0') {
      return param_1;
    }
    *param_1 = param_8;
    param_1[1] = -dVar3 + dVar4;
    return param_1;
  }
  if ((param_6 - dVar3) * (param_6 - dVar3) < param_3 * param_3) {
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_6 - dVar3) * (param_6 - dVar3));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_6,dVar2 + dVar4);
    if (cVar1 != '\0') {
      *param_1 = param_6;
      param_1[1] = dVar2 + dVar4;
      return param_1;
    }
    dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_6 - dVar3) * (param_6 - dVar3));
    cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,param_6,-dVar2 + dVar4);
    if (cVar1 != '\0') {
      *param_1 = param_6;
      param_1[1] = -dVar2 + dVar4;
      return param_1;
    }
  }
  if (param_3 * param_3 <= (param_7 - dVar4) * (param_7 - dVar4)) {
    return param_1;
  }
  dVar2 = (double)FUN_0040c760(param_3 * param_3 - (param_7 - dVar4) * (param_7 - dVar4));
  cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,dVar2 + dVar3,param_7);
  if (cVar1 != '\0') {
    *param_1 = dVar2 + dVar3;
    param_1[1] = param_7;
    return param_1;
  }
  dVar4 = (double)FUN_0040c760(param_3 * param_3 - (param_7 - dVar4) * (param_7 - dVar4));
  cVar1 = FUN_01a8e5c0(param_6,param_7,param_8,param_9,-dVar4 + dVar3,param_7);
  if (cVar1 == '\0') {
    return param_1;
  }
  *param_1 = -dVar4 + dVar3;
  param_1[1] = param_7;
  return param_1;
}

