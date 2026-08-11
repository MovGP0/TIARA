/* Ghidra address: 00987e00 */
/* Ghidra symbol: FUN_00987e00 */


undefined8 FUN_00987e00(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  wchar_t *local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_a8;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  puVar2 = auStack_a8;
  if (*(int *)(param_4 + 0x10) != 2) {
    local_50 = L"substring-before";
    local_48 = 0x11;
    local_88 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_50);
    FUN_004134c0(uVar5);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  local_28 = (longlong *)0x0;
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
  cVar3 = FUN_004113d0(local_20,&PTR_FUN_00927588);
  if (cVar3 != '\0') {
    cVar3 = FUN_004113d0(local_28,&PTR_FUN_00927588);
    if (cVar3 != '\0') goto LAB_00987f8d;
  }
  local_50 = L"substring-before";
  local_48 = 0x11;
  local_88 = 0;
  uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                       L"Argument mismatch error in %s(): Expression does not evaluate to string.",
                       &local_50);
  FUN_004134c0(uVar5);
LAB_00987f8d:
  (**(code **)(*local_20 + 0x108))(local_20,&local_60);
  (**(code **)(*local_28 + 0x108))(local_28,&local_68);
  (**(code **)(*local_20 + 0x108))(local_20,&local_70);
  iVar4 = FUN_00417170(local_68,local_70,1);
  FUN_00416430(&local_58,local_60,1,iVar4 + -1);
  local_30 = FUN_009906d0(&PTR_FUN_00927588,1,local_58);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_004145c0(&local_70,4);
  return local_30;
}

