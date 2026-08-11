/* Ghidra address: 01331e70 */
/* Ghidra symbol: FUN_01331e70 */


bool FUN_01331e70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return false;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x66) == '\0') {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x140);
  if ((*(char *)(*(longlong *)(param_1 + 0x140) + 0x65) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x140) + 0x30) == '\0')) {
    dVar3 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x148),6);
    bVar2 = *(double *)(lVar1 + 0x68) + *(double *)(param_1 + 200) / 1000.0 <= dVar3;
    if (bVar2) {
      *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
    }
  }
  else {
    dVar5 = -*(double *)(lVar1 + 0x28) / 2.0;
    dVar6 = *(double *)(lVar1 + 0x28) / 2.0;
    dVar3 = (double)FUN_016ee810(*(undefined8 *)(lVar1 + 0x48),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x118),
                                 *(undefined1 *)(lVar1 + 0x3c),*(undefined1 *)(lVar1 + 0x40),0);
    dVar7 = *(double *)(lVar1 + 0x18) * (dVar3 - *(double *)(lVar1 + 0x20));
    dVar3 = (double)FUN_016ee9a0(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(param_1 + 0x148),
                                 *(undefined1 *)(lVar1 + 0x3c),*(undefined1 *)(lVar1 + 0x40),1,0);
    dVar3 = *(double *)(lVar1 + 0x18) * (dVar3 - *(double *)(lVar1 + 0x20));
    if (((dVar6 < dVar3) || (dVar7 < dVar6)) || (*(char *)(lVar1 + 0x5a) != '\0')) {
      if (((dVar3 < dVar5) || (dVar5 < dVar7)) || (*(char *)(lVar1 + 0x5a) != '\x01')) {
        *(undefined1 *)(lVar1 + 0x5b) = 0;
      }
      else {
        *(undefined1 *)(lVar1 + 0x5b) = 2;
        *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
        *(undefined1 *)(lVar1 + 0x5a) = 0;
        if ((((*(char *)(lVar1 + 0x59) == '\0') && (*(char *)(lVar1 + 0x5b) == '\x02')) &&
            ((int)(uint)*(byte *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x5c))) &&
           (((*(short *)(*(longlong *)(lVar1 + 8) + 0x18) == 0 &&
             ((int)(uint)*(byte *)(lVar1 + 0x58) < *(int *)(lVar1 + 0x60))) ||
            ((*(short *)(*(longlong *)(lVar1 + 8) + 0x18) != 0 &&
             ((int)(uint)*(byte *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x60))))))) {
          dVar3 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x148),6);
          if (*(double *)(lVar1 + 0x68) + *(double *)(lVar1 + 0x70) < dVar3) {
            bVar2 = true;
            goto LAB_013320c9;
          }
        }
        bVar2 = false;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0x5b) = 1;
      *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
      *(undefined1 *)(lVar1 + 0x5a) = 1;
      if ((((*(char *)(lVar1 + 0x59) == '\x01') && (*(char *)(lVar1 + 0x5b) == '\x01')) &&
          ((int)(uint)*(byte *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x60))) &&
         (((*(short *)(*(longlong *)(lVar1 + 8) + 0x18) == 0 &&
           ((int)(uint)*(byte *)(lVar1 + 0x58) < *(int *)(lVar1 + 0x5c))) ||
          ((*(short *)(*(longlong *)(lVar1 + 8) + 0x18) != 0 &&
           ((int)(uint)*(byte *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x5c))))))) {
        dVar3 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x148),6);
        if (*(double *)(lVar1 + 0x68) + *(double *)(lVar1 + 0x70) < dVar3) {
          bVar2 = true;
          goto LAB_013320c9;
        }
      }
      bVar2 = false;
    }
  }
LAB_013320c9:
  if (bVar2 != false) {
    uVar4 = FUN_016ed780(*(undefined8 *)(param_1 + 0x148),6);
    *(undefined8 *)(lVar1 + 0x68) = uVar4;
  }
  return bVar2;
}

