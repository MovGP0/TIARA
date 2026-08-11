/* Ghidra address: 017dbf50 */
/* Ghidra symbol: FUN_017dbf50 */


void FUN_017dbf50(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  short sVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar7 = *(int *)(param_1 + 8) + -1;
    local_9c = 1;
    if (0 < iVar7) {
      do {
        FUN_00c44460(&local_60,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)local_9c * 8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_9c * 8));
        if ((local_60 != 0.0) || (local_58 != 0.0)) {
          FUN_017d9a10(param_1,&local_40,local_9c,local_9c);
          FUN_00c44790(&local_60,&local_40,&local_40);
          lVar4 = (longlong)local_9c;
          *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8) = local_40;
          *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8) = local_38;
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar4 * 0x18);
          local_88 = *plVar1;
          lStack_80 = plVar1[1];
          local_78 = plVar1[2];
          iVar5 = 0;
          iVar6 = (int)local_78;
          if (-1 < (int)local_78 + -1) {
            do {
              sVar2 = *(short *)(local_88 + (longlong)iVar5 * 2);
              if (local_9c < sVar2) {
                FUN_017d9a10(param_1,local_98,(int)sVar2,local_9c);
                FUN_00c44720(&local_40,local_98,&local_60);
                lVar4 = (longlong)(int)sVar2;
                FUN_00c44460(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8));
                FUN_00c44500(&local_70,&local_60,&local_70);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8) = local_70;
                *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8) = local_68;
              }
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        local_9c = local_9c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_9c = *(int *)(param_1 + 8) + -1;
    if (0 < local_9c) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)local_9c * 0x18);
        local_50 = *(undefined8 *)PTR_DAT_020025e0;
        uStack_48 = *(undefined8 *)(PTR_DAT_020025e0 + 8);
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)local_9c * 0x18);
        iVar6 = 0;
        if (-1 < iVar7 + -1) {
          do {
            iVar5 = *(int *)(lVar4 + 0x10 + (longlong)iVar6 * 0x18);
            FUN_00c44460(&local_60,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar5 * 8));
            if ((local_9c < iVar5) && ((local_60 != 0.0 || (local_58 != 0.0)))) {
              FUN_00409a70(lVar4 + (longlong)iVar6 * 0x18,&local_70,0x10);
              FUN_00c44720(&local_60,&local_70,&local_60);
              FUN_00c444b0(&local_50,&local_60,&local_50);
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        lVar4 = (longlong)local_9c;
        FUN_00c44460(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8));
        FUN_00c44500(&local_60,&local_50,&local_60);
        *(double *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8) = local_60;
        *(double *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8) = local_58;
        param_2[*(short *)(*(longlong *)(param_1 + 0x80) + lVar4 * 2)] =
             *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar4 * 8);
        param_3[*(short *)(*(longlong *)(param_1 + 0x80) + lVar4 * 2)] =
             *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8);
        local_9c = local_9c + -1;
      } while (local_9c != 0);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (1 < *(int *)(param_1 + 8)) {
      thunk_FUN_03bc1826(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1c8),
                         *(undefined8 *)(param_1 + 0x1c8));
    }
    *param_2 = 0;
    *param_3 = 0;
    iVar7 = *(int *)(param_1 + 8) + -1;
    local_9c = 1;
    if (0 < iVar7) {
      do {
        param_2[local_9c] =
             *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(local_9c * 2) * 8);
        param_3[local_9c] =
             *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(local_9c * 2 + 1) * 8);
        local_9c = local_9c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    thunk_FUN_03cc9e24(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                       (*(int *)(param_1 + 8) - *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) +
                       -1,*(undefined4 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x1c8),
                       param_1 + 0xe8);
    *param_2 = 0;
    *param_3 = 0;
    iVar7 = 0;
    iVar6 = *(int *)(param_1 + 8) + -1;
    local_9c = 1;
    if (0 < iVar6) {
      do {
        cVar3 = FUN_017d7470(*(undefined8 *)(param_1 + 0x1b0),local_9c + -1,local_2c);
        if (cVar3 == '\0') {
          param_2[local_9c] =
               *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(iVar7 * 2) * 8);
          param_3[local_9c] =
               *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(iVar7 * 2 + 1) * 8);
          iVar7 = iVar7 + 1;
        }
        else {
          param_2[local_9c] = 0;
          param_3[local_9c] = 0;
        }
        local_9c = local_9c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

