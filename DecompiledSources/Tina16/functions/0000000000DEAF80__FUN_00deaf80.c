/* Ghidra address: 00deaf80 */
/* Ghidra symbol: FUN_00deaf80 */


void FUN_00deaf80(undefined1 *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar4;
  double local_40 [3];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  if ((byte)(param_4 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (param_4 == 8) {
      FUN_016ed460(param_2,param_1[2] + '\x01',0,0,*(undefined8 *)(param_1 + 8),0);
    }
  }
  else {
    local_40[0] = 0.0;
    dVar3 = 0.0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x3c) < -1) {
      uVar1 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      uVar1 = FUN_016ee690(param_2,*param_1,0);
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      uVar1 = FUN_016ee690(param_2,param_1[1],0);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
    }
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (param_4 < 8 && (1 << (param_4 & 0x1f) & 0xa2U) != 0) {
        if ((*(char *)(param_3 + 0x32c) != '\0') && (param_1[0x30] != '\0')) {
          dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x18) = 0x407f400000000000;
          local_40[0] = -*(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x18);
        }
      }
      else if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) ||
              ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
            dVar3 = *(double *)(param_1 + 8) *
                    (*(double *)
                      (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x34) * 8) -
                    *(double *)
                     (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x38) * 8));
          }
          else {
            dVar3 = *(double *)
                     (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8)
            ;
          }
        }
        else {
          dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
        }
      }
      else {
        if (param_1[0x30] == '\0') {
          *(double *)(param_1 + 0x10) =
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x34) * 8)
               - *(double *)
                  (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x38) * 8);
        }
        dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10) *
                *(double *)(param_3 + 0x478);
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           dVar3;
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8);
      }
      if (param_4 == 6) {
        FUN_00dafac0(param_2,param_3,param_1 + 0x18,local_40,*(undefined8 *)(param_1 + 8),
                     CONCAT44(uVar4,*(int *)(param_1 + 0x3c) + 1),0,0);
      }
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 2) * 8);
      }
      FUN_016ed460(param_2,param_1[2] + '\x01',local_40[0],*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8),0);
    }
    else {
      if (param_1[0x30] == '\0') {
        *(double *)(param_1 + 0x10) =
             *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x34) * 8) -
             *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x38) * 8);
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
    }
  }
  return;
}

