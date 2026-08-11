/* Ghidra address: 009894d0 */
/* Ghidra symbol: FUN_009894d0 */


undefined8 FUN_009894d0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_98;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  puVar1 = auStack_98;
  if (1 < *(int *)(param_4 + 0x10)) {
    local_40 = L"normalize-space";
    local_38 = 0x11;
    local_78 = 0;
    uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_40);
    FUN_004134c0(uVar3);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    if (param_1 == (longlong *)0x0) {
      local_40 = L"normalize-space";
      local_38 = 0x11;
      local_78 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Context node not specified for %s().",&local_40);
      FUN_004134c0(uVar3);
    }
    (**(code **)(*param_1 + 0x198))(param_1,&local_50);
    FUN_009474c0(&local_48,local_50);
    local_28 = FUN_009906d0(&PTR_FUN_00927588,1,local_48);
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
      local_40 = L"normalize-space";
      local_38 = 0x11;
      local_78 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_00901df0,1,
                           L"Argument mismatch error in %s(): Expression does not evaluate to string."
                           ,&local_40);
      FUN_004134c0(uVar3);
    }
    (**(code **)(*local_20 + 0x108))(local_20,&local_60);
    FUN_009474c0(&local_58,local_60);
    local_28 = FUN_009906d0(&PTR_FUN_00927588,1,local_58);
    FUN_00410f20(local_20);
  }
  FUN_004145c0(&local_60,4);
  return local_28;
}

