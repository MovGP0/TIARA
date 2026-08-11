/* Ghidra address: 01d1c9d0 */
/* Ghidra symbol: FUN_01d1c9d0 */


void FUN_01d1c9d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  int local_180;
  int local_16c;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  char local_11d;
  int local_11c;
  longlong local_118;
  bool local_10d;
  int local_10c;
  longlong local_108;
  bool local_fd;
  int local_fc;
  longlong local_f8;
  int local_f0;
  char local_e9;
  int local_e8;
  int local_e4;
  char local_dd;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  char local_c9;
  int local_c8;
  int local_c4;
  char local_bd;
  int local_bc;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  undefined1 local_91;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_130 = auStack_1a8;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  puVar1 = auStack_1a8;
  if ((*(char *)(param_1 + 0x78) == '\x01') &&
     (puVar1 = auStack_1a8, *(longlong *)(param_1 + 0xa8) != 0)) {
    iVar3 = FUN_01d1b660(param_1,param_2);
    FUN_0043f750(&local_138,iVar3 + 4);
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x108))
              (*(longlong **)(param_1 + 0xa8),L"width",local_138);
    iVar3 = FUN_01d1bfb0(param_1,param_2);
    FUN_0043f750(&local_140,iVar3 + 4);
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x108))
              (*(longlong **)(param_1 + 0xa8),L"height",local_140);
    puVar1 = local_130;
  }
  local_130 = puVar1;
  local_98 = 0x100;
  local_b8 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_b8 = local_b8 + -1;
  local_bc = local_b8;
  if (0 < local_b8) {
    local_bc = 1;
  }
  local_bd = *(char *)(param_1 + 0xb9);
  local_c4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_c4 = local_c4 + -1;
  local_c8 = local_c4;
  if (local_bd != '\0') {
    local_c8 = local_bc;
  }
  local_16c = local_c8;
  local_5c = 0;
  if (-1 < local_c8) {
    local_16c = local_c8 + 1;
    do {
      FUN_00414480(&local_28);
      local_20 = 0;
      if ((*(char *)(param_1 + 0xb9) == '\0') || (local_5c != 1)) {
        local_c9 = '\0';
      }
      else {
        local_c9 = '\x01';
      }
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                (*(longlong **)(param_1 + 0xa0),&local_20,local_5c);
      if (local_c9 == '\0') {
        FUN_00414b50(&local_28,local_20);
      }
      else {
        FUN_00414b50(&local_28,&DAT_01d1d640);
      }
      FUN_00414480(&local_20);
      FUN_00414b50(&local_a0,local_28);
      FUN_00414480(&local_28);
      local_d0 = 0;
      if (local_a0 != 0) {
        local_d0 = *(int *)(local_a0 + -4);
      }
      if (local_d0 * 2 < local_98) {
        local_d4 = local_98;
      }
      else {
        local_d4 = local_d0 * 2;
      }
      local_98 = local_d4;
      local_5c = local_5c + 1;
      local_16c = local_16c + -1;
    } while (local_16c != 0);
  }
  local_48 = (undefined2 *)FUN_00442b60(local_98);
  local_50 = (undefined2 *)FUN_00442b60(local_98);
  local_58 = (undefined2 *)FUN_00442b60(local_98);
  *local_48 = 0;
  *local_50 = 0;
  *local_58 = 0;
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x80));
  uVar4 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar4);
  uVar4 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),uVar4);
  iVar3 = FUN_005fce00(*(undefined8 *)(param_1 + 0x80));
  if (iVar3 < 0xe) {
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),1);
  }
  else {
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),2);
  }
  uVar5 = FUN_005ffa40(param_2);
  local_6c = thunk_FUN_03b994b9(uVar5,1);
  local_68 = param_5;
  local_88 = 0;
  local_90 = 1;
  uStack_8c = 1;
  local_84 = 0x100000001;
  local_7c = 0;
  local_64 = param_4;
  if (param_3 != 0) {
    local_78 = thunk_FUN_03ce28b8(&local_88);
    local_78 = thunk_FUN_041a19a1(param_3,local_78);
    if (local_78 != 0) {
      iVar3 = thunk_FUN_0416f828(local_78);
      local_91 = iVar3 != 0;
    }
  }
  local_60 = 1;
  while( true ) {
    local_d8 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_dc = local_d8;
    if (1 < local_d8) {
      local_dc = 2;
    }
    local_dd = *(char *)(param_1 + 0xb9);
    local_e4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_e8 = local_e4;
    if (local_dd != '\0') {
      local_e8 = local_dc;
    }
    if (local_e8 < local_60) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_168,local_60 + -1);
    cVar2 = FUN_01d120c0(param_1,local_168);
    if (cVar2 == '\0') break;
    FUN_00414480(&local_38);
    local_30 = 0;
    if ((*(char *)(param_1 + 0xb9) == '\0') || (local_60 != 2)) {
      local_e9 = '\0';
    }
    else {
      local_e9 = '\x01';
    }
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_30,local_60 + -1);
    if (local_e9 == '\0') {
      FUN_00414b50(&local_38,local_30);
    }
    else {
      FUN_00414b50(&local_38,&DAT_01d1d640);
    }
    FUN_00414480(&local_30);
    FUN_00414b50(&local_a0,local_38);
    FUN_00414480(&local_38);
    local_f0 = 0;
    if (local_a0 != 0) {
      local_f0 = *(int *)(local_a0 + -4);
    }
    if (local_f0 < 1) {
      iVar3 = FUN_01d13670(param_1,param_2,&LAB_01d1d648);
      local_68 = local_68 + iVar3 + (int)*(short *)(param_1 + 0x38);
    }
    else {
      local_48 = (undefined2 *)FUN_00442620(local_48,local_a0);
      while( true ) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                          (*(longlong **)(param_1 + 0xa0));
        if (local_60 < iVar3) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_150,local_60);
          local_f8 = local_150;
          local_fc = 0;
          if (local_150 != 0) {
            local_fc = *(int *)(local_150 + -4);
          }
          local_fd = 0 < local_fc;
        }
        else {
          local_fd = false;
        }
        if (local_fd == false) {
          local_10d = false;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_158,local_60 + -1);
          local_108 = local_158;
          local_10c = 0;
          if (local_158 != 0) {
            local_10c = *(int *)(local_158 + -4);
          }
          local_10d = 0 < local_10c;
        }
        if (local_10d == false) {
          local_11d = '\0';
        }
        else {
          local_40 = 0;
          iVar3 = local_60 + -1;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_40,iVar3);
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_160,iVar3);
          local_118 = local_160;
          local_11c = 0;
          if (local_160 != 0) {
            local_11c = *(int *)(local_160 + -4);
          }
          local_11d = *(short *)(local_40 + -2 + (longlong)local_11c * 2) == 0x5c;
          FUN_00414480(&local_40);
        }
        if (local_11d == '\0') break;
        iVar3 = FUN_01d11780(local_48);
        local_48[iVar3 + -1] = 0;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_148,local_60);
        local_50 = (undefined2 *)FUN_00442620(local_50,local_148);
        uVar4 = FUN_01d11780(local_48);
        FUN_01d11990(local_50,&local_48,uVar4);
        local_60 = local_60 + 1;
      }
      local_48 = (undefined2 *)FUN_01d1e120(param_1,local_48);
      iVar3 = FUN_00414d00(local_48);
      if ((0 < iVar3) && (*(char *)(param_1 + 0x98) == '\x01')) {
        FUN_01d1af70(&local_48);
      }
      local_188 = local_64;
      local_180 = local_68;
      FUN_01d166e0(param_1,param_2,param_3,local_48);
      iVar3 = FUN_01d13670(param_1,param_2,local_48);
      if (iVar3 != 0) {
        iVar3 = FUN_01d13670(param_1,param_2,local_48);
        local_68 = local_68 + iVar3 + (int)*(short *)(param_1 + 0x38);
      }
    }
    local_60 = local_60 + 1;
  }
  FUN_00442c30(local_48);
  FUN_00442c30(local_50);
  FUN_00442c30(local_58);
  FUN_00414560(&local_168,7);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return;
}

