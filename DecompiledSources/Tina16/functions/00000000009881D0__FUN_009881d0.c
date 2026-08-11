/* Ghidra address: 009881d0 */
/* Ghidra symbol: FUN_009881d0 */


undefined8 FUN_009881d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  wchar_t *local_80;
  undefined1 local_78;
  undefined1 *local_70;
  uint local_64;
  longlong local_60;
  int local_58;
  uint local_54;
  longlong local_50;
  uint local_44;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_e8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_20[0] = 0;
  puVar2 = auStack_e8;
  if (*(int *)(param_4 + 0x10) != 2) {
    local_80 = L"substring-after";
    local_78 = 0x11;
    local_c8 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_80);
    FUN_004134c0(uVar4);
    puVar2 = local_70;
  }
  local_70 = puVar2;
  local_30 = (longlong *)0x0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_28 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  if (*(uint *)(param_4 + 0x10) < 2) {
    FUN_00594f90();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 8);
  local_30 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
  cVar3 = FUN_004113d0(local_28,&PTR_FUN_00927588);
  if (cVar3 != '\0') {
    cVar3 = FUN_004113d0(local_30,&PTR_FUN_00927588);
    if (cVar3 != '\0') goto LAB_00988380;
  }
  local_80 = L"substring-after";
  local_78 = 0x11;
  local_c8 = 0;
  uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                       L"Argument mismatch error in %s(): Expression does not evaluate to string.",
                       &local_80);
  FUN_004134c0(uVar4);
LAB_00988380:
  (**(code **)(*local_30 + 0x108))(local_30,&local_88);
  local_40 = local_88;
  local_44 = 0;
  if (local_88 != 0) {
    local_44 = *(uint *)(local_88 + -4) >> 1;
  }
  if (local_44 == 0) {
    (**(code **)(*local_28 + 0x108))(local_28,&local_90);
    local_38 = FUN_009906d0(&PTR_FUN_00927588,1,local_90);
  }
  else {
    local_20[0] = 0;
    (**(code **)(*local_28 + 0x108))(local_28,local_20);
    (**(code **)(*local_30 + 0x108))(local_30,&local_98);
    (**(code **)(*local_28 + 0x108))(local_28,&local_a0);
    local_58 = FUN_00417170(local_98,local_a0,1);
    (**(code **)(*local_30 + 0x108))(local_30,&local_a8);
    local_50 = local_a8;
    local_54 = 0;
    if (local_a8 != 0) {
      local_54 = *(uint *)(local_a8 + -4) >> 1;
    }
    (**(code **)(*local_28 + 0x108))(local_28,&local_b0);
    local_60 = local_b0;
    local_64 = 0;
    if (local_b0 != 0) {
      local_64 = *(uint *)(local_b0 + -4) >> 1;
    }
    FUN_00416430(&local_b8,local_20[0],local_58 + local_54,local_64);
    local_38 = FUN_009906d0(&PTR_FUN_00927588,1,local_b8);
    FUN_00414520(local_20);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_004145c0(&local_b8,7);
  return local_38;
}

