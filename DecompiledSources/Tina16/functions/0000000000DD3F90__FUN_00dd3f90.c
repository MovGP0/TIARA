/* Ghidra address: 00dd3f90 */
/* Ghidra symbol: FUN_00dd3f90 */


void FUN_00dd3f90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 double param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40 [5];
  
  FUN_00dd0b90(param_1[6],&local_48,local_40);
  FUN_00dd0a10(param_1[6],&local_50,&local_58,0);
  FUN_00dd0a10(param_1[6],&local_60,&local_68,1);
  if (param_1[0x11] == '\0') {
    dVar4 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
    dVar2 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
  }
  else {
    if (*(double *)(param_1 + 0x18) <= 1e+29) {
      dVar4 = *(double *)(param_1 + 0x18);
      lVar1 = FUN_0041f930();
      local_60 = *(double *)(lVar1 + 0x280);
    }
    else {
      dVar4 = *(double *)(&DAT_01ed5618 + (ulonglong)(byte)param_1[6] * 0x18);
    }
    dVar2 = *(double *)(&DAT_01ed5620 + (ulonglong)(byte)param_1[6] * 0x18);
  }
  dVar3 = dVar2;
  if ((local_40[0] <= param_4) && (dVar3 = dVar4, param_4 <= local_48)) {
    dVar3 = (param_4 - local_40[0]) * ((dVar4 - dVar2) / (local_48 - local_40[0])) + dVar2;
  }
  dVar2 = (local_60 - local_68) / (local_50 - local_58);
  dVar4 = local_68;
  if ((local_58 < param_4) && (dVar4 = local_60, param_4 < local_50)) {
    dVar4 = (param_4 - local_58) * dVar2 + local_68;
  }
  FUN_016ed320(param_2,*param_1,dVar4 - param_5 * dVar2,dVar3,0);
  return;
}

