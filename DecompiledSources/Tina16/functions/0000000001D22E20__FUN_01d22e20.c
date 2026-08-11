/* Ghidra address: 01d22e20 */
/* Ghidra symbol: FUN_01d22e20 */


void FUN_01d22e20(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d231e8);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,*(int *)(param_1 + 0x9cc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,*(int *)(param_1 + 0x9cc) + -1);
  iVar3 = FUN_004170c0(&DAT_01d231fc,local_30,1);
  FUN_00416dc0(local_20,local_28,1,iVar3 + -1);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_20[0]);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d2320c);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (*(int *)(param_1 + 0x9cc) < iVar3) {
    *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
  }
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,*(int *)(param_1 + 0x9cc) + -1);
    iVar3 = FUN_004170c0(L"<aend>",local_48,1);
    if (iVar3 != 0) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,*(int *)(param_1 + 0x9cc) + -1);
    iVar3 = FUN_004170c0(&DAT_01d2321c,local_38,1);
    if (iVar3 < 1) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,*(int *)(param_1 + 0x9cc) + -1);
      uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_40);
      *(undefined8 *)(param_1 + 0x9d0) = uVar4;
      uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
      FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
    }
    else {
      FUN_01d22b00(param_1);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (*(int *)(param_1 + 0x9cc) < iVar3) {
      *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
    }
  }
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d2324c);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  FUN_00414560(&local_48,6);
  return;
}

