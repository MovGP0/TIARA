/* Ghidra address: 00f56430 */
/* Ghidra symbol: FUN_00f56430 */


void FUN_00f56430(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) || ((*(byte *)(param_3 + 0x88) & 0x20) != 0)) {
    if (param_4 == '\f') {
      if (*(double *)(param_1 + 0x70) <= 0.0) {
        uVar1 = 0;
      }
      else {
        dVar4 = (double)FUN_016ed770(param_3);
        uVar1 = FUN_0040c760(((dVar4 + 273.15) * 5.5224904e-23) / *(double *)(param_1 + 0x70));
      }
      FUN_016ed220(param_2,*param_1 + '\x03',uVar1,0);
    }
  }
  else {
    dVar4 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x01',1,0);
    dVar5 = (double)FUN_016eeb40(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,
                                 param_1[1],param_1[2]);
    if (*(double *)(param_1 + 0x40) <= dVar5) {
      if (dVar5 < *(double *)(param_1 + 0x48) || dVar5 == *(double *)(param_1 + 0x48)) {
        dVar6 = (dVar5 - *(double *)(param_1 + 0x28)) / *(double *)(param_1 + 0x30);
        uVar1 = FUN_0040af80(*(double *)(param_1 + 0x18) +
                             *(double *)(param_1 + 0x20) * dVar6 * (1.5 - dVar6 * dVar6 * 2.0));
        *(undefined8 *)(param_1 + 0x70) = uVar1;
        dVar6 = (*(double *)(param_1 + 0x20) / *(double *)(param_1 + 0x30)) *
                (1.5 - dVar6 * dVar6 * 6.0) * *(double *)(param_1 + 0x70);
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
        dVar6 = 0.0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x50);
      dVar6 = 0.0;
    }
    if (*(double *)(param_1 + 0x50) < *(double *)(param_1 + 0x58) ||
        *(double *)(param_1 + 0x50) == *(double *)(param_1 + 0x58)) {
      param_1[0x80] = dVar5 < *(double *)(param_1 + 0x28);
    }
    else {
      param_1[0x80] = *(double *)(param_1 + 0x28) <= dVar5;
    }
    FUN_016ed320(param_2,*param_1 + '\x01',-dVar4 * dVar6 * dVar5,*(undefined8 *)(param_1 + 0x70),0)
    ;
    FUN_016ed220(param_2,*param_1 + '\x02',dVar4 * dVar6,0);
    uVar1 = FUN_016ebdc0(param_2);
    FUN_01d04b50(uVar1,param_1 + 0x80);
    if ((param_4 == '\x01') && (*PTR_DAT_02002b78 != '\0')) {
      uVar1 = FUN_016ebdc0(param_2);
      uVar2 = FUN_019a45d0();
      uVar2 = FUN_0198d430(uVar2);
      FUN_01d04bd0(uVar1,uVar2);
    }
  }
  return;
}

