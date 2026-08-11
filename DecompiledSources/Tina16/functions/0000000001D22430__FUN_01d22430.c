/* Ghidra address: 01d22430 */
/* Ghidra symbol: FUN_01d22430 */


void FUN_01d22430(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_2d;
  int local_2c;
  longlong local_28;
  longlong local_20 [2];
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,*(int *)(param_1 + 0x9cc) + -1);
  FUN_00416ba0(&local_48,&DAT_01d22798,local_50);
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_48);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (*(int *)(param_1 + 0x9cc) < iVar3) {
      local_20[0] = 0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_20,*(int *)(param_1 + 0x9cc) + -1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,*(int *)(param_1 + 0x9cc) + -1);
      local_28 = local_60;
      local_2c = 0;
      if (local_60 != 0) {
        local_2c = *(int *)(local_60 + -4);
      }
      local_2d = *(short *)(local_20[0] + -2 + (longlong)local_2c * 2) == 0x5c;
      FUN_00414480(local_20);
    }
    else {
      local_2d = '\0';
    }
    if (local_2d == '\0') break;
    iVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    *(undefined2 *)(*(longlong *)(param_1 + 0x9d8) + (longlong)(iVar3 + -1) * 2) = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,*(undefined4 *)(param_1 + 0x9cc));
    uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_58);
    *(undefined8 *)(param_1 + 0x9d0) = uVar4;
    uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
    *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
  }
  uVar4 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d227a8);
  *(undefined8 *)(param_1 + 0x9d0) = uVar4;
  uVar2 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar2);
  FUN_00414560(&local_60,4);
  return;
}

