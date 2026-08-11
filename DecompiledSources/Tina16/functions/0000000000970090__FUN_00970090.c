/* Ghidra address: 00970090 */
/* Ghidra symbol: FUN_00970090 */


void FUN_00970090(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  uint local_6c;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_50;
  uint local_4c;
  longlong local_48;
  undefined8 local_38;
  short *local_30;
  char local_25;
  int local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_a8;
  local_68 = 0;
  local_20[0] = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  *param_3 = 0;
  *param_4 = 0;
  cVar2 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x90));
  if (cVar2 == '\0') {
    *param_2 = 0x3e;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
    FUN_00414520(param_4);
  }
  else {
    local_25 = '\0';
    FUN_00414520(&local_30);
    local_48 = *(longlong *)(param_1 + 0x98);
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(uint *)(local_48 + -4) >> 1;
    }
    local_6c = local_4c;
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
              goto LAB_009704b7;
            }
            cVar2 = FUN_008ff2d0(sVar1);
            if (cVar2 == '\0') {
              *param_2 = 0x3f;
              FUN_00415e60(param_3,*(undefined2 *)(*(longlong *)(param_1 + 0x98) + -2 + lVar4 * 2));
              FUN_00414520(param_4);
              goto LAB_009704b7;
            }
          }
        }
        else {
          sVar1 = *(short *)(*(longlong *)(param_1 + 0x98) + -2 + (longlong)local_24 * 2);
          if (sVar1 == 0x3b) {
            if (*local_30 == 0x23) {
              local_88 = &DAT_00970544;
              FUN_00416310(local_20,3,&DAT_0097053c,local_30);
              FUN_00948790(&local_38,local_20[0]);
            }
            else {
              cVar2 = FUN_008ff6c0(local_30);
              if (cVar2 == '\0') {
                *param_2 = 0x46;
                FUN_00414b90(param_3,local_30);
                FUN_00414520(param_4);
                goto LAB_009704b7;
              }
            }
            FUN_00414520(&local_30);
            local_25 = '\0';
          }
          else {
            FUN_00415e60(&local_68,sVar1);
            FUN_00415f90(&local_30,local_68);
          }
        }
        local_24 = local_24 + 1;
        local_6c = local_6c - 1;
      } while (local_6c != 0);
    }
    if (local_25 == '\0') {
      iVar3 = FUN_00416420(*(undefined8 *)(param_1 + 0x90),L"xml:space");
      if (iVar3 == 0) {
        iVar3 = FUN_00416420(*(undefined8 *)(param_1 + 0x98),L"default");
        if (iVar3 != 0) {
          iVar3 = FUN_00416420(*(undefined8 *)(param_1 + 0x98),L"preserve");
          if (iVar3 != 0) {
            *param_2 = 10;
            FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x98));
            FUN_00414520(param_4);
            goto LAB_009704b7;
          }
        }
      }
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
LAB_009704b7:
  FUN_00414520(&local_68);
  FUN_004145c0(&local_38,2);
  FUN_00414520(local_20);
  return;
}

