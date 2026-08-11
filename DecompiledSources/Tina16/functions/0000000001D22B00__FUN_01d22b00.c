/* Ghidra address: 01d22b00 */
/* Ghidra symbol: FUN_01d22b00 */


void FUN_01d22b00(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d22dd8);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,*(int *)(param_1 + 0x9cc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,*(int *)(param_1 + 0x9cc) + -1);
  iVar3 = FUN_004170c0(&DAT_01d22dec,local_30,1);
  FUN_00416dc0(local_20,local_28,1,iVar3 + -1);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_20[0]);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d22e00);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (*(int *)(param_1 + 0x9cc) < iVar3) {
    *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,*(int *)(param_1 + 0x9cc) + -1);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_38);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&LAB_01d22e10);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  FUN_00414560(&local_38,4);
  return;
}

