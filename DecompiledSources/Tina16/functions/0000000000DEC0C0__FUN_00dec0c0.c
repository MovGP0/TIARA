/* Ghidra address: 00dec0c0 */
/* Ghidra symbol: FUN_00dec0c0 */


void FUN_00dec0c0(char *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (param_1[0x41] == '\0') {
    if ((byte)(param_4 - 8) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0
      ;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if (param_4 == 8) {
        FUN_016ed460(param_2,*param_1 + '\x01',0,0,*(undefined8 *)(param_1 + 8),0);
      }
    }
    else {
      if (*(int *)(param_1 + 0x48) < -1) {
        uVar1 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 2),0);
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        uVar1 = FUN_016ee490(param_2,*param_1 + '\x01',1,0);
        *(undefined4 *)(param_1 + 0x44) = uVar1;
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
        if (((param_4 < 8 && (1 << (param_4 & 0x1f) & 0xa2U) != 0) &&
            (*(char *)(param_3 + 0x32c) != '\0')) && (param_1[0x40] != '\0')) {
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
          dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x18);
          param_1[0x28] = '\0';
          param_1[0x29] = '\0';
          param_1[0x2a] = '\0';
          param_1[0x2b] = '\0';
          param_1[0x2c] = 'e';
          param_1[0x2d] = -0x33;
          param_1[0x2e] = -0x33;
          param_1[0x2f] = 'A';
          *(double *)(param_1 + 0x20) = -*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x28);
        }
        else if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) ||
                ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
          if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
            if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
              *(undefined8 *)(param_1 + 0x18) =
                   *(undefined8 *)
                    (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x44) * 8);
              dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x18);
            }
            else {
              *(undefined8 *)(param_1 + 0x18) =
                   *(undefined8 *)
                    (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x44) * 8);
              dVar3 = *(double *)
                       (*(longlong *)(param_3 + 0x1c0) +
                       (longlong)(*(int *)(param_1 + 0x48) + 1) * 8);
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
            dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x18);
          }
        }
        else {
          if (param_1[0x40] == '\0') {
            *(undefined8 *)(param_1 + 0x10) =
                 *(undefined8 *)
                  (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x44) * 8);
          }
          dVar3 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10) *
                  *(double *)(param_3 + 0x478);
        }
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x48) + 1) * 8) =
             dVar3;
        if (param_1[0x41] == '\0') {
          if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
            *(undefined8 *)
             (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x48) + 1) * 8) =
                 *(undefined8 *)
                  (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x48) + 1) * 8);
          }
          if (param_4 == 6) {
            FUN_00dafac0(param_2,param_3,param_1 + 0x28,param_1 + 0x20,*(undefined8 *)(param_1 + 8),
                         CONCAT44(uVar4,*(int *)(param_1 + 0x48) + 1),0,0);
          }
          if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
            *(undefined8 *)
             (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x48) + 2) * 8) =
                 *(undefined8 *)
                  (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x48) + 2) * 8);
          }
          FUN_016ed460(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8),0);
        }
      }
      else {
        if (param_1[0x40] == '\0') {
          *(undefined8 *)(param_1 + 0x10) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x44) * 8);
        }
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x48) + 1) * 8) =
             *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
      }
    }
  }
  return;
}

