/* Ghidra address: 00989890 */
/* Ghidra symbol: FUN_00989890 */


undefined8 FUN_00989890(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_a8;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  puVar2 = auStack_a8;
  if (*(int *)(param_4 + 0x10) != 3) {
    local_50 = L"translate";
    local_48 = 0x11;
    local_88 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_50);
    FUN_004134c0(uVar4);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_20 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  if (*(uint *)(param_4 + 0x10) < 2) {
    FUN_00594f90();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 8);
  local_28 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
  if (*(uint *)(param_4 + 0x10) < 3) {
    FUN_00594f90();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x10);
  local_30 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
  cVar3 = FUN_004113d0(local_20,&PTR_FUN_00927588);
  if (cVar3 != '\0') {
    cVar3 = FUN_004113d0(local_28,&PTR_FUN_00927588);
    if (cVar3 != '\0') {
      cVar3 = FUN_004113d0(local_30,&PTR_FUN_00927588);
      if (cVar3 != '\0') goto LAB_00989a78;
    }
  }
  local_50 = L"translate";
  local_48 = 0x11;
  local_88 = 0;
  uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                       L"Argument mismatch error in %s(): Expression does not evaluate to string.",
                       &local_50);
  FUN_004134c0(uVar4);
LAB_00989a78:
  (**(code **)(*local_20 + 0x108))(local_20,&local_60);
  (**(code **)(*local_28 + 0x108))(local_28,&local_68);
  (**(code **)(*local_30 + 0x108))(local_30,&local_70);
  FUN_008f7370(&local_58,local_60,local_68,local_70);
  local_38 = FUN_009906d0(&PTR_FUN_00927588,1,local_58);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_004145c0(&local_70,4);
  return local_38;
}

