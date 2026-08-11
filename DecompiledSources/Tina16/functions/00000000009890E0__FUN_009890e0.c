/* Ghidra address: 009890e0 */
/* Ghidra symbol: FUN_009890e0 */


undefined8 FUN_009890e0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_70;
  longlong local_68;
  wchar_t *local_60;
  undefined1 local_58;
  undefined1 *local_50;
  uint local_44;
  longlong local_40;
  uint local_34;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  puVar1 = auStack_a8;
  if (1 < *(int *)(param_4 + 0x10)) {
    local_60 = L"string-length";
    local_58 = 0x11;
    local_88 = 0;
    uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_60);
    FUN_004134c0(uVar3);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    if (param_1 == (longlong *)0x0) {
      local_60 = L"string-length";
      local_58 = 0x11;
      local_88 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Context node not specified for %s().",&local_60);
      FUN_004134c0(uVar3);
    }
    (**(code **)(*param_1 + 0x198))(param_1,&local_68);
    local_30 = local_68;
    local_34 = 0;
    if (local_68 != 0) {
      local_34 = *(uint *)(local_68 + -4) >> 1;
    }
    local_28 = FUN_00990420(&PTR_FUN_00927180,1,(double)local_34);
  }
  else {
    if (*(int *)(param_4 + 0x10) == 0) {
      FUN_00594f90();
    }
    local_20 = (longlong *)
               (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                         ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
    cVar2 = FUN_004113d0(local_20,&PTR_FUN_00927588);
    if (cVar2 == '\0') {
      local_60 = L"string-length";
      local_58 = 0x11;
      local_88 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,
                           L"Argument mismatch error in %s(): Expression does not evaluate to string."
                           ,&local_60);
      FUN_004134c0(uVar3);
    }
    (**(code **)(*local_20 + 0x108))(local_20,&local_70);
    local_40 = local_70;
    local_44 = 0;
    if (local_70 != 0) {
      local_44 = *(uint *)(local_70 + -4) >> 1;
    }
    local_28 = FUN_00990420(&PTR_FUN_00927180,1,(double)local_44);
    FUN_00410f20(local_20);
  }
  FUN_004145c0(&local_70,2);
  return local_28;
}

