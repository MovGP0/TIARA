/* Ghidra address: 00e6adb0 */
/* Ghidra symbol: FUN_00e6adb0 */


void FUN_00e6adb0(double param_1,int param_2,undefined4 param_3,undefined4 param_4,double param_5,
                 double param_6,double param_7,undefined8 param_8,double param_9,int param_10,
                 double *param_11)

{
  double dVar1;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40 [5];
  
  dVar1 = 0.0;
  local_60 = 0.0;
  local_58 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  local_40[0] = 0.0;
  if (param_2 < 9) {
    FUN_00e6a900(param_1,param_4,&local_58,&local_50,&local_48,local_40);
    if (param_10 == 1) {
      if (local_48 == 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = (param_6 * param_7) / (param_5 * local_48);
      }
    }
    else if (local_58 == 0.0) {
      dVar1 = 0.0;
    }
    else {
      dVar1 = (param_6 * param_7) / (param_5 * local_58);
    }
  }
  if (param_2 < 6) {
    if (param_2 == 5) {
      if (param_10 == 1) {
        FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
      }
      else {
        local_60 = (param_6 * param_9) / (param_5 * local_50);
      }
    }
    else if (param_2 < 3) {
      if (param_2 == 2) {
        if (param_10 == 1) {
          FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
        }
        else {
          FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
        }
      }
      else if (param_2 == 0) {
        if (param_10 == 1) {
          FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
        }
        else {
          FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
        }
      }
      else if (param_2 == 1) {
        if (param_10 == 1) {
          FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
        }
        else {
          FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
        }
      }
    }
    else if (param_2 == 3) {
      if (param_10 == 1) {
        FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
      }
      else {
        FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
      }
    }
    else if (param_2 == 4) {
      if (param_10 == 1) {
        FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_40[0],param_3,1,&local_60);
      }
      else {
        local_60 = (param_6 * param_9) / param_5;
      }
    }
  }
  else if (param_2 < 9) {
    if (param_2 == 8) {
      local_60 = (param_6 * param_9) / param_5;
    }
    else if (param_2 == 6) {
      if (param_10 == 1) {
        local_60 = (param_6 * param_9) / param_5;
      }
      else {
        FUN_00e6aa60(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
      }
    }
    else if (param_2 == 7) {
      if (param_10 == 1) {
        local_60 = (param_6 * param_9) / (param_5 * local_40[0]);
      }
      else {
        FUN_00e6ac20(param_5,param_6,param_7,param_8,param_9,local_50,param_3,0,&local_60);
      }
    }
  }
  else if (param_2 == 9) {
    if (param_10 == 1) {
      local_60 = (param_6 * 0.5 * param_7) / param_5;
      if (param_1 == 2.0) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = (param_6 * param_7) / (param_5 * (param_1 - 2.0));
      }
    }
    else {
      local_60 = 0.0;
      dVar1 = (param_6 * param_7) / (param_5 * param_1);
    }
  }
  else if (param_2 == 10) {
    if (param_10 == 1) {
      local_60 = 0.0;
      dVar1 = (param_6 * param_7) / (param_5 * param_1);
    }
    else {
      local_60 = (param_6 * 0.5 * param_7) / param_5;
      if (param_1 == 2.0) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = (param_6 * param_7) / (param_5 * (param_1 - 2.0));
      }
    }
  }
  if (0.0 < dVar1) {
    if (0.0 < local_60) {
      *param_11 = (dVar1 * local_60) / (dVar1 + local_60);
    }
    else {
      *param_11 = dVar1;
    }
  }
  else {
    *param_11 = local_60;
  }
  return;
}

