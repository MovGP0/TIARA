/* Ghidra address: 016dadb0 */
/* Ghidra symbol: FUN_016dadb0 */


undefined8 FUN_016dadb0(longlong param_1,char param_2,double param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  double local_58;
  undefined8 local_50;
  
  if (param_2 == '\x06') {
    if (*(double *)(param_4 + 0x40) <= param_3) {
      dVar4 = *(double *)(param_4 + 0x10) + *(double *)(param_4 + 0x18) +
              *(double *)(param_4 + 0x20) + *(double *)(param_4 + 0x28) +
              *(double *)(param_4 + 0x30) + *(double *)(param_4 + 0x38);
      param_3 = param_3 - *(double *)(param_4 + 0x40);
      dVar3 = (double)FUN_0040af10(param_3 / dVar4);
      if (dVar4 <= param_3) {
        param_3 = param_3 - dVar3 * dVar4;
      }
      if (dVar4 <= param_3) {
        param_3 = param_3 - dVar4;
      }
      if (param_3 < 0.0) {
        param_3 = param_3 + dVar4;
      }
      dVar3 = (double)FUN_0040af10(param_3 / dVar4);
      dVar4 = dVar3 * dVar4 + *(double *)(param_4 + 0x40);
      dVar3 = *(double *)(param_4 + 0x10);
      local_58 = param_3;
      if (dVar3 <= param_3) {
        dVar3 = dVar3 + *(double *)(param_4 + 0x18);
        if (dVar3 <= param_3) {
          dVar3 = dVar3 + *(double *)(param_4 + 0x20);
          if (dVar3 <= param_3) {
            dVar3 = dVar3 + *(double *)(param_4 + 0x28);
            if (dVar3 <= param_3) {
              dVar3 = dVar3 + *(double *)(param_4 + 0x30);
              if (dVar3 <= param_3) {
                dVar3 = dVar3 + *(double *)(param_4 + 0x38);
                iVar1 = FUN_016dad70(auStack_78,3);
                local_50 = *(undefined8 *)(param_1 + 0x760);
                uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x38),dVar3,
                                     *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
                if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
                  FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
                }
              }
              else {
                iVar1 = FUN_016dad70(auStack_78,8);
                local_50 = *(undefined8 *)(param_1 + 0x760);
                uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x30),dVar3,
                                     *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
                if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
                  FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
                }
              }
            }
            else {
              iVar1 = FUN_016dad70(auStack_78,7);
              local_50 = *(undefined8 *)(param_1 + 0x760);
              uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x28),dVar3,
                                   *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
              if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
                FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
              }
            }
          }
          else {
            iVar1 = FUN_016dad70(auStack_78,6);
            local_50 = *(undefined8 *)(param_1 + 0x760);
            uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x20),dVar3,
                                 *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
            if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
              FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
            }
          }
        }
        else {
          iVar1 = FUN_016dad70(auStack_78,5);
          local_50 = *(undefined8 *)(param_1 + 0x760);
          uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x18),dVar3,
                               *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
          if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
            FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
          }
        }
      }
      else {
        iVar1 = FUN_016dad70(auStack_78,4);
        local_50 = *(undefined8 *)(param_1 + 0x760);
        uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x10),dVar3,
                             *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
        if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
          FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar4 + dVar3);
        }
      }
    }
    else {
      iVar1 = FUN_016dad70(auStack_78,3);
      local_50 = *(undefined8 *)(param_1 + 0x760);
      local_58 = param_3;
      uVar2 = FUN_016da930(param_1,*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x40),
                           *(undefined8 *)(param_4 + -8 + (longlong)iVar1 * 8));
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_4 + 0x40));
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

