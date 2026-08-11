/* Ghidra address: 0065c460 */
/* Ghidra symbol: FUN_0065c460 */


void FUN_0065c460(longlong *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  undefined1 *local_90;
  char local_7a;
  char local_79;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_90 = auStack_c8;
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (iVar3 = FUN_00654c00(param_1), iVar3 != 0)) {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_78);
    (**(code **)(*param_1 + 0x1a8))(param_1,&local_78);
    cVar1 = FUN_00423b30(&local_78);
    if (cVar1 == '\0') {
      local_1c = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],2);
      local_1c = local_1c - (local_70 - local_78);
      local_20 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],3);
      local_20 = local_20 - (local_6c - local_74);
      local_24 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],2);
      local_24 = local_24 - (local_70 - local_78);
      local_28 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],3);
      local_28 = local_28 - (local_6c - local_74);
      if (0 < *param_2) {
        *param_2 = *param_2 - local_1c;
      }
      if (0 < *param_3) {
        *param_3 = *param_3 - local_20;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 - local_24;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 - local_28;
      }
      local_30 = 0;
      local_40 = 0;
      local_34 = 0;
      local_44 = 0;
      local_38 = 0;
      local_48 = 0;
      local_3c = 0;
      local_4c = 0;
      iVar3 = FUN_00654c00();
      local_2c = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_68 = FUN_00654bc0(param_1,local_2c);
          if ((*(char *)(local_68 + 0xa9) != '\0') ||
             (((*(ushort *)(local_68 + 0x34) & 0x10) != 0 &&
              ((*(uint *)(local_68 + 0xa0) & 0x400) == 0)))) {
            local_a8 = &local_54;
            local_a0 = &local_5c;
            FUN_0065c370(auStack_c8,local_68,&local_50,&local_58);
            bVar2 = *(char *)(local_68 + 0xad) - 1;
            if (bVar2 == 0xff) {
              if ((*(byte *)(local_68 + 0xb3) & 5) == 5) {
                local_79 = '\x01';
                if (0 < local_50) {
                  iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                    (*(longlong **)(local_68 + 0xd8),2);
                  local_50 = ((local_70 - local_78) - iVar4) - local_50;
                }
                if (0 < local_54) {
                  iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                    (*(longlong **)(local_68 + 0xd8),2);
                  local_54 = ((local_70 - local_78) + local_54) - iVar4;
                }
              }
              else {
                local_79 = '\0';
              }
            }
            else if (bVar2 < 2) {
              local_79 = '\x01';
            }
            else if (*(char *)(local_68 + 0xad) == '\x05') {
              local_79 = '\x02';
            }
            else {
              local_79 = '\x03';
            }
            cVar1 = *(char *)(local_68 + 0xad);
            if (cVar1 == '\0') {
              if ((*(byte *)(local_68 + 0xb3) & 10) == 10) {
                local_7a = '\x01';
                if (0 < local_58) {
                  iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                    (*(longlong **)(local_68 + 0xd8),3);
                  local_58 = ((local_6c - local_74) - iVar4) - local_58;
                }
                if (0 < local_5c) {
                  iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                    (*(longlong **)(local_68 + 0xd8),3);
                  local_5c = ((local_6c - local_74) + local_5c) - iVar4;
                }
              }
              else {
                local_7a = '\0';
              }
            }
            else if ((byte)(cVar1 - 3U) < 2) {
              local_7a = '\x01';
            }
            else if (cVar1 == '\x05') {
              local_7a = '\x02';
            }
            else {
              local_7a = '\x03';
            }
            if ((byte)(local_79 - 1U) < 2) {
              if (((0 < local_50) && (*param_2 < local_50)) &&
                 (*param_2 = local_50, local_30 < *param_2)) {
                local_30 = *param_2;
              }
              if (((0 < local_54) && (local_54 < *param_4)) &&
                 (*param_4 = local_54, local_34 < *param_4)) {
                local_34 = *param_4;
              }
            }
            else if (local_79 == '\x03') {
              iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                (*(longlong **)(local_68 + 0xd8),2);
              local_40 = local_40 + iVar4;
              iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                (*(longlong **)(local_68 + 0xd8),2);
              local_44 = local_44 + iVar4;
            }
            if ((byte)(local_7a - 1U) < 2) {
              if (((0 < local_58) && (*param_3 < local_58)) &&
                 (*param_3 = local_58, local_38 < *param_3)) {
                local_38 = *param_3;
              }
              if (((0 < local_5c) && (local_5c < *param_5)) &&
                 (*param_5 = local_5c, local_3c < *param_5)) {
                local_3c = *param_5;
              }
            }
            else if (local_7a == '\x03') {
              iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                (*(longlong **)(local_68 + 0xd8),3);
              local_48 = local_48 + iVar4;
              iVar4 = (**(code **)(**(longlong **)(local_68 + 0xd8) + 0x20))
                                (*(longlong **)(local_68 + 0xd8),3);
              local_4c = local_4c + iVar4;
            }
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((0 < local_30) && (*param_2 < local_30 + local_40)) {
        *param_2 = local_30 + local_40;
      }
      if ((0 < local_34) && ((*param_4 == 0 || (*param_4 < local_34 + local_44)))) {
        *param_4 = local_34 + local_44;
      }
      if ((0 < local_38) && (*param_3 < local_38 + local_48)) {
        *param_3 = local_38 + local_48;
      }
      if ((0 < local_3c) && ((*param_5 == 0 || (*param_5 < local_3c + local_4c)))) {
        *param_5 = local_3c + local_4c;
      }
      if (0 < *param_2) {
        *param_2 = *param_2 + local_1c;
      }
      if (0 < *param_3) {
        *param_3 = *param_3 + local_20;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 + local_24;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 + local_28;
      }
    }
  }
  return;
}

