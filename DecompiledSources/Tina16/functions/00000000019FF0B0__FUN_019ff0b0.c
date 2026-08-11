/* Ghidra address: 019ff0b0 */
/* Ghidra symbol: FUN_019ff0b0 */


void FUN_019ff0b0(longlong param_1,short param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1e8 [32];
  undefined *local_1c8;
  wchar_t *local_1c0;
  undefined *local_1b8;
  undefined **local_1b0;
  wchar_t *local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  uint local_184;
  undefined *local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  wchar_t *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  byte *local_88;
  int local_7c;
  undefined1 *local_78;
  longlong local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  byte *local_40;
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a0 = auStack_1e8;
  local_168 = 0;
  local_170 = (undefined *)0x0;
  local_178 = 0;
  local_180 = (undefined *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = (wchar_t *)0x0;
  local_138 = 0;
  local_140 = (undefined *)0x0;
  local_128 = 0;
  local_130 = (undefined *)0x0;
  local_100 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = (undefined *)0x0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = (undefined *)0x0;
  local_b0 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (undefined *)0x0;
  local_68 = (wchar_t *)0x0;
  local_70 = 0;
  local_78 = (undefined *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_b0);
  local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,0xb);
  FUN_019ee820(param_1,&local_a8,param_2,local_b0);
  FUN_019f0400(param_1,&local_b8,0,0);
  FUN_019f0400(param_1,&local_c0,1,0);
  local_1c8 = (undefined *)local_b8;
  local_1c0 = L" ";
  local_1b8 = local_c0;
  local_1b0 = (undefined **)&DAT_019fff68;
  FUN_00416cd0(&local_50,6,local_a8,&DAT_019fff68);
  local_1c8 = (undefined *)((longlong)&local_33 + 1);
  local_1c0 = &local_33;
  local_88 = (byte *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,&local_31);
  bVar1 = local_88[0x40];
  local_40 = local_88;
  if (bVar1 == 0) {
    (**(code **)(**(longlong **)(local_88 + 8) + 0x18))(*(longlong **)(local_88 + 8),&local_58,0);
    local_48 = (longlong *)FUN_019febb0(param_1,*(undefined8 *)(param_1 + 0x58),local_58,param_3);
    if (local_48 != (longlong *)0x0) {
      iVar2 = (**(code **)(*local_48 + 0x1c8))(local_48);
      if (iVar2 == 1) {
        FUN_00414b50(&local_68,&DAT_019fff78);
      }
      else {
        FUN_019f0400(param_1,&local_68,1,local_48);
      }
      FUN_019f0400(param_1,&local_c8,0,local_48);
      FUN_016b9450(&local_d0,**(undefined8 **)(local_88 + 0x18));
      FUN_00416880(&local_d8,local_d0);
      local_1c8 = &DAT_019fff68;
      local_1c0 = local_68;
      local_1b8 = &DAT_019fff68;
      local_1b0 = local_d8;
      FUN_00416cd0(&local_50,6,local_50,local_c8);
    }
  }
  else if (bVar1 == 1) {
    FUN_0043f750(&local_e0,*local_88);
    local_1c8 = local_e0;
    local_1c0 = L") ";
    FUN_00416cd0(&local_50,4,local_50,L"POLY(");
    uVar3 = (uint)*local_88;
    local_7c = 0;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        (**(code **)(**(longlong **)(local_88 + 8) + 0x18))
                  (*(longlong **)(local_88 + 8),&local_58,local_7c);
        local_48 = (longlong *)
                   FUN_019febb0(param_1,*(undefined8 *)(param_1 + 0x58),local_58,param_3);
        if (local_48 == (longlong *)0x0) break;
        iVar2 = (**(code **)(*local_48 + 0x1c8))(local_48);
        if (iVar2 == 1) {
          FUN_00414b50(&local_68,&DAT_019fff78);
        }
        else {
          FUN_019f0400(param_1,&local_68,1,local_48);
        }
        FUN_019f0400(param_1,&local_e8,0,local_48);
        local_1c8 = &DAT_019fff68;
        local_1c0 = local_68;
        local_1b8 = &DAT_019fff68;
        FUN_00416cd0(&local_50,5,local_50,local_e8);
        local_7c = local_7c + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = (uint)*(ushort *)(local_88 + 0x10);
    local_7c = 0;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        FUN_016b9450(&local_f0,
                     *(undefined8 *)(*(longlong *)(local_88 + 0x18) + (longlong)local_7c * 8));
        FUN_00416880(&local_f8,local_f0);
        local_1c8 = &DAT_019fff68;
        FUN_00416cd0(&local_50,3,local_50,local_f8);
        local_7c = local_7c + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else if (bVar1 == 2) {
    FUN_019fed50(param_1,&local_60,*(undefined8 *)(local_88 + 0x20),param_3);
    local_1c8 = local_60;
    local_1c0 = L"}";
    FUN_00416cd0(&local_50,4,local_50,L"VALUE = {");
  }
  else if (*(char *)(param_1 + 0xc0) == '\x04') {
    if (param_2 == 4) {
      FUN_00414b50(&local_78,L" VPWLR");
    }
    else {
      FUN_00414b50(&local_78,L" IPWLR");
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
              (*(longlong **)(param_1 + 0x58),&local_108);
    local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,0xb);
    FUN_019ee690(param_1,&local_100,&DAT_01a0001c,local_108);
    FUN_019f0400(param_1,&local_110,0,0);
    FUN_019f0400(param_1,&local_118,1,0);
    FUN_0043f750(&local_120,*(undefined4 *)(param_1 + 0x4c));
    local_1c8 = (undefined *)local_110;
    local_1c0 = L" ";
    local_1b8 = (undefined *)local_118;
    local_1b0 = (undefined **)&DAT_019fff68;
    local_1a8 = L" R_SIMPLIS_";
    local_1a0 = local_120;
    local_198 = L" IC=1";
    FUN_00416cd0(&local_50,9,local_100,&DAT_019fff68);
    FUN_0043f750(&local_128,*(undefined4 *)(param_1 + 0x40));
    FUN_0043f750(&local_130,*(ushort *)(local_88 + 0x48) / 2 - 1);
    local_1c8 = local_78;
    local_1c0 = L" NSEG=";
    local_1b8 = local_130;
    FUN_00416cd0(&local_70,5,L".MODEL R_SIMPLIS_",local_128);
    local_184 = *(ushort *)(local_88 + 0x48) / 2 - 1;
    local_7c = 0;
    uVar3 = *(ushort *)(local_88 + 0x48) / 2;
    if (-1 < (int)local_184) {
      do {
        local_184 = uVar3;
        FUN_00414480(&local_30);
        FUN_0043f750(&local_30,local_7c);
        local_20 = 0;
        FUN_016b9450(&local_138,
                     *(undefined8 *)(*(longlong *)(local_88 + 0x50) + (longlong)(local_7c * 2) * 8))
        ;
        FUN_00416880(&local_140,local_138);
        local_1c8 = (undefined *)local_30;
        local_1c0 = L"=";
        local_1b8 = local_140;
        local_1b0 = &PTR_DAT_01a000dc;
        FUN_00416cd0(&local_20,6,local_70,&PTR_PTR_01a000b8);
        FUN_00414480(&local_28);
        FUN_0043f750(&local_28,local_7c);
        FUN_016b9450(&local_148,
                     *(undefined8 *)
                      (*(longlong *)(local_88 + 0x50) + (longlong)(local_7c * 2 + 1) * 8));
        FUN_00416880(&local_150,local_148);
        local_1c8 = &DAT_01a000cc;
        local_1c0 = local_150;
        FUN_00416cd0(&local_70,4,local_20,local_28);
        FUN_00414480(&local_20);
        FUN_00414480(&local_28);
        FUN_00414480(&local_30);
        if (local_7c % 5 == 0) {
          FUN_00416ba0(&local_158,&DAT_01a000f0,local_70);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28));
          FUN_00414480(&local_70);
        }
        local_7c = local_7c + 1;
        local_184 = local_184 - 1;
        uVar3 = local_184;
      } while (local_184 != 0);
    }
    if ((*(ushort *)(local_88 + 0x48) / 2 < 6) || (local_70 == 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_70);
    }
    else {
      FUN_00416ba0(&local_160,&DAT_01a000f0,local_70);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_160)
      ;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  else {
    FUN_019fed50(param_1,&local_60,*(undefined8 *)(local_88 + 0x20),param_3);
    local_1c8 = local_60;
    local_1c0 = L"} = ";
    FUN_00416cd0(&local_50,4,local_50,L"TABLE {");
    uVar3 = *(ushort *)(local_88 + 0x48) / 2;
    local_7c = 0;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        FUN_016b9450(&local_168,
                     *(undefined8 *)(*(longlong *)(local_88 + 0x50) + (longlong)(local_7c * 2) * 8))
        ;
        FUN_00416880(&local_170,local_168);
        FUN_016b9450(&local_178,
                     *(undefined8 *)
                      (*(longlong *)(local_88 + 0x50) + (longlong)(local_7c * 2 + 1) * 8));
        FUN_00416880(&local_180,local_178);
        local_1c8 = local_170;
        local_1c0 = L",";
        local_1b8 = local_180;
        local_1b0 = (undefined **)&DAT_019fffa0;
        FUN_00416cd0(&local_50,6,local_50,&DAT_01a00138);
        local_7c = local_7c + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_50);
  FUN_00414480(&local_180);
  FUN_004144d0(&local_178);
  FUN_00414480(&local_170);
  FUN_004144d0(&local_168);
  FUN_00414560(&local_160,3);
  FUN_004144d0(&local_148);
  FUN_00414480(&local_140);
  FUN_004144d0(&local_138);
  FUN_00414560(&local_130,8);
  FUN_004144d0(&local_f0);
  FUN_00414560(&local_e8,3);
  FUN_004144d0(&local_d0);
  FUN_00414560(&local_c8,5);
  FUN_00414560(&local_78,6);
  FUN_00414560(&local_30,2);
  return;
}

