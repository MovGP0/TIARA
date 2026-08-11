/* Ghidra address: 00f55c30 */
/* Ghidra symbol: FUN_00f55c30 */


void FUN_00f55c30(char *param_1,undefined8 param_2,longlong param_3,char param_4)

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
  if (bVar1) {
    if (param_4 == '\f') {
      dVar2 = (double)FUN_016ed770(param_3);
      uVar5 = FUN_0040c760((dVar2 + 273.15) * 5.5224904e-23 * *(double *)(param_1 + 0x28));
      FUN_016ed220(param_2,*param_1 + '\x03',uVar5,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
      if (((*(byte *)(param_3 + 0x88) & 2) == 0) && ((*(byte *)(param_3 + 0x88) & 4) == 0)) {
        dVar3 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0);
        dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],
                                     0);
        if (dVar4 <= *(double *)(param_1 + 8) + *(double *)(param_1 + 0x10)) {
          dVar2 = dVar3;
          if (dVar4 < *(double *)(param_1 + 8) - *(double *)(param_1 + 0x10)) {
            FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0,0);
            dVar2 = 0.0;
          }
        }
        else {
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0x3ff0000000000000,0
                      );
          dVar2 = 1.0;
        }
        if (dVar2 != dVar3) {
          FUN_016e9f80(param_2,param_3,1,0);
        }
      }
      else if (param_1[0x31] == '\0') {
        dVar2 = 0.0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0,0);
      }
      else {
        dVar2 = 1.0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0x3ff0000000000000,0);
      }
    }
    else {
      dVar2 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x32) + 1,0);
      dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0)
      ;
      if (dVar3 <= *(double *)(param_1 + 8) + *(double *)(param_1 + 0x10)) {
        if (dVar3 < *(double *)(param_1 + 8) - *(double *)(param_1 + 0x10)) {
          dVar2 = 0.0;
        }
      }
      else {
        dVar2 = 1.0;
      }
      if (dVar2 == 0.0) {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0,0);
      }
      else {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,0x3ff0000000000000,0);
      }
    }
    if (dVar2 == 0.0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
    }
    param_1[0x30] = dVar2 != 0.0;
    FUN_016ed320(param_2,*param_1 + '\x01',0,*(undefined8 *)(param_1 + 0x28),0);
    FUN_016ed220(param_2,*param_1 + '\x02',0,0);
  }
  else {
    if (param_1[0x31] == '\0') {
      dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0)
      ;
      if (dVar2 <= *(double *)(param_1 + 8) + *(double *)(param_1 + 0x10)) {
        if (*(double *)(param_1 + 8) - *(double *)(param_1 + 0x10) <= dVar2) {
          dVar2 = 0.0;
        }
        else {
          dVar2 = 0.0;
        }
      }
      else {
        dVar2 = 1.0;
      }
      param_1[0x30] = dVar2 != 0.0;
    }
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x32) + 1,
                 (double)(byte)param_1[0x30],0);
  }
  return;
}

