/* Ghidra address: 00987620 */
/* Ghidra symbol: FUN_00987620 */


undefined8 FUN_00987620(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  wchar_t *local_60;
  undefined1 local_58;
  undefined1 *local_50;
  uint local_44;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_20[0] = 0;
  puVar2 = auStack_a8;
  if (*(int *)(param_4 + 0x10) != 2) {
    local_60 = L"starts-with";
    local_58 = 0x11;
    local_88 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_60);
    FUN_004134c0(uVar5);
    puVar2 = local_50;
  }
  local_50 = puVar2;
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
    if (cVar3 != '\0') goto code_r0x009877a8;
  }
  local_60 = L"starts-with";
  local_58 = 0x11;
  local_88 = 0;
  uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                       L"Argument mismatch error in %s(): Expression does not evaluate to string.",
                       &local_60);
  FUN_004134c0(uVar5);
code_r0x009877a8:
  local_20[0] = 0;
  (**(code **)(*local_28 + 0x108))(local_28,local_20);
  (**(code **)(*local_30 + 0x108))(local_30,&local_68);
  local_40 = local_68;
  local_44 = 0;
  if (local_68 != 0) {
    local_44 = *(uint *)(local_68 + -4) >> 1;
  }
  FUN_00416430(&local_70,local_20[0],1,local_44);
  (**(code **)(*local_30 + 0x108))(local_30,&local_78);
  iVar4 = FUN_008f7250(local_70,local_78);
  local_38 = FUN_009902a0(&PTR_FUN_00926d78,1,iVar4 == 0);
  FUN_00414520(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_004145c0(&local_78,3);
  return local_38;
}

