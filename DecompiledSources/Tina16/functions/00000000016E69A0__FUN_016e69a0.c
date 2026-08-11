/* Ghidra address: 016e69a0 */
/* Ghidra symbol: FUN_016e69a0 */


void FUN_016e69a0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  double local_68;
  double local_60;
  double local_58;
  double local_50 [6];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (param_2 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(double *)(param_1 + 0x10) =
         *(double *)(param_1 + 0x88) * (*(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x3c) < -1) {
      uVar3 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
    }
    if (0.0 < *(double *)(param_1 + 0x80)) {
      if (*(double *)(param_1 + 0x78) <= 0.0) {
        if (*(double *)(param_1 + 0x80) <= 0.0) {
          *(undefined8 *)(param_1 + 0x80) = 0x408f400000000000;
          *(undefined8 *)(param_1 + 0x78) = 0x408f400000000000;
        }
        else {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
        }
      }
    }
    else if (*(double *)(param_1 + 0x78) <= 0.0) {
      *(undefined8 *)(param_1 + 0x80) = 0x408f400000000000;
      *(undefined8 *)(param_1 + 0x78) = 0x408f400000000000;
    }
    else {
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 3) * 8) =
         *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
    uVar6 = 0;
    if ((*(byte *)(lVar2 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(lVar2 + 0x88) & 0x40) == 0) || ((*(byte *)(lVar2 + 0x88) & 0x10) == 0)) {
        if ((*(byte *)(lVar2 + 0x88) & 2) == 0) {
          if (param_2 == 6) {
            FUN_016e2770(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                         *(int *)(param_1 + 0x3c) + 3,*(undefined8 *)(param_1 + 0x10),&local_68,
                         param_1 + 0x20,0,0);
            *(undefined8 *)
             (*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
                 *(undefined8 *)(param_1 + 8);
            FUN_016e2450(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                         *(int *)(param_1 + 0x3c) + 1,*(undefined8 *)(param_1 + 0x78),&local_58,
                         param_1 + 0x20,0,0);
            *(undefined8 *)
             (*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
                 *(undefined8 *)(param_1 + 8);
            FUN_016e2450(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                         *(int *)(param_1 + 0x3c) + 1,
                         *(ulonglong *)(param_1 + 0x80) ^ 0x8000000000000000,&local_60,
                         param_1 + 0x20,0,0);
            uVar6 = 0;
            if (local_68 < 0.0) {
              if (*(double *)(param_1 + 0x10) <= local_58) {
                if ((*(double *)(param_1 + 0x80) <= -local_68 &&
                     -local_68 != *(double *)(param_1 + 0x80)) ||
                   ((-local_68 < *(double *)(param_1 + 0x80) &&
                    (*(double *)(param_1 + 0x10) <= local_60 &&
                     local_60 != *(double *)(param_1 + 0x10))))) {
                  *(double *)(param_1 + 8) = local_60;
                  *(undefined8 *)(param_1 + 0x20) = 0;
                  uVar6 = *(undefined8 *)(param_1 + 0x80);
                }
                else {
                  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
                  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
                }
              }
              else {
                *(double *)(param_1 + 8) = local_58;
                *(undefined8 *)(param_1 + 0x20) = 0;
                uVar6 = *(undefined8 *)(param_1 + 0x78);
              }
            }
            else if (local_60 < *(double *)(param_1 + 0x10) ||
                     local_60 == *(double *)(param_1 + 0x10)) {
              if ((*(double *)(param_1 + 0x78) <= local_68 &&
                   local_68 != *(double *)(param_1 + 0x78)) ||
                 ((local_68 < *(double *)(param_1 + 0x78) &&
                  (local_58 <= *(double *)(param_1 + 0x10))))) {
                *(double *)(param_1 + 8) = local_58;
                *(undefined8 *)(param_1 + 0x20) = 0;
                uVar6 = *(undefined8 *)(param_1 + 0x78);
              }
              else {
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
                *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
              }
            }
            else {
              *(double *)(param_1 + 8) = local_60;
              *(undefined8 *)(param_1 + 0x20) = 0;
              uVar6 = *(undefined8 *)(param_1 + 0x80);
            }
          }
          else {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x88);
          }
        }
        else {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x88);
        }
      }
      else {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8)
             = *(undefined8 *)(param_1 + 8);
      }
      if ((-1e+29 < *(double *)(param_1 + 0x90)) ||
         (*(double *)(param_1 + 0x98) <= 1e+29 && *(double *)(param_1 + 0x98) != 1e+29)) {
        FUN_00da9f70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90),
                     *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x60),param_1 + 8,
                     local_50);
        *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) * local_50[0];
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8) =
           uVar6;
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 8);
      if ((*(byte *)(lVar2 + 0x88) & 0x40) != 0) {
        lVar4 = (longlong)(*(int *)(param_1 + 0x3c) + 1);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + lVar4 * 8) =
             *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + lVar4 * 8);
      }
      if ((*(byte *)(lVar2 + 0x88) & 0x40) != 0) {
        lVar4 = (longlong)(*(int *)(param_1 + 0x3c) + 2);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + lVar4 * 8) =
             *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + lVar4 * 8);
      }
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

