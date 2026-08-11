/* Ghidra address: 00dd33e0 */
/* Ghidra symbol: FUN_00dd33e0 */


void FUN_00dd33e0(undefined1 *param_1,undefined8 param_2,longlong param_3,double param_4,
                 double param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 local_40 [40];
  
  dVar3 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
  if (param_1[0x11] != '\0') {
    uVar1 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0x10],param_1[4],0);
    dVar2 = (double)FUN_00dd1640(uVar1,local_40,param_1[6]);
    dVar3 = (dVar3 - 1.0) * (1.0 - dVar2) + 1.0;
  }
  FUN_016ed320(param_2,*param_1,param_4 - param_5,dVar3,0);
  return;
}

