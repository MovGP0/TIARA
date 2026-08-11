/* Ghidra address: 00dd0a10 */
/* Ghidra symbol: FUN_00dd0a10 */


void FUN_00dd0a10(byte param_1,undefined8 *param_2,double *param_3,char param_4)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  
  if (1 < (byte)(param_1 - 1)) {
    if ((byte)(param_1 - 3) < 2) {
      if (param_4 == '\x01') {
        lVar1 = FUN_0041f930();
        dVar2 = (double)FUN_00b90650(*(undefined8 *)(&DAT_01ed5368 + (ulonglong)param_1 * 0x10),
                                     *(undefined8 *)(lVar1 + 0x280));
        *param_3 = dVar2;
        lVar1 = FUN_0041f930();
        uVar3 = FUN_00b90620((*(double *)(&DAT_01ed5360 + (ulonglong)param_1 * 0x10) +
                             *(double *)(lVar1 + 0x280)) - 5.0,*param_3 + 1e-06);
        *param_2 = uVar3;
        return;
      }
      lVar1 = FUN_0041f930();
      dVar2 = (double)FUN_00b90650(*(undefined8 *)
                                    ((longlong)&UNWIND_INFO_01ed52e8 + (ulonglong)param_1 * 0x10),
                                   *(undefined8 *)(lVar1 + 0x280));
      *param_3 = dVar2;
      lVar1 = FUN_0041f930();
      uVar3 = FUN_00b90620(((double)(&DAT_01ed52e0)[(ulonglong)param_1 * 2] +
                           *(double *)(lVar1 + 0x280)) - 5.0,*param_3 + 1e-06);
      *param_2 = uVar3;
      return;
    }
    if (3 < (byte)(param_1 - 5)) {
      return;
    }
  }
  if (param_4 == '\x01') {
    *param_2 = *(undefined8 *)(&DAT_01ed5360 + (ulonglong)param_1 * 0x10);
    *param_3 = *(double *)(&DAT_01ed5368 + (ulonglong)param_1 * 0x10);
  }
  else {
    *param_2 = (&DAT_01ed52e0)[(ulonglong)param_1 * 2];
    *param_3 = *(double *)((longlong)&UNWIND_INFO_01ed52e8 + (ulonglong)param_1 * 0x10);
  }
  return;
}

