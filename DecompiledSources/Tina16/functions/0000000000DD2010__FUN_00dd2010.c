/* Ghidra address: 00dd2010 */
/* Ghidra symbol: FUN_00dd2010 */


void FUN_00dd2010(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(&DAT_01ed5498 + (ulonglong)(byte)param_1[6] * 0x18);
  dVar2 = *(double *)(&DAT_01ed54a0 + (ulonglong)(byte)param_1[6] * 0x18);
  dVar3 = (double)FUN_00dd07b0();
  dVar6 = dVar3 - 0.1;
  dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[4],0);
  dVar5 = dVar2;
  if ((dVar6 <= dVar4) && (dVar5 = dVar1, dVar4 <= dVar3 + 0.1)) {
    dVar5 = (dVar4 - dVar6) * ((dVar1 - dVar2) / ((dVar3 + 0.1) - dVar6)) + dVar2;
  }
  FUN_016ed320(param_2,*param_1,-dVar3 / dVar5,1.0 / dVar5,0);
  return;
}

