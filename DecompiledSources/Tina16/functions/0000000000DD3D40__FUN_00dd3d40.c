/* Ghidra address: 00dd3d40 */
/* Ghidra symbol: FUN_00dd3d40 */


void FUN_00dd3d40(undefined1 *param_1,undefined8 param_2,longlong param_3,double param_4,
                 double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_78;
  double local_70 [10];
  
  FUN_00dd0b90(param_1[6],&local_78,local_70);
  if (param_1[0x11] == '\0') {
    dVar1 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
    dVar2 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
  }
  else {
    dVar1 = *(double *)(&DAT_01ed5558 + (ulonglong)(byte)param_1[6] * 0x18);
    dVar2 = *(double *)(&DAT_01ed5560 + (ulonglong)(byte)param_1[6] * 0x18);
  }
  dVar3 = local_78 - local_70[0];
  FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1,1,0);
  dVar4 = dVar2;
  if ((local_70[0] <= param_4) && (dVar4 = dVar1, param_4 <= local_78)) {
    dVar4 = (param_4 - local_70[0]) * ((dVar1 - dVar2) / dVar3) + dVar2;
  }
  FUN_016ed320(param_2,*param_1,param_4 - param_5,dVar4,0);
  return;
}

