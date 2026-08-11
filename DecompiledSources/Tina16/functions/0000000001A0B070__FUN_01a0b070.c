/* Ghidra address: 01a0b070 */
/* Ghidra symbol: FUN_01a0b070 */


void FUN_01a0b070(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_f8;
  local_70 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  bVar1 = *(byte *)(param_1 + 0xc0);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_20[0] = 0;
    local_40 = auStack_f8;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_50)
    ;
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0xb);
    FUN_019ee820(param_1,&local_48,0x13,local_50);
    FUN_00416ba0(local_20,local_48,L" STIM(1,1) ");
    FUN_00414480(&local_28);
    local_31 = *(char *)(param_1 + 0xc0) == '\x04';
    if ((bool)local_31) {
      FUN_00414b50(&local_28,&DAT_01a0b578);
    }
    else {
      FUN_00414b50(&local_28,L"$G_DPWR");
    }
    local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_01a04e90(param_1,&local_60,2,0);
    FUN_019f0400(param_1,&local_68,0,0);
    local_d8 = &DAT_01a0b5a8;
    local_d0 = local_60;
    local_c8 = L" ";
    local_c0 = local_68;
    local_b8 = L" IO_STM ";
    FUN_00416cd0(&local_58,7,local_20[0],local_28);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_58);
    FUN_00414480(local_20);
    FUN_00414480(&local_28);
    if ((short)param_2 == 0x2902) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                (*(longlong **)(param_1 + 0x20),&DAT_01a0b5d8);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                (*(longlong **)(param_1 + 0x20),&DAT_01a0b5ec);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
  }
  else {
    if (bVar1 == 4) {
      local_40 = auStack_f8;
      FUN_00414b50(&local_30,L" VARS: ");
    }
    else {
      FUN_00414b50(&local_30,L" PARAMS: ");
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_80)
    ;
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0xb);
    FUN_019ee820(param_1,&local_78,0x15,local_80);
    FUN_019f0400(param_1,&local_88,0,0);
    local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_01a04e90(param_1,&local_90,2,0);
    uVar3 = FUN_019ed630(param_1,1,0);
    FUN_016b9450(&local_98,uVar3);
    FUN_00416880(&local_a0,local_98);
    local_d8 = &DAT_01a0b5a8;
    local_d0 = local_90;
    local_c8 = L" Digital_Source";
    local_c0 = local_30;
    local_b8 = L"OutV=";
    local_b0 = local_a0;
    FUN_00416cd0(&local_70,8,local_78,local_88);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_70);
  }
  FUN_00414480(&local_a0);
  FUN_004144d0(&local_98);
  FUN_00414560(&local_90,10);
  FUN_00414560(&local_30,2);
  return;
}

