/* Ghidra address: 01798610 */
/* Ghidra symbol: FUN_01798610 */


void FUN_01798610(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong unaff_RSI;
  undefined6 uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0xa58) + 0x4f0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa58) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar6 = 0;
  do {
    uVar7 = (undefined6)(unaff_RSI >> 0x10);
    unaff_RSI = CONCAT62(uVar7,0x20);
    uVar3 = FUN_01798550(param_1,uVar6);
    cVar2 = FUN_017985a0(auStack_78,uVar3);
    if (cVar2 != '\0') {
      unaff_RSI = CONCAT62(uVar7,0x2039);
    }
    iVar4 = FUN_01798550(param_1,uVar6);
    if (iVar4 == *(int *)(param_1 + 0xcb0)) {
      unaff_RSI = CONCAT62((int6)(unaff_RSI >> 0x10),0xab);
    }
    FUN_00414b50(&local_20,&PTR_DAT_01798888);
    if ((uVar6 & 4) == 4) {
      FUN_00414b50(&local_20,&PTR_DAT_0179889c);
    }
    if ((uVar6 & 8) == 8) {
      FUN_00414b50(&local_20,&DAT_017988b0);
    }
    uVar5 = uVar6 & 3;
    if ((uVar6 & 3) == 0) {
      FUN_00414b50(&local_28,&DAT_017988c4);
    }
    else if (uVar5 == 1) {
      FUN_00414b50(&local_28,&DAT_017988d8);
    }
    else if (uVar5 == 2) {
      FUN_00414b50(&local_28,&DAT_017988ec);
    }
    else if (uVar5 == 3) {
      FUN_00414b50(&local_28,&DAT_01798900);
    }
    FUN_00416780(&local_38,unaff_RSI & 0xffffffff);
    local_58 = &LAB_01798914;
    local_50 = local_28;
    local_48 = &LAB_01798914;
    local_40 = local_38;
    FUN_00416cd0(&local_30,6,&LAB_01798914,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa58) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0xc);
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0xa58) + 0x4f0));
  uVar3 = FUN_01798570(param_1,*(undefined4 *)(param_1 + 0xcb0));
  (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x268))(*(longlong **)(param_1 + 0xa58),uVar3);
  FUN_00414560(&local_38,4);
  return;
}

