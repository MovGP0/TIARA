/* Ghidra address: 01d1d650 */
/* Ghidra symbol: FUN_01d1d650 */


undefined8 FUN_01d1d650(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  int local_144;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 *local_110;
  char local_105;
  int local_104;
  longlong local_100;
  bool local_f5;
  int local_f4;
  longlong local_f0;
  bool local_e5;
  int local_e4;
  longlong local_e0;
  int local_d8;
  char local_d1;
  int local_d0;
  int local_cc;
  char local_c5;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  char local_b1;
  int local_b0;
  int local_ac;
  char local_a5;
  int local_a4;
  int local_a0;
  longlong local_98;
  int local_90;
  int local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_110 = auStack_198;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_98 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_90 = 0x100;
  local_a0 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_a0 = local_a0 + -1;
  local_a4 = local_a0;
  if (0 < local_a0) {
    local_a4 = 1;
  }
  local_a5 = *(char *)(param_1 + 0xb9);
  local_ac = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  local_ac = local_ac + -1;
  local_b0 = local_ac;
  if (local_a5 != '\0') {
    local_b0 = local_a4;
  }
  local_144 = local_b0;
  local_64 = 0;
  if (-1 < local_b0) {
    local_144 = local_b0 + 1;
    do {
      FUN_00414480(&local_28);
      local_20 = 0;
      if ((*(char *)(param_1 + 0xb9) == '\0') || (local_64 != 1)) {
        local_b1 = '\0';
      }
      else {
        local_b1 = '\x01';
      }
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                (*(longlong **)(param_1 + 0xa0),&local_20,local_64);
      if (local_b1 == '\0') {
        FUN_00414b50(&local_28,local_20);
      }
      else {
        FUN_00414b50(&local_28,&DAT_01d1e114);
      }
      FUN_00414480(&local_20);
      FUN_00414b50(&local_98,local_28);
      FUN_00414480(&local_28);
      local_b8 = 0;
      if (local_98 != 0) {
        local_b8 = *(int *)(local_98 + -4);
      }
      if (local_b8 * 2 < local_90) {
        local_bc = local_90;
      }
      else {
        local_bc = local_b8 * 2;
      }
      local_90 = local_bc;
      local_64 = local_64 + 1;
      local_144 = local_144 + -1;
    } while (local_144 != 0);
  }
  local_50 = (undefined2 *)FUN_00442b60(local_90);
  local_58 = (undefined2 *)FUN_00442b60(local_90);
  local_60 = (undefined2 *)FUN_00442b60(local_90);
  *local_50 = 0;
  *local_58 = 0;
  *local_60 = 0;
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x80));
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar2);
  uVar2 = FUN_01a90ee0(*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x28));
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),uVar2);
  iVar3 = FUN_005fce00(*(undefined8 *)(param_1 + 0x80));
  if (iVar3 < 0xe) {
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),1);
  }
  else {
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),2);
  }
  local_68 = 1;
  local_70 = param_4;
  local_6c = param_3;
  while( true ) {
    local_c0 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_c4 = local_c0;
    if (1 < local_c0) {
      local_c4 = 2;
    }
    local_c5 = *(char *)(param_1 + 0xb9);
    local_cc = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0))
    ;
    local_d0 = local_cc;
    if (local_c5 != '\0') {
      local_d0 = local_c4;
    }
    if (local_d0 < local_68) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_140,local_68 + -1);
    cVar1 = FUN_01d120c0(param_1,local_140);
    if (cVar1 == '\0') break;
    FUN_00414480(&local_38);
    local_30 = 0;
    if ((*(char *)(param_1 + 0xb9) == '\0') || (local_68 != 2)) {
      local_d1 = '\0';
    }
    else {
      local_d1 = '\x01';
    }
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_30,local_68 + -1);
    if (local_d1 == '\0') {
      FUN_00414b50(&local_38,local_30);
    }
    else {
      FUN_00414b50(&local_38,&DAT_01d1e114);
    }
    FUN_00414480(&local_30);
    FUN_00414b50(&local_98,local_38);
    FUN_00414480(&local_38);
    local_d8 = 0;
    if (local_98 != 0) {
      local_d8 = *(int *)(local_98 + -4);
    }
    if (local_d8 < 1) {
      iVar3 = FUN_01d13670(param_1,param_2,&DAT_01d1e11c);
      local_70 = local_70 + iVar3 + (int)*(short *)(param_1 + 0x38);
    }
    else {
      local_50 = (undefined2 *)FUN_00442620(local_50,local_98);
      while( true ) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                          (*(longlong **)(param_1 + 0xa0));
        if (local_68 < iVar3) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_120,local_68);
          local_e0 = local_120;
          local_e4 = 0;
          if (local_120 != 0) {
            local_e4 = *(int *)(local_120 + -4);
          }
          local_e5 = 0 < local_e4;
        }
        else {
          local_e5 = false;
        }
        if (local_e5 == false) {
          local_f5 = false;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_128,local_68 + -1);
          local_f0 = local_128;
          local_f4 = 0;
          if (local_128 != 0) {
            local_f4 = *(int *)(local_128 + -4);
          }
          local_f5 = 0 < local_f4;
        }
        if (local_f5 == false) {
          local_105 = '\0';
        }
        else {
          local_40 = 0;
          iVar3 = local_68 + -1;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_40,iVar3);
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_130,iVar3);
          local_100 = local_130;
          local_104 = 0;
          if (local_130 != 0) {
            local_104 = *(int *)(local_130 + -4);
          }
          local_105 = *(short *)(local_40 + -2 + (longlong)local_104 * 2) == 0x5c;
          FUN_00414480(&local_40);
        }
        if (local_105 == '\0') break;
        iVar3 = FUN_01d11780(local_50);
        local_50[iVar3 + -1] = 0;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_118,local_68);
        local_58 = (undefined2 *)FUN_00442620(local_58,local_118);
        uVar2 = FUN_01d11780(local_50);
        FUN_01d11990(local_58,&local_50,uVar2);
        local_68 = local_68 + 1;
      }
      local_50 = (undefined2 *)FUN_01d1e120(param_1,local_50);
      iVar3 = FUN_00414d00(local_50);
      if ((0 < iVar3) && (*(char *)(param_1 + 0x98) == '\x01')) {
        FUN_01d1af70(&local_50);
      }
      local_178 = local_6c;
      local_170 = local_70;
      local_168 = 0xffffffff;
      local_160 = 0xffffffff;
      local_158 = &local_48;
      FUN_01d18800(param_1,&local_138,param_2,local_50);
      iVar3 = FUN_01d13670(param_1,param_2,local_50);
      if (iVar3 != 0) {
        iVar3 = FUN_01d13670(param_1,param_2,local_50);
        local_70 = local_70 + iVar3 + (int)*(short *)(param_1 + 0x38);
      }
    }
    local_68 = local_68 + 1;
  }
  FUN_00442c30(local_50);
  FUN_00442c30(local_58);
  FUN_00442c30(local_60);
  FUN_00414560(&local_140,6);
  FUN_00414480(&local_98);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return local_48;
}

