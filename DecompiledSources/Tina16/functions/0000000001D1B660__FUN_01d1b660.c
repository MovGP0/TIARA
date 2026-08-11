/* Ghidra address: 01d1b660 */
/* Ghidra symbol: FUN_01d1b660 */


undefined4 FUN_01d1b660(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_148 [44];
  int local_11c;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  char local_e5;
  int local_e4;
  longlong local_e0;
  bool local_d5;
  int local_d4;
  longlong local_d0;
  bool local_c5;
  int local_c4;
  longlong local_c0;
  int local_b8;
  char local_b1;
  int local_b0;
  int local_ac;
  char local_a5;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  char local_91;
  int local_90;
  int local_8c;
  char local_85;
  int local_84;
  int local_80;
  longlong local_78;
  int local_6c;
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = auStack_148;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_78 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_6c = 0x100;
  local_80 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_80 = local_80 + -1;
  local_84 = local_80;
  if (0 < local_80) {
    local_84 = 1;
  }
  local_85 = *(char *)(param_1 + 0xb9);
  local_8c = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_8c = local_8c + -1;
  local_90 = local_8c;
  if (local_85 != '\0') {
    local_90 = local_84;
  }
  local_11c = local_90;
  local_4c = 0;
  if (-1 < local_90) {
    local_11c = local_90 + 1;
    do {
      FUN_00414480(&local_28);
      local_20 = 0;
      if ((*(char *)(param_1 + 0xb9) == '\0') || (local_4c != 1)) {
        local_91 = '\0';
      }
      else {
        local_91 = '\x01';
      }
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                (*(longlong **)(param_1 + 0xa0),&local_20,local_4c);
      if (local_91 == '\0') {
        FUN_00414b50(&local_28,local_20);
      }
      else {
        FUN_00414b50(&local_28,&LAB_01d1bfa4);
      }
      FUN_00414480(&local_20);
      FUN_00414b50(&local_78,local_28);
      FUN_00414480(&local_28);
      local_98 = 0;
      if (local_78 != 0) {
        local_98 = *(int *)(local_78 + -4);
      }
      if (local_98 * 2 < local_6c) {
        local_9c = local_6c;
      }
      else {
        local_9c = local_98 * 2;
      }
      local_6c = local_9c;
      local_4c = local_4c + 1;
      local_11c = local_11c + -1;
    } while (local_11c != 0);
  }
  local_58 = (undefined2 *)FUN_00442b60(local_6c);
  local_60 = (undefined2 *)FUN_00442b60(local_6c);
  local_68 = (undefined2 *)FUN_00442b60(local_6c);
  *local_58 = 0;
  *local_60 = 0;
  *local_68 = 0;
  local_48 = 0;
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x80));
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar2);
  local_4c = 1;
  while( true ) {
    local_a0 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_a4 = local_a0;
    if (1 < local_a0) {
      local_a4 = 2;
    }
    local_a5 = *(char *)(param_1 + 0xb9);
    local_ac = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_b0 = local_ac;
    if (local_a5 != '\0') {
      local_b0 = local_a4;
    }
    if (local_b0 < local_4c) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_118,local_4c + -1);
    cVar1 = FUN_01d120c0(param_1,local_118);
    if (cVar1 == '\0') break;
    FUN_00414480(&local_38);
    local_30 = 0;
    if ((*(char *)(param_1 + 0xb9) == '\0') || (local_4c != 2)) {
      local_b1 = '\0';
    }
    else {
      local_b1 = '\x01';
    }
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_30,local_4c + -1);
    if (local_b1 == '\0') {
      FUN_00414b50(&local_38,local_30);
    }
    else {
      FUN_00414b50(&local_38,&LAB_01d1bfa4);
    }
    FUN_00414480(&local_30);
    FUN_00414b50(&local_78,local_38);
    FUN_00414480(&local_38);
    local_b8 = 0;
    if (local_78 != 0) {
      local_b8 = *(int *)(local_78 + -4);
    }
    if (0 < local_b8) {
      local_58 = (undefined2 *)FUN_00442620(local_58,local_78);
      while( true ) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                          (*(longlong **)(param_1 + 0xa0));
        if (local_4c < iVar3) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_100,local_4c);
          local_c0 = local_100;
          local_c4 = 0;
          if (local_100 != 0) {
            local_c4 = *(int *)(local_100 + -4);
          }
          local_c5 = 0 < local_c4;
        }
        else {
          local_c5 = false;
        }
        if (local_c5 == false) {
          local_d5 = false;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_108,local_4c + -1);
          local_d0 = local_108;
          local_d4 = 0;
          if (local_108 != 0) {
            local_d4 = *(int *)(local_108 + -4);
          }
          local_d5 = 0 < local_d4;
        }
        if (local_d5 == false) {
          local_e5 = '\0';
        }
        else {
          local_40 = 0;
          iVar3 = local_4c + -1;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_40,iVar3);
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_110,iVar3);
          local_e0 = local_110;
          local_e4 = 0;
          if (local_110 != 0) {
            local_e4 = *(int *)(local_110 + -4);
          }
          local_e5 = *(short *)(local_40 + -2 + (longlong)local_e4 * 2) == 0x5c;
          FUN_00414480(&local_40);
        }
        if (local_e5 == '\0') break;
        iVar3 = FUN_01d11780(local_58);
        local_58[iVar3 + -1] = 0;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_f8,local_4c);
        local_60 = (undefined2 *)FUN_00442620(local_60,local_f8);
        uVar2 = FUN_01d11780(local_58);
        FUN_01d11990(local_60,&local_58,uVar2);
        local_4c = local_4c + 1;
      }
      local_58 = (undefined2 *)FUN_01d1e120(param_1,local_58);
      iVar3 = FUN_00414d00(local_58);
      if ((0 < iVar3) && (*(char *)(param_1 + 0x98) == '\x01')) {
        FUN_01d1af70(&local_58);
      }
      uVar2 = FUN_01d12720(param_1,param_2,local_58);
      local_48 = FUN_01d120a0(local_48,uVar2);
    }
    local_4c = local_4c + 1;
  }
  local_44 = local_48;
  *(undefined4 *)(param_1 + 0xbc) = local_48;
  FUN_00442c30(local_58);
  FUN_00442c30(local_60);
  FUN_00442c30(local_68);
  FUN_00414560(&local_118,5);
  FUN_00414480(&local_78);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return local_44;
}

