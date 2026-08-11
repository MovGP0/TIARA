/* Ghidra address: 01d227b0 */
/* Ghidra symbol: FUN_01d227b0 */


void FUN_01d227b0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d22ab8);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,*(int *)(param_1 + 0x9cc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,*(int *)(param_1 + 0x9cc) + -1);
  local_30 = FUN_004170c0(L"Time shift:",local_48,1);
  local_30 = local_30 + 0xb;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,*(int *)(param_1 + 0x9cc) + -1);
  local_28 = local_50;
  local_2c = 0;
  if (local_50 != 0) {
    local_2c = *(int *)(local_50 + -4);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,*(int *)(param_1 + 0x9cc) + -1);
  iVar3 = FUN_004170c0(L"Time shift:",local_60,1);
  FUN_00416dc0(&local_58,local_20[0],local_30,(local_2c - iVar3) + -10);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_58);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  FUN_00414480(local_20);
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&LAB_01d22af0);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  FUN_00414560(&local_60,4);
  return;
}

