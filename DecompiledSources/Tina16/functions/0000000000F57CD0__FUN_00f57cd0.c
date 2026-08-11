/* Ghidra address: 00f57cd0 */
/* Ghidra symbol: FUN_00f57cd0 */


ulonglong FUN_00f57cd0(undefined8 param_1,double param_2,double param_3,double param_4,
                      double param_5,undefined8 *param_6)

{
  undefined8 unaff_RSI;
  undefined7 uVar2;
  ulonglong uVar1;
  double dVar3;
  undefined8 uVar4;
  
  uVar2 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (param_5 <= 0.0) {
    if (param_4 <= param_3) {
      if (param_3 <= param_4) {
        uVar1 = CONCAT71(uVar2,2);
        *param_6 = 0;
      }
      else if (param_2 <= param_3) {
        if (param_2 <= param_4) {
          uVar1 = CONCAT71(uVar2,1);
          uVar4 = FUN_016ee160(param_1,param_2,0,param_4,param_3);
          *param_6 = uVar4;
        }
        else {
          uVar1 = 0;
          uVar4 = FUN_016ee160(param_1,param_2,param_4,param_3,0xbff0000000000000);
          *param_6 = uVar4;
        }
      }
      else {
        uVar1 = CONCAT71(uVar2,1);
        uVar4 = FUN_016ee160(param_1,param_2,param_3,0xbff0000000000000,0xbff0000000000000);
        *param_6 = uVar4;
      }
    }
    else if (param_2 <= param_4) {
      if (param_2 <= param_3) {
        uVar1 = 0;
        uVar4 = FUN_016ee160(param_1,param_2,0,param_3,param_4);
        *param_6 = uVar4;
      }
      else {
        uVar1 = CONCAT71(uVar2,1);
        uVar4 = FUN_016ee160(param_1,param_2,param_3,param_4,0xbff0000000000000);
        *param_6 = uVar4;
      }
    }
    else {
      uVar1 = 0;
      uVar4 = FUN_016ee160(param_1,param_2,param_4,0xbff0000000000000,0xbff0000000000000);
      *param_6 = uVar4;
    }
  }
  else {
    dVar3 = (double)FUN_0040af40(param_2 / param_5);
    dVar3 = dVar3 * param_5;
    if (param_4 <= param_3) {
      if (param_3 <= param_4) {
        uVar1 = CONCAT71(uVar2,2);
        *param_6 = 0;
      }
      else if (dVar3 <= param_3) {
        if (dVar3 <= param_4) {
          uVar1 = CONCAT71(uVar2,1);
          uVar4 = FUN_016ee160(param_1,dVar3,param_3 - param_5,param_4,param_3);
          *param_6 = uVar4;
        }
        else {
          uVar1 = 0;
          uVar4 = FUN_016ee160(param_1,dVar3,param_4,param_3,param_4 + param_5);
          *param_6 = uVar4;
        }
      }
      else {
        uVar1 = CONCAT71(uVar2,1);
        uVar4 = FUN_016ee160(param_1,dVar3,param_3,param_4 + param_5,param_3 + param_5);
        *param_6 = uVar4;
      }
    }
    else if (dVar3 <= param_4) {
      if (dVar3 <= param_3) {
        uVar1 = 0;
        uVar4 = FUN_016ee160(param_1,dVar3,param_4 - param_5,param_3,param_4);
        *param_6 = uVar4;
      }
      else {
        uVar1 = CONCAT71(uVar2,1);
        uVar4 = FUN_016ee160(param_1,dVar3,param_3,param_4,param_3 + param_5);
        *param_6 = uVar4;
      }
    }
    else {
      uVar1 = 0;
      uVar4 = FUN_016ee160(param_1,dVar3,param_4,param_3 + param_5,param_4 + param_5);
      *param_6 = uVar4;
    }
  }
  return uVar1 & 0xffffffff;
}

