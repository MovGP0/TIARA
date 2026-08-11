/* Ghidra address: 00f58210 */
/* Ghidra symbol: FUN_00f58210 */


void FUN_00f58210(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                 char param_5,double param_6,double param_7,char param_8,double param_9,
                 double param_10,double param_11,char *param_12)

{
  char cVar1;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar2;
  
  param_12[0x31] = param_5;
  uVar3 = FUN_00b90620(param_10,1.0 / *(double *)(param_2 + 0x440));
  dVar4 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  uVar3 = FUN_00b90620(param_11,1.0 / *(double *)(param_2 + 0x440));
  dVar5 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  uVar3 = FUN_016e9e80(param_1,1);
  cVar1 = (char)uVar3 + '\x01';
  uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar1);
  *param_12 = cVar1;
  if (param_10 <= 1e+29 || 1e-29 <= param_11) {
    if (param_11 < 1e-29) {
      FUN_016ebdd0(param_1,uVar2 & 0xffffffff,param_3,param_4,1);
      if (param_12[0x31] == '\x01') {
        if (1e-29 <= param_11) {
          *(double *)(param_12 + 8) = dVar4;
          *(double *)(param_12 + 0x10) = dVar5;
          dVar4 = dVar5;
        }
        else {
          *(double *)(param_12 + 8) = dVar4;
          param_12[0x10] = '\0';
          param_12[0x11] = '\0';
          param_12[0x12] = '\0';
          param_12[0x13] = '\0';
          param_12[0x14] = '\0';
          param_12[0x15] = '\0';
          param_12[0x16] = '\0';
          param_12[0x17] = '\0';
          dVar4 = 0.0;
        }
      }
      else {
        *(double *)(param_12 + 8) = dVar4;
        *(double *)(param_12 + 0x10) = dVar5;
      }
    }
    else {
      FUN_016ebe60(param_1,uVar2 & 0xffffffff,param_3,param_4,1);
      if (param_12[0x31] == '\0') {
        if (param_10 <= 1e+29) {
          *(double *)(param_12 + 8) = 1.0 / dVar4;
          *(double *)(param_12 + 0x10) = 1.0 / dVar5;
          dVar4 = 1.0 / dVar4;
        }
        else {
          param_12[8] = '\0';
          param_12[9] = '\0';
          param_12[10] = '\0';
          param_12[0xb] = '\0';
          param_12[0xc] = '\0';
          param_12[0xd] = '\0';
          param_12[0xe] = '\0';
          param_12[0xf] = '\0';
          *(double *)(param_12 + 0x10) = 1.0 / dVar5;
          dVar4 = 0.0;
        }
      }
      else {
        *(double *)(param_12 + 8) = 1.0 / dVar4;
        *(double *)(param_12 + 0x10) = 1.0 / dVar5;
        dVar4 = 1.0 / dVar5;
      }
    }
  }
  else if (param_12[0x31] == '\0') {
    FUN_016ebe60(param_1,uVar2 & 0xffffffff,param_3,param_4,1);
    param_12[8] = '\0';
    param_12[9] = '\0';
    param_12[10] = '\0';
    param_12[0xb] = '\0';
    param_12[0xc] = '\0';
    param_12[0xd] = '\0';
    param_12[0xe] = '\0';
    param_12[0xf] = '\0';
    param_12[0x10] = '\0';
    param_12[0x11] = '\0';
    param_12[0x12] = '\0';
    param_12[0x13] = '\0';
    param_12[0x14] = 'e';
    param_12[0x15] = -0x33;
    param_12[0x16] = -0x33;
    param_12[0x17] = 'A';
    dVar4 = 0.0;
  }
  else {
    FUN_016ebdd0(param_1,uVar2 & 0xffffffff,param_3,param_4,1);
    param_12[8] = '\0';
    param_12[9] = '\0';
    param_12[10] = '\0';
    param_12[0xb] = '\0';
    param_12[0xc] = 'e';
    param_12[0xd] = -0x33;
    param_12[0xe] = -0x33;
    param_12[0xf] = 'A';
    param_12[0x10] = '\0';
    param_12[0x11] = '\0';
    param_12[0x12] = '\0';
    param_12[0x13] = '\0';
    param_12[0x14] = '\0';
    param_12[0x15] = '\0';
    param_12[0x16] = '\0';
    param_12[0x17] = '\0';
    dVar4 = 0.0;
  }
  param_12[0x30] = '\x02';
  if (param_8 == '\0') {
    param_12[0x28] = '\0';
    param_12[0x29] = '\0';
    param_12[0x2a] = '\0';
    param_12[0x2b] = '\0';
    param_12[0x2c] = '\0';
    param_12[0x2d] = '\0';
    param_12[0x2e] = '\0';
    param_12[0x2f] = '\0';
  }
  else {
    if (param_9 < 0.0) {
      param_9 = 0.0;
    }
    *(double *)(param_12 + 0x28) = param_9;
    if (param_9 < param_6) {
      param_6 = param_9;
    }
    if (param_9 < param_7) {
      param_7 = param_9;
    }
  }
  if (param_6 < 0.0) {
    param_6 = 0.0;
  }
  if (param_7 < 0.0) {
    param_7 = 0.0;
  }
  *(double *)(param_12 + 0x18) = param_6;
  *(double *)(param_12 + 0x20) = param_7;
  FUN_016ed320(param_1,*param_12,0,dVar4,0);
  return;
}

