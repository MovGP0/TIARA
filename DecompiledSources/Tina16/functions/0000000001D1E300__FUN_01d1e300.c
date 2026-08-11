/* Ghidra address: 01d1e300 */
/* Ghidra symbol: FUN_01d1e300 */


undefined8
FUN_01d1e300(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  int local_160;
  undefined4 local_158;
  undefined4 local_150;
  int local_13c;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 *local_110;
  char local_fd;
  int local_fc;
  longlong local_f8;
  bool local_ed;
  int local_ec;
  longlong local_e8;
  bool local_dd;
  int local_dc;
  longlong local_d8;
  int local_d0;
  char local_c9;
  int local_c8;
  int local_c4;
  char local_bd;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  char local_a9;
  int local_a8;
  int local_a4;
  char local_9d;
  int local_9c;
  int local_98;
  longlong local_90;
  int local_88;
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
  
  local_110 = auStack_188;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_90 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(param_2);
  local_88 = 0x100;
  local_98 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_98 = local_98 + -1;
  local_9c = local_98;
  if (0 < local_98) {
    local_9c = 1;
  }
  local_9d = *(char *)(param_1 + 0xb9);
  local_a4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_a4 = local_a4 + -1;
  local_a8 = local_a4;
  if (local_9d != '\0') {
    local_a8 = local_9c;
  }
  local_13c = local_a8;
  local_5c = 0;
  if (-1 < local_a8) {
    local_13c = local_a8 + 1;
    do {
      FUN_00414480(&local_28);
      local_20 = 0;
      if ((*(char *)(param_1 + 0xb9) == '\0') || (local_5c != 1)) {
        local_a9 = '\0';
      }
      else {
        local_a9 = '\x01';
      }
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                (*(longlong **)(param_1 + 0xa0),&local_20,local_5c);
      if (local_a9 == '\0') {
        FUN_00414b50(&local_28,local_20);
      }
      else {
        FUN_00414b50(&local_28,&DAT_01d1edc4);
      }
      FUN_00414480(&local_20);
      FUN_00414b50(&local_90,local_28);
      FUN_00414480(&local_28);
      local_b0 = 0;
      if (local_90 != 0) {
        local_b0 = *(int *)(local_90 + -4);
      }
      if (local_b0 * 2 < local_88) {
        local_b4 = local_88;
      }
      else {
        local_b4 = local_b0 * 2;
      }
      local_88 = local_b4;
      local_5c = local_5c + 1;
      local_13c = local_13c + -1;
    } while (local_13c != 0);
  }
  local_48 = (undefined2 *)FUN_00442b60(local_88);
  local_50 = (undefined2 *)FUN_00442b60(local_88);
  local_58 = (undefined2 *)FUN_00442b60(local_88);
  *local_48 = 0;
  *local_50 = 0;
  *local_58 = 0;
  (**(code **)(**(longlong **)(param_3 + 0x70) + 0x10))
            (*(longlong **)(param_3 + 0x70),*(undefined8 *)(param_1 + 0x80));
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fc860(*(undefined8 *)(param_3 + 0x70),uVar2);
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),uVar2);
  iVar3 = FUN_005fce00(*(undefined8 *)(param_1 + 0x80));
  if (iVar3 < 0xe) {
    FUN_005fd6d0(*(undefined8 *)(param_3 + 0x78),1);
  }
  else {
    FUN_005fd6d0(*(undefined8 *)(param_3 + 0x78),2);
  }
  local_68 = param_5;
  local_60 = 1;
  local_64 = param_4;
  while( true ) {
    local_b8 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_bc = local_b8;
    if (1 < local_b8) {
      local_bc = 2;
    }
    local_bd = *(char *)(param_1 + 0xb9);
    local_c4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_c8 = local_c4;
    if (local_bd != '\0') {
      local_c8 = local_bc;
    }
    if (local_c8 < local_60) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_138,local_60 + -1);
    cVar1 = FUN_01d120c0(param_1,local_138);
    if (cVar1 == '\0') break;
    FUN_00414480(&local_38);
    local_30 = 0;
    if ((*(char *)(param_1 + 0xb9) == '\0') || (local_60 != 2)) {
      local_c9 = '\0';
    }
    else {
      local_c9 = '\x01';
    }
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_30,local_60 + -1);
    if (local_c9 == '\0') {
      FUN_00414b50(&local_38,local_30);
    }
    else {
      FUN_00414b50(&local_38,&DAT_01d1edc4);
    }
    FUN_00414480(&local_30);
    FUN_00414b50(&local_90,local_38);
    FUN_00414480(&local_38);
    local_d0 = 0;
    if (local_90 != 0) {
      local_d0 = *(int *)(local_90 + -4);
    }
    if (local_d0 < 1) {
      iVar3 = FUN_01d13670(param_1,param_3,&DAT_01d1edcc);
      local_68 = local_68 + iVar3 + (int)*(short *)(param_1 + 0x38);
    }
    else {
      local_48 = (undefined2 *)FUN_00442620(local_48,local_90);
      while( true ) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                          (*(longlong **)(param_1 + 0xa0));
        if (local_60 < iVar3) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_120,local_60);
          local_d8 = local_120;
          local_dc = 0;
          if (local_120 != 0) {
            local_dc = *(int *)(local_120 + -4);
          }
          local_dd = 0 < local_dc;
        }
        else {
          local_dd = false;
        }
        if (local_dd == false) {
          local_ed = false;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_128,local_60 + -1);
          local_e8 = local_128;
          local_ec = 0;
          if (local_128 != 0) {
            local_ec = *(int *)(local_128 + -4);
          }
          local_ed = 0 < local_ec;
        }
        if (local_ed == false) {
          local_fd = '\0';
        }
        else {
          local_40 = 0;
          iVar3 = local_60 + -1;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_40,iVar3);
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_130,iVar3);
          local_f8 = local_130;
          local_fc = 0;
          if (local_130 != 0) {
            local_fc = *(int *)(local_130 + -4);
          }
          local_fd = *(short *)(local_40 + -2 + (longlong)local_fc * 2) == 0x5c;
          FUN_00414480(&local_40);
        }
        if (local_fd == '\0') break;
        iVar3 = FUN_01d11780(local_48);
        local_48[iVar3 + -1] = 0;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_118,local_60);
        local_50 = (undefined2 *)FUN_00442620(local_50,local_118);
        uVar2 = FUN_01d11780(local_48);
        FUN_01d11990(local_50,&local_48,uVar2);
        local_60 = local_60 + 1;
      }
      local_48 = (undefined2 *)FUN_01d1e120(param_1,local_48);
      iVar3 = FUN_00414d00(local_48);
      if ((0 < iVar3) && (*(char *)(param_1 + 0x98) == '\x01')) {
        FUN_01d1af70(&local_48);
      }
      local_168 = local_64;
      local_160 = local_68;
      local_158 = param_6;
      local_150 = param_7;
      FUN_01d1aa40(param_1,param_2,param_3,local_48);
      iVar3 = FUN_01d13670(param_1,param_3,local_48);
      if (iVar3 != 0) {
        iVar3 = FUN_01d13670(param_1,param_3,local_48);
        local_68 = local_68 + iVar3 + (int)*(short *)(param_1 + 0x38);
      }
    }
    local_60 = local_60 + 1;
  }
  FUN_00442c30(local_48);
  FUN_00442c30(local_50);
  FUN_00442c30(local_58);
  FUN_00414560(&local_138,5);
  FUN_00414480(&local_90);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return param_2;
}

