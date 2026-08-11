/* Ghidra address: 00dd1a10 */
/* Ghidra symbol: FUN_00dd1a10 */


double FUN_00dd1a10(double param_1,double *param_2,byte param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  double adStack_60 [9];
  
  if (param_3 == 1) {
    adStack_60[5] = DAT_01ed63a0;
    adStack_60[6] = (double)DAT_01ed63a8;
    adStack_60[7] = (double)DAT_01ed63b0;
    adStack_60[8] = DAT_01ed63b8;
    adStack_60[1] = DAT_01ed63c0;
    adStack_60[2] = (double)DAT_01ed63c8;
    adStack_60[3] = (double)DAT_01ed63d0;
    adStack_60[4] = DAT_01ed63d8;
  }
  else if ((param_3 == 2) || ((byte)(param_3 - 6) < 3)) {
    adStack_60[5] = DAT_01ed63a0;
    adStack_60[6] = (double)DAT_01ed63a8;
    adStack_60[7] = (double)DAT_01ed63b0;
    adStack_60[8] = DAT_01ed63b8;
    adStack_60[1] = DAT_01ed63c0;
    adStack_60[2] = (double)DAT_01ed63c8;
    adStack_60[3] = (double)DAT_01ed63d0;
    adStack_60[4] = DAT_01ed63d8;
  }
  if (param_3 < 0x10) {
    bVar2 = ((int)CONCAT62((int6)((ulonglong)param_4 >> 0x10),1) << (param_3 & 0x1f) & 0x1c6U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (adStack_60[5] < param_1) {
      if (param_1 < adStack_60[8]) {
        iVar1 = 2;
        while (adStack_60[(longlong)iVar1 + 4] <= param_1 &&
               param_1 != adStack_60[(longlong)iVar1 + 4]) {
          iVar1 = iVar1 + 1;
        }
        *param_2 = (adStack_60[iVar1] - adStack_60[iVar1 + -1]) /
                   (adStack_60[(longlong)iVar1 + 4] - adStack_60[(longlong)(iVar1 + -1) + 4]);
        adStack_60[1] =
             adStack_60[iVar1 + -1] + (param_1 - adStack_60[(longlong)(iVar1 + -1) + 4]) * *param_2;
      }
      else {
        *param_2 = 0.0;
        adStack_60[1] = adStack_60[4];
      }
    }
    else {
      *param_2 = 0.0;
    }
  }
  else {
    adStack_60[1] = (double)FUN_00dd18c0();
  }
  return adStack_60[1];
}

