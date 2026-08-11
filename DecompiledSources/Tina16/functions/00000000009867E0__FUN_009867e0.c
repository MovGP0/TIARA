/* Ghidra address: 009867e0 */
/* Ghidra symbol: FUN_009867e0 */


undefined8 FUN_009867e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  wchar_t *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_48 = 0;
  puVar1 = auStack_78;
  if (1 < *(int *)(param_4 + 0x10)) {
    local_40 = L"local-name";
    local_38 = 0x11;
    local_58 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_40);
    FUN_004134c0(uVar4);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    local_20 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
    (**(code **)(*local_20 + 0x140))(local_20,param_1);
  }
  else {
    if (*(int *)(param_4 + 0x10) == 0) {
      FUN_00594f90();
    }
    local_20 = (longlong *)
               (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                         ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  }
  cVar2 = FUN_004113d0(local_20,&PTR_FUN_00926660);
  if (cVar2 == '\0') {
    local_40 = L"local-name";
    local_38 = 0x11;
    local_58 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to node-set."
                         ,&local_40);
    FUN_004134c0(uVar4);
  }
  (**(code **)(*local_20 + 0xf0))(local_20,0);
  iVar3 = (**(code **)(*local_20 + 0x118))(local_20);
  if (iVar3 == 0) {
    local_28 = FUN_009906d0(&PTR_FUN_00927588,1,0);
  }
  else {
    uVar4 = (**(code **)(*local_20 + 0x110))(local_20,0);
    cVar2 = FUN_004113d0(uVar4,&PTR_FUN_0090be88);
    if (cVar2 == '\0') {
      plVar6 = (longlong *)(**(code **)(*local_20 + 0x110))(local_20,0);
      (**(code **)(*plVar6 + 0x148))(plVar6,&local_48);
      local_28 = FUN_009906d0(&PTR_FUN_00927588,1,local_48);
    }
    else {
      lVar5 = (**(code **)(*local_20 + 0x110))(local_20,0);
      local_28 = FUN_009906d0(&PTR_FUN_00927588,1,*(undefined8 *)(lVar5 + 0x80));
    }
  }
  FUN_00410f20(local_20);
  FUN_00414520(&local_48);
  return local_28;
}

