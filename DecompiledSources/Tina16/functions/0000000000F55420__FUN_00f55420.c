/* Ghidra address: 00f55420 */
/* Ghidra symbol: FUN_00f55420 */


void FUN_00f55420(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                 char param_5,double param_6,double param_7,char *param_8)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  cVar2 = FUN_016e9e80(param_1,2);
  *param_8 = cVar2;
  bVar1 = param_6 <= 1e+29;
  if (*PTR_DAT_020052b8 == '\0') {
    uVar3 = FUN_00b90620(param_6,1.0 / *(double *)(param_2 + 0x440));
    param_6 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  }
  else {
    uVar3 = FUN_00b90620(param_6,0x3cd203af9ee75616);
    param_6 = (double)FUN_00b90650(uVar3,0x430c6bf526340000);
  }
  uVar3 = FUN_00b90620(param_7,1.0 / *(double *)(param_2 + 0x440));
  dVar4 = (double)FUN_00b90650(uVar3,*(undefined8 *)(param_2 + 0x440));
  if (bVar1 || 1e-29 <= param_7) {
    if (param_7 < 1e-29) {
      FUN_016ebdd0(param_1,*param_8 + '\x01',param_3,param_4,1);
      dVar5 = param_6;
      if ((param_5 == '\x01') && (dVar5 = dVar4, param_7 < 1e-29)) {
        dVar5 = 0.0;
      }
      *(double *)(param_8 + 8) = dVar5;
    }
    else {
      FUN_016ebe60(param_1,*param_8 + '\x01',param_3,param_4,1);
      if (param_5 == '\0') {
        if (bVar1) {
          dVar5 = 1.0 / param_6;
          *(double *)(param_8 + 8) = param_6;
        }
        else {
          dVar5 = 0.0;
          builtin_strncpy(param_8 + 8,"ꌠ9Y>)F",8);
        }
      }
      else {
        dVar5 = 1.0 / dVar4;
        *(double *)(param_8 + 8) = dVar4;
      }
    }
  }
  else if (param_5 == '\0') {
    FUN_016ebe60(param_1,*param_8 + '\x01',param_3,param_4,1);
    dVar5 = 0.0;
    builtin_strncpy(param_8 + 8,"ꌠ9Y>)F",8);
  }
  else {
    FUN_016ebdd0(param_1,*param_8 + '\x01',param_3,param_4,1);
    dVar5 = 0.0;
    param_8[8] = '\0';
    param_8[9] = '\0';
    param_8[10] = '\0';
    param_8[0xb] = '\0';
    param_8[0xc] = '\0';
    param_8[0xd] = '\0';
    param_8[0xe] = '\0';
    param_8[0xf] = '\0';
  }
  FUN_016ed1a0(param_1,*param_8 + '\x02',param_3,param_4);
  FUN_016ed320(param_1,*param_8 + '\x01',0,dVar5,0);
  return;
}

