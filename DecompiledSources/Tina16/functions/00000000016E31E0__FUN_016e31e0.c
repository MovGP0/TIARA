/* Ghidra address: 016e31e0 */
/* Ghidra symbol: FUN_016e31e0 */


void FUN_016e31e0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  byte bVar4;
  bool bVar5;
  double dVar6;
  double local_40 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  bVar4 = (byte)param_2;
  if (bVar4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar4 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(double *)(param_1 + 0x10) =
         *(double *)(param_1 + 0x68) * (*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x3c) < -1) {
      uVar3 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8) =
         *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((*(byte *)(lVar2 + 0x88) & 0x20) == 0) {
      if (bVar4 < 8 && (1 << (bVar4 & 0x1f) & 0xa2U) != 0) {
        if (*(char *)(lVar2 + 0x32c) != '\0') {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
          *(undefined8 *)(param_1 + 0x20) = 0x3d06849b86a12b9b;
        }
      }
      else if (((*(byte *)(lVar2 + 0x88) & 0x40) == 0) || ((*(byte *)(lVar2 + 0x88) & 0x10) == 0)) {
        if ((*(byte *)(lVar2 + 0x88) & 2) == 0) {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
          *(undefined8 *)(param_1 + 0x20) = 0;
          if (bVar4 == 6) {
            FUN_016e2450(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                         *(int *)(param_1 + 0x3c) + 1,*(undefined8 *)(param_1 + 0x10),param_1 + 8,
                         param_1 + 0x20,0,0);
          }
        }
        else {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
        }
      }
      else {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
        dVar6 = (double)FUN_01b08a00(lVar2,0);
        *(double *)(param_1 + 0x20) = 1.0 / dVar6;
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8)
             = *(undefined8 *)(param_1 + 8);
      }
      if ((-1e+29 < *(double *)(param_1 + 0x70)) ||
         (*(double *)(param_1 + 0x78) <= 1e+29 && *(double *)(param_1 + 0x78) != 1e+29)) {
        FUN_00da9f70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x70),
                     *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x60),param_1 + 8,
                     local_40);
        *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) * local_40[0];
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = 0;
    dVar6 = (double)FUN_016ed840(*(undefined8 *)(param_1 + 0x58),param_2);
    *(double *)(param_1 + 0x30) = -*(double *)(param_1 + 0x68) / dVar6;
  }
  return;
}

