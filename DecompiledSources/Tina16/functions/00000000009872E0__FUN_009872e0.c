/* Ghidra address: 009872e0 */
/* Ghidra symbol: FUN_009872e0 */


undefined8 FUN_009872e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_6c;
  undefined8 local_68;
  wchar_t *local_60;
  undefined1 local_58;
  undefined1 *local_50;
  undefined8 local_38;
  uint local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_68 = 0;
  local_38 = 0;
  puVar3 = auStack_a8;
  if (*(int *)(param_4 + 0x10) < 2) {
    local_60 = L"concat";
    local_58 = 0x11;
    local_88 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_60);
    FUN_004134c0(uVar5);
    puVar3 = local_50;
  }
  local_50 = puVar3;
  FUN_00414520(&local_38);
  local_6c = *(int *)(param_4 + 0x10) + -1;
  local_2c = 0;
  iVar2 = *(int *)(param_4 + 0x10);
  if (-1 < local_6c) {
    do {
      local_6c = iVar2;
      if (*(uint *)(param_4 + 0x10) <= local_2c) {
        FUN_00594f90();
      }
      plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + (longlong)(int)local_2c * 8);
      local_20 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
      cVar4 = FUN_004113d0(local_20,&PTR_FUN_00927588);
      if (cVar4 == '\0') {
        local_60 = L"concat";
        local_58 = 0x11;
        local_88 = 0;
        uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                             L"Argument mismatch error in %s(): Expression does not evaluate to string."
                             ,&local_60);
        FUN_004134c0(uVar5);
      }
      (**(code **)(*local_20 + 0x108))(local_20,&local_68);
      FUN_00415f90(&local_38,local_68);
      FUN_00410f20(local_20);
      local_2c = local_2c + 1;
      local_6c = local_6c + -1;
      iVar2 = local_6c;
    } while (local_6c != 0);
  }
  local_28 = FUN_009906d0(&PTR_FUN_00927588,1,local_38);
  FUN_00414520(&local_68);
  FUN_00414520(&local_38);
  return local_28;
}

