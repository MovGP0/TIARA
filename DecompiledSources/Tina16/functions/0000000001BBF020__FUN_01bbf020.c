/* Ghidra address: 01bbf020 */
/* Ghidra symbol: FUN_01bbf020 */


void FUN_01bbf020(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  int local_74;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  puVar1 = (undefined8 *)
           (*(longlong *)(param_3 + 0x30) + 0x20 + (longlong)*(int *)(param_1 + 0x20) * 0x18);
  local_40 = *puVar1;
  local_38 = puVar1[1];
  local_30 = puVar1[2];
  local_98 = param_1;
  local_90 = param_2;
  local_88 = param_3;
  local_80 = param_4;
  if ((int)local_30 != 0) {
    local_a8 = L"(wrong typ/min/max user selection)";
    FUN_00416cd0(&local_50,3,L"Cannot update C_comp parameter: ",*(undefined8 *)(param_2 + 0x18));
    FUN_01bbc400(local_98,local_50);
  }
  if (*(longlong *)(local_88 + 0x18) != 0) {
    iVar2 = FUN_00416db0(*(undefined8 *)(local_88 + 0x18),L"Non-Inverting");
    if (iVar2 == 0) {
      FUN_00414b50(&local_48,&DAT_01bbf504);
    }
    else {
      FUN_00414b50(&local_48,&DAT_01bbf514);
    }
    FUN_01bbef30(auStack_c8,L"Polarity",local_48);
  }
  FUN_01bbee30(auStack_c8,L"C_comp",local_40);
  local_68 = *(longlong *)(*(longlong *)(local_90 + 8) + 0x10);
  iVar2 = *(int *)(local_68 + 0x10);
  local_74 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_70 = FUN_004aeac0(local_68,local_74);
      puVar1 = (undefined8 *)(local_70 + 0x20 + (longlong)*(int *)(local_98 + 0x20) * 0x18);
      local_40 = *puVar1;
      local_38 = puVar1[1];
      local_30 = puVar1[2];
      if ((int)local_30 != 0) {
        local_a8 = L"(wrong typ/min/max user selection)";
        FUN_00416cd0(&local_58,3,L"Cannot update RLC parameters: ",*(undefined8 *)(local_90 + 0x18))
        ;
        FUN_01bbc400(local_98,local_58);
      }
      if ((((local_74 == 0) && (0 < *(int *)(*(longlong *)(local_80 + 0x18) + 0x10))) ||
          ((local_74 == 1 && (1 < *(int *)(*(longlong *)(local_80 + 0x18) + 0x10))))) ||
         ((local_74 == 2 && (2 < *(int *)(*(longlong *)(local_80 + 0x18) + 0x10))))) {
        puVar1 = (undefined8 *)(*(longlong *)(local_80 + 0x18) + 0x20 + (longlong)local_74 * 0x18);
        local_40 = *puVar1;
        local_38 = puVar1[1];
        local_30 = puVar1[2];
      }
      FUN_01bbee30(auStack_c8,*(undefined8 *)(local_70 + 8),local_40);
      local_74 = local_74 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_74 = 0;
  ppuVar3 = &PTR_DAT_01fde8b8;
  do {
    puVar1 = (undefined8 *)
             (*(longlong *)(local_88 + 0x38 + (longlong)local_74 * 8) + 0x20 +
             (longlong)*(int *)(local_98 + 0x20) * 0x18);
    local_40 = *puVar1;
    local_38 = puVar1[1];
    local_30 = puVar1[2];
    if ((int)local_30 != 0) {
      local_a8 = L"(wrong typ/min/max user selection)";
      FUN_00416cd0(&local_60,3,L"Cannot get ramp parameters: ",*(undefined8 *)(local_90 + 0x18));
      FUN_01bbc400(local_98,local_60);
    }
    iVar2 = 0;
    ppuVar4 = ppuVar3;
    do {
      uVar5 = local_38;
      if (iVar2 == 0) {
        uVar5 = local_40;
      }
      FUN_01bbee30(auStack_c8,*ppuVar4,uVar5);
      iVar2 = iVar2 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while (iVar2 != 2);
    local_74 = local_74 + 1;
    ppuVar3 = ppuVar3 + 2;
  } while (local_74 != 2);
  if (*(longlong *)(local_88 + 0x70) != 0) {
    puVar1 = (undefined8 *)
             (*(longlong *)(local_88 + 0x70) + 0x20 + (longlong)*(int *)(local_98 + 0x20) * 0x18);
    local_40 = *puVar1;
    local_38 = puVar1[1];
    local_30 = puVar1[2];
    FUN_01bbee30(auStack_c8,&DAT_01bbf5f4,local_40);
  }
  if (*(longlong *)(local_88 + 0x20) != 0) {
    uVar5 = FUN_00448650(*(undefined8 *)(local_88 + 0x20),PTR_DAT_02004830);
    FUN_01bbee30(auStack_c8,L"Vinl",uVar5);
  }
  if (*(longlong *)(local_88 + 0x28) != 0) {
    uVar5 = FUN_00448650(*(undefined8 *)(local_88 + 0x28),PTR_DAT_02004830);
    FUN_01bbee30(auStack_c8,L"Vinh",uVar5);
  }
  FUN_00414560(&local_60,4);
  return;
}

