/* Ghidra address: 016e3840 */
/* Ghidra symbol: FUN_016e3840 */


void FUN_016e3840(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  byte bVar3;
  bool bVar4;
  double dVar5;
  double local_40 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  bVar3 = (byte)param_2;
  if (bVar3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar3 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    dVar5 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x3c) < -1) {
      uVar2 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    if ((*(byte *)(lVar1 + 0x88) & 0x20) == 0) {
      if (bVar3 < 8 && (1 << (bVar3 & 0x1f) & 0xa2U) != 0) {
        if ((*(char *)(lVar1 + 0x32c) != '\0') &&
           (*(double *)(param_1 + 0x68) <= 1e+29 && *(double *)(param_1 + 0x68) != 1e+29)) {
          *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x78) / 1e-14;
          *(double *)(param_1 + 8) = -dVar5 * *(double *)(param_1 + 0x20);
        }
      }
      else if (((*(byte *)(lVar1 + 0x88) & 0x40) == 0) || ((*(byte *)(lVar1 + 0x88) & 0x10) == 0)) {
        if (((*(byte *)(lVar1 + 0x88) & 2) != 0) &&
           (*(double *)(param_1 + 0x68) <= 1e+29 && *(double *)(param_1 + 0x68) != 1e+29)) {
          dVar5 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x68);
        }
      }
      else {
        if (*(double *)(param_1 + 0x68) <= 1e+29 && *(double *)(param_1 + 0x68) != 1e+29) {
          dVar5 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x68);
        }
        *(double *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
             dVar5;
      }
      *(double *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           dVar5;
      if (bVar3 == 6) {
        FUN_016e2770(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                     *(int *)(param_1 + 0x3c) + 1,dVar5,param_1 + 8,param_1 + 0x20,0,0);
      }
      else {
        *(double *)(*(longlong *)(lVar1 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
             dVar5;
        *(undefined8 *)(*(longlong *)(lVar1 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8)
             = *(undefined8 *)(param_1 + 8);
      }
      *(double *)(param_1 + 8) = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x70);
      if ((-1e+29 < *(double *)(param_1 + 0x80)) ||
         (*(double *)(param_1 + 0x88) <= 1e+29 && *(double *)(param_1 + 0x88) != 1e+29)) {
        FUN_00da9f70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x80),
                     *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x60),param_1 + 8,
                     local_40);
        *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) * local_40[0];
      }
      *(undefined8 *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8) =
           *(undefined8 *)(param_1 + 8);
    }
    else {
      if (1e+29 < *(double *)(param_1 + 0x68)) {
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x10);
      }
      *(double *)(*(longlong *)(lVar1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x68);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = 0;
    dVar5 = (double)FUN_016ed840(*(undefined8 *)(param_1 + 0x58),param_2);
    *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x78) * dVar5;
  }
  return;
}

