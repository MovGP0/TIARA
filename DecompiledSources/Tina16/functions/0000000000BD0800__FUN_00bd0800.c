/* Ghidra address: 00bd0800 */
/* Ghidra symbol: FUN_00bd0800 */


void FUN_00bd0800(longlong *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  ushort local_4a;
  int local_48;
  char local_43;
  char local_42;
  char local_41;
  short *local_40;
  short *local_38;
  short *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_20[0] = 0;
  local_43 = '\0';
  local_41 = '\0';
  local_42 = '\0';
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  local_30 = param_2;
  if (param_2 != (short *)0x0) {
    local_48 = 0;
    if (param_2 != (short *)0x0) {
      local_48 = *(int *)(param_2 + -2);
    }
    local_24 = local_48;
    local_40 = param_2 + (longlong)local_48 + -1;
    if (param_2 <= local_40) {
      do {
        psVar2 = local_30;
        local_38 = local_30;
        for (; (((sVar1 = *local_30, sVar1 != 0xd && (sVar1 != 10)) && (sVar1 != 0x2028)) &&
               (local_30 <= local_40)); local_30 = local_30 + 1) {
        }
        if (local_30 == psVar2) {
          FUN_00bcff90(param_1,(int)param_1[8],0);
        }
        else {
          FUN_00414740(local_20,psVar2,((longlong)local_30 - (longlong)psVar2) / 2 & 0xffffffff);
          FUN_00bcff90(param_1,(int)param_1[8],local_20[0]);
        }
        if (*local_30 == 0x2028) {
          local_43 = '\x01';
          local_30 = local_30 + 1;
        }
        if (*local_30 == 0xd) {
          local_41 = '\x01';
          local_30 = local_30 + 1;
        }
        if (*local_30 == 10) {
          local_42 = '\x01';
          local_30 = local_30 + 1;
        }
      } while (local_30 <= local_40);
    }
    if (*(char *)((longlong)param_1 + 0x49) == '\0') {
      local_4a = param_2[(longlong)local_24 + -1];
      if (local_4a < 0x100) {
        bVar3 = ((byte)(&DAT_00bd0af8)[(longlong)(ulonglong)local_4a >> 3] >>
                 ((ulonglong)local_4a & 7) & 1) != 0;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) || (param_2[(longlong)local_24 + -1] == 0x2028)) {
        FUN_00bcff90(param_1,(int)param_1[8],0);
      }
    }
  }
  if ((param_1[0x17] != 0) && (0 < (int)param_1[8])) {
    (*(code *)param_1[0x17])(param_1[0x18],param_1,0,(int)param_1[8]);
  }
  FUN_004b3390(param_1);
  if (local_43 == '\0') {
    if ((local_41 == '\0') || (local_42 != '\0')) {
      if ((local_42 == '\0') || (local_41 != '\0')) {
        FUN_00bd06d0(param_1,0);
      }
      else {
        FUN_00bd06d0(param_1,1);
      }
    }
    else {
      FUN_00bd06d0(param_1,2);
    }
  }
  else {
    FUN_00bd06d0(param_1,3);
  }
  FUN_00414480(local_20);
  return;
}

