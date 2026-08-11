/* Ghidra address: 00971460 */
/* Ghidra symbol: FUN_00971460 */


void FUN_00971460(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_50;
  uint local_4c;
  longlong local_48;
  undefined8 local_38;
  short *local_30;
  char local_25;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_c8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_20 = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  *param_3 = 0;
  *param_4 = 0;
  cVar2 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x88));
  if (cVar2 == '\0') {
    *param_2 = 0x71;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
    FUN_00414520(param_4);
  }
  else {
    cVar2 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0xa8));
    if (cVar2 == '\0') {
      *param_2 = 0x75;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0xa8));
      FUN_00414520(param_4);
    }
    else {
      if (*(char *)(param_1 + 0x90) == '\x01') {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
        local_24 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                      (*(longlong **)(param_1 + 0xa0),&local_68,local_24);
            cVar2 = FUN_008ff6c0(local_68);
            if (cVar2 == '\0') {
              *param_2 = 0x81;
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                        (*(longlong **)(param_1 + 0xa0),&local_70,local_24);
              FUN_00414b90(param_3,local_70);
              FUN_00414520(param_4);
              goto LAB_00971a34;
            }
            local_24 = local_24 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
        local_24 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                      (*(longlong **)(param_1 + 0xa0),&local_78,local_24);
            cVar2 = FUN_008ff900(local_78);
            if (cVar2 == '\0') {
              *param_2 = 0x7c;
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                        (*(longlong **)(param_1 + 0xa0),&local_80,local_24);
              FUN_00414b90(param_3,local_80);
              FUN_00414520(param_4);
              goto LAB_00971a34;
            }
            local_24 = local_24 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_25 = '\0';
      FUN_00414520(&local_30);
      local_48 = *(longlong *)(param_1 + 0x98);
      local_4c = 0;
      if (local_48 != 0) {
        local_4c = *(uint *)(local_48 + -4) >> 1;
      }
      local_8c = local_4c;
      local_24 = 1;
      if (local_4c != 0) {
        do {
          if (local_25 == '\0') {
            lVar4 = (longlong)local_24;
            sVar1 = *(short *)(*(longlong *)(param_1 + 0x98) + -2 + lVar4 * 2);
            if (sVar1 == 0x26) {
              local_25 = '\x01';
            }
            else {
              if (sVar1 == 0x3c) {
                *param_2 = 0x4f;
                FUN_00415e60(param_3,0x3c);
                FUN_00414520(param_4);
                goto LAB_00971a34;
              }
              cVar2 = FUN_008ff2d0(sVar1);
              if (cVar2 == '\0') {
                *param_2 = 0x3f;
                FUN_00415e60(param_3,*(undefined2 *)(*(longlong *)(param_1 + 0x98) + -2 + lVar4 * 2)
                            );
                FUN_00414520(param_4);
                goto LAB_00971a34;
              }
            }
          }
          else {
            sVar1 = *(short *)(*(longlong *)(param_1 + 0x98) + -2 + (longlong)local_24 * 2);
            if (sVar1 == 0x3b) {
              if (*local_30 == 0x23) {
                local_a8 = &DAT_00971adc;
                FUN_00416310(&local_20,3,&DAT_00971ad4,local_30);
                FUN_00948790(&local_38,local_20);
              }
              else {
                cVar2 = FUN_008ff6c0(local_30);
                if (cVar2 == '\0') {
                  *param_2 = 0x46;
                  FUN_00414b90(param_3,local_30);
                  FUN_00414520(param_4);
                  goto LAB_00971a34;
                }
              }
              FUN_00414520(&local_30);
              local_25 = '\0';
            }
            else {
              FUN_00415e60(&local_88,sVar1);
              FUN_00415f90(&local_30,local_88);
            }
          }
          local_24 = local_24 + 1;
          local_8c = local_8c - 1;
        } while (local_8c != 0);
      }
      if (local_25 == '\0') {
        *param_2 = 0;
        FUN_00414520(param_3);
        FUN_00414520(param_4);
      }
      else {
        local_50 = 0;
        if (local_30 != (short *)0x0) {
          local_50 = *(uint *)(local_30 + -2) >> 1;
        }
        if (local_50 == 0) {
          *param_2 = 0x66;
        }
        else if (*local_30 == 0x23) {
          *param_2 = 0x62;
        }
        else {
          *param_2 = 0x66;
        }
        FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x98));
        FUN_00414520(param_4);
      }
    }
  }
LAB_00971a34:
  FUN_004145c0(&local_88,5);
  FUN_004145c0(&local_38,2);
  FUN_00414520(&local_20);
  return;
}

