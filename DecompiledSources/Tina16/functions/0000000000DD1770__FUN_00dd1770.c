/* Ghidra address: 00dd1770 */
/* Ghidra symbol: FUN_00dd1770 */


double FUN_00dd1770(double param_1,double *param_2,byte param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  double adStack_50 [7];
  
  if (param_3 == 1) {
    adStack_50[4] = DAT_01ed6370;
    adStack_50[5] = (double)DAT_01ed6378;
    adStack_50[6] = DAT_01ed6380;
    adStack_50[1] = DAT_01ed6388;
    adStack_50[2] = (double)DAT_01ed6390;
    adStack_50[3] = DAT_01ed6398;
  }
  else if ((param_3 == 2) || ((byte)(param_3 - 6) < 3)) {
    adStack_50[4] = DAT_01ed6370;
    adStack_50[5] = (double)DAT_01ed6378;
    adStack_50[6] = DAT_01ed6380;
    adStack_50[1] = DAT_01ed6388;
    adStack_50[2] = (double)DAT_01ed6390;
    adStack_50[3] = DAT_01ed6398;
  }
  if (param_3 < 0x10) {
    bVar2 = ((int)CONCAT62((int6)((ulonglong)param_4 >> 0x10),1) << (param_3 & 0x1f) & 0x1c6U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (adStack_50[4] < param_1) {
      if (param_1 < adStack_50[6]) {
        iVar1 = 2;
        while (adStack_50[(longlong)iVar1 + 3] <= param_1 &&
               param_1 != adStack_50[(longlong)iVar1 + 3]) {
          iVar1 = iVar1 + 1;
        }
        *param_2 = (adStack_50[iVar1] - adStack_50[iVar1 + -1]) /
                   (adStack_50[(longlong)iVar1 + 3] - adStack_50[(longlong)(iVar1 + -1) + 3]);
        adStack_50[1] =
             adStack_50[iVar1 + -1] + (param_1 - adStack_50[(longlong)(iVar1 + -1) + 3]) * *param_2;
      }
      else {
        *param_2 = 0.0;
        adStack_50[1] = adStack_50[3];
      }
    }
    else {
      *param_2 = 0.0;
    }
  }
  else {
    adStack_50[1] = (double)FUN_00dd1640();
  }
  return adStack_50[1];
}

