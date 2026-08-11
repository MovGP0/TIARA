/* Ghidra address: 00f57700 */
/* Ghidra symbol: FUN_00f57700 */


void FUN_00f57700(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || ((*(byte *)(param_3 + 0x88) & 0x20) != 0)) {
    if (param_4 == '\f') {
      if (*(double *)(param_1 + 0x48) <= 0.0) {
        uVar5 = 0;
      }
      else {
        dVar2 = (double)FUN_016ed770(param_3);
        uVar5 = FUN_0040c760(((dVar2 + 273.15) * 5.5224904e-23) / *(double *)(param_1 + 0x48));
      }
      FUN_016ed220(param_2,*param_1 + '\x03',uVar5,0);
    }
  }
  else {
    dVar2 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x01',1,0);
    dVar3 = (double)FUN_016ee640(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,1);
    if (*(double *)(param_1 + 0x28) <= dVar3) {
      if (dVar3 < *(double *)(param_1 + 0x30) || dVar3 == *(double *)(param_1 + 0x30)) {
        dVar4 = (dVar3 - *(double *)(param_1 + 0x18)) / *(double *)(param_1 + 0x20);
        dVar4 = dVar4 * dVar4;
        uVar5 = FUN_0040af80(*(double *)(param_1 + 8) +
                             ((*(double *)(param_1 + 0x10) * (dVar3 - *(double *)(param_1 + 0x18)))
                             / *(double *)(param_1 + 0x20)) * (1.5 - dVar4 * 2.0));
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        dVar4 = (*(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x20)) * (1.5 - dVar4 * 6.0) *
                *(double *)(param_1 + 0x48);
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
        dVar4 = 0.0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x38);
      dVar4 = 0.0;
    }
    FUN_016ed320(param_2,*param_1 + '\x01',-dVar2 * dVar4 * dVar3,*(undefined8 *)(param_1 + 0x48),0)
    ;
    FUN_016ed220(param_2,*param_1 + '\x02',dVar2 * dVar4,0);
  }
  return;
}

