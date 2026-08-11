/* Ghidra address: 00daab50 */
/* Ghidra symbol: FUN_00daab50 */


void FUN_00daab50(undefined8 param_1,longlong param_2,undefined4 param_3,char param_4,double param_5
                 ,double param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11,char param_12,double *param_13,double *param_14,double *param_15)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  *param_13 = (param_10 - param_9) / (param_7 - param_6);
  dVar3 = param_6 + param_8;
  dVar4 = param_7 + param_8;
  dVar5 = param_7 - param_8;
  param_8 = param_6 - param_8;
  if (param_12 != '\0') {
    param_11 = param_11 * (param_7 - param_6);
  }
  if (((param_4 == '\x06') && ((*(byte *)(param_2 + 0x88) & 0x40) == 0)) ||
     ((param_4 == '\x01' && (0 < *(int *)(param_2 + 0x498))))) {
    FUN_016eebe0(param_1,param_2 + 0x1b8,0,param_3,0);
    dVar2 = (double)FUN_016eebe0(param_1,param_2 + 0x1b8,1,param_3,0);
    bVar1 = 0.0 < dVar2;
  }
  else {
    bVar1 = param_5 < dVar4 + param_11;
    FUN_016eeca0(param_1,param_2 + 0x1b8,1,param_3,(double)bVar1,0);
  }
  if (bVar1) {
    if (dVar3 - param_11 < param_5) {
      if (dVar3 + param_11 < param_5) {
        if (dVar4 - param_11 < param_5) {
          if (dVar4 + param_11 < param_5) {
            *param_14 = param_10;
            *param_15 = 0.0;
            bVar1 = false;
          }
          else {
            FUN_00daa300(param_5,dVar4,param_10,param_11,*param_13,0,param_14,param_15);
          }
        }
        else {
          *param_14 = (param_5 - dVar3) * *param_13 + param_9;
          *param_15 = *param_13;
        }
      }
      else {
        FUN_00daa300(param_5,dVar3,param_9,param_11,0,*param_13,param_14,param_15);
      }
    }
    else {
      *param_14 = param_9;
      *param_15 = 0.0;
    }
  }
  else if (param_5 < dVar5 + param_11) {
    if (param_5 < dVar5 - param_11) {
      if (param_5 < param_8 + param_11) {
        if (param_5 < param_8 - param_11) {
          *param_14 = param_9;
          *param_15 = 0.0;
          bVar1 = true;
        }
        else {
          FUN_00daa300(param_5,param_8,param_9,param_11,0,*param_13,param_14,param_15);
        }
      }
      else {
        *param_14 = (param_5 - param_8) * *param_13 + param_9;
        *param_15 = *param_13;
      }
    }
    else {
      FUN_00daa300(param_5,dVar5,param_10,param_11,*param_13,0,param_14,param_15);
    }
  }
  else {
    *param_14 = param_10;
    *param_15 = 0.0;
  }
  FUN_016eeca0(param_1,param_2 + 0x1b8,0,param_3,(double)bVar1,0);
  return;
}

