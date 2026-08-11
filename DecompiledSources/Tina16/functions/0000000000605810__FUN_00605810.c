/* Ghidra address: 00605810 */
/* Ghidra symbol: FUN_00605810 */


longlong FUN_00605810(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  bool local_59;
  int local_58;
  int local_54;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_res8 = param_1;
  puVar2 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_70;
  }
  local_70 = puVar2;
  FUN_005fe0d0(local_res8,0);
  *(undefined8 *)(local_res8 + 0x98) = param_3;
  local_30 = param_4;
  if (param_4 == 0) {
    local_30 = thunk_FUN_040ef593(0);
  }
  iVar3 = FUN_006061d0(*(undefined8 *)(local_res8 + 0x98));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(longlong **)(local_res8 + 0x98) + 0x60))
                      (*(longlong **)(local_res8 + 0x98));
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_03e5bd07(local_30,4);
      FUN_00606c20(*(undefined8 *)(local_res8 + 0x98),iVar3 * 100);
    }
    else {
      plVar1 = *(longlong **)(local_res8 + 0x98);
      uVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
      iVar3 = thunk_FUN_03e5bd07(local_30,4);
      uVar5 = thunk_FUN_03e5bd07(local_30,8);
      uVar4 = thunk_FUN_03f3ed25(uVar4,iVar3 * 100,uVar5);
      FUN_00606c20(plVar1,uVar4);
    }
  }
  iVar3 = FUN_006061a0(*(undefined8 *)(local_res8 + 0x98));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(longlong **)(local_res8 + 0x98) + 0x48))
                      (*(longlong **)(local_res8 + 0x98));
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_03e5bd07(local_30,6);
      FUN_00606bd0(*(undefined8 *)(local_res8 + 0x98),iVar3 * 100);
    }
    else {
      plVar1 = *(longlong **)(local_res8 + 0x98);
      uVar4 = (**(code **)(*plVar1 + 0x48))(plVar1);
      iVar3 = thunk_FUN_03e5bd07(local_30,6);
      uVar5 = thunk_FUN_03e5bd07(local_30,10);
      uVar4 = thunk_FUN_03f3ed25(uVar4,iVar3 * 100,uVar5);
      FUN_00606bd0(plVar1,uVar4);
    }
  }
  uVar4 = FUN_006061d0(*(undefined8 *)(local_res8 + 0x98));
  uVar5 = FUN_006061a0(*(undefined8 *)(local_res8 + 0x98));
  local_88 = CONCAT44(local_88._4_4_,uVar5);
  FUN_004238d0(local_40,0,0,uVar4);
  local_54 = 0;
  if (param_5 != 0) {
    local_54 = *(int *)(param_5 + -4);
  }
  if (local_54 < 1) {
    local_58 = 0;
    if (param_6 != 0) {
      local_58 = *(int *)(param_6 + -4);
    }
    local_59 = 0 < local_58;
  }
  else {
    local_59 = true;
  }
  if (local_59 == false) {
    local_50 = 0;
  }
  else {
    local_88 = param_6;
    local_80 = &LAB_00605c3c;
    FUN_00416cd0(&local_78,4,param_5,&DAT_00605c2c);
    local_50 = FUN_00416740(local_78);
  }
  local_48 = thunk_FUN_03b5b617(local_30,0,local_40,local_50);
  if (local_48 == 0) {
    FUN_005fff20();
  }
  FUN_005ffb10(local_res8,local_48);
  if (param_4 == 0) {
    thunk_FUN_041a9b5c(0,local_30);
  }
  FUN_00414480(&local_78);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

