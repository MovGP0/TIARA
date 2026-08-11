/* Ghidra address: 004b3880 */
/* Ghidra symbol: FUN_004b3880 */


undefined8 FUN_004b3880(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  byte local_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 *local_80;
  char local_69;
  byte local_68 [32];
  int local_48;
  int local_44;
  ushort *local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_80 = auStack_e8;
  local_c0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_38 = 0;
  local_48 = (**(code **)(*param_1 + 0x28))(param_1);
  if (local_48 == 1) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_88,0);
    if (local_88 == 0) {
      if (*(short *)((longlong)param_1 + 0x2e) == 0) {
        FUN_00414480(param_2);
      }
      else {
        FUN_00416780(&local_90,*(short *)((longlong)param_1 + 0x2e));
        FUN_00416780(&local_98,*(undefined2 *)((longlong)param_1 + 0x2e));
        FUN_00416ba0(param_2,local_90,local_98);
      }
      goto code_r0x004b3bec;
    }
  }
  FUN_00414480(param_2);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0;
  local_68[0x10] = 0;
  local_68[0x11] = 0;
  local_68[0x12] = 0;
  local_68[0x13] = 0;
  local_68[0x14] = 0;
  local_68[0x15] = 0;
  local_68[0x16] = 0;
  local_68[0x17] = 0;
  local_68[0x18] = 0;
  local_68[0x19] = 0;
  local_68[0x1a] = 0;
  local_68[0x1b] = 0;
  local_68[0x1c] = 0;
  local_68[0x1d] = 0;
  local_68[0x1e] = 0;
  local_68[0x1f] = 0;
  local_69 = '\0';
  if (*(short *)((longlong)param_1 + 0x2e) != 0) {
    local_68[0] = 1;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[6] = 0;
    local_68[7] = 0;
    local_68[8] = 0;
    local_68[9] = 0;
    local_68[10] = 0;
    local_68[0xb] = 0;
    local_68[0xc] = 0;
    local_68[0xd] = 0;
    local_68[0xe] = 0;
    local_68[0xf] = 0;
    local_68[0x10] = 0;
    local_68[0x11] = 0;
    local_68[0x12] = 0;
    local_68[0x13] = 0;
    local_68[0x14] = 0;
    local_68[0x15] = 0;
    local_68[0x16] = 0;
    local_68[0x17] = 0;
    local_68[0x18] = 0;
    local_68[0x19] = 0;
    local_68[0x1a] = 0;
    local_68[0x1b] = 0;
    local_68[0x1c] = 0;
    local_68[0x1d] = 0;
    local_68[0x1e] = 0;
    local_68[0x1f] = 0;
    if ((*(ushort *)((longlong)param_1 + 0x2e) < 0x100) &&
       (*(ushort *)((longlong)param_1 + 0x2c) < 0x100)) {
      local_69 = '\0';
    }
    else {
      local_69 = '\x01';
    }
    if (local_69 == '\0') {
      FUN_0040f630(local_b8,(char)*(ushort *)((longlong)param_1 + 0x2e),0x20);
      local_b8[(longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x2c) >> 3] =
           local_b8[(longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x2c) >> 3] |
           '\x01' << ((ulonglong)*(byte *)((longlong)param_1 + 0x2c) & 7);
      FUN_0040f7c0(local_68,local_b8,0x20);
    }
    if ((*(byte *)((longlong)param_1 + 0x32) & 1) == 0) {
      FUN_0040f7c0(local_68,&DAT_004b3ca8,0x20);
    }
  }
  local_30 = FUN_00453cc0(&DAT_00438748,1);
  local_44 = 0;
  iVar2 = local_48;
  if (-1 < local_48 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38,local_44);
      if (*(short *)((longlong)param_1 + 0x2e) != 0) {
        local_40 = (ushort *)FUN_00416740(local_38);
        while( true ) {
          uVar1 = *local_40;
          if (uVar1 < 0x100) {
            bVar3 = (local_68[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) ||
             ((local_69 != '\0' &&
              ((*local_40 == *(ushort *)((longlong)param_1 + 0x2e) ||
               (*local_40 == *(ushort *)((longlong)param_1 + 0x2c))))))) break;
          local_40 = (ushort *)FUN_004983e0(local_40);
        }
        if (*local_40 != 0) {
          FUN_0043eca0(&local_c0,local_38,*(undefined2 *)((longlong)param_1 + 0x2e));
          FUN_00414b50(&local_38,local_c0);
        }
      }
      FUN_00453060(local_30,local_38);
      FUN_00453560(local_30,*(undefined2 *)((longlong)param_1 + 0x2c));
      local_44 = local_44 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < *(int *)(local_30 + 0x10)) {
    FUN_00455960(local_30,*(int *)(local_30 + 0x10) + -1);
    FUN_00455ae0(local_30,param_2,1);
  }
  FUN_00410f20(local_30);
code_r0x004b3bec:
  FUN_00414480(&local_c0);
  FUN_00414560(&local_98,3);
  FUN_00414480(&local_38);
  return param_2;
}

