/* Ghidra address: 00818fe0 */
/* Ghidra symbol: FUN_00818fe0 */


void FUN_00818fe0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_00652a60(&PTR_FUN_00679048,1,uVar4);
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    plVar1 = *(longlong **)(param_1 + 0xc0);
    FUN_0068e690(plVar1,0);
    plVar1[0x99] = param_1;
    plVar1[0x98] = (longlong)FUN_00818660;
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
    uVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,3);
    thunk_FUN_041cc6e2(uVar4,0,0,0,0,uVar2,8);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
    thunk_FUN_03ab0e43(uVar4,0);
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_00652a60(&PTR_FUN_00679048,1,uVar4);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    plVar1 = *(longlong **)(param_1 + 0xe0);
    FUN_0068e690(plVar1,1);
    plVar1[0x99] = param_1;
    plVar1[0x98] = (longlong)FUN_008186c0;
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
    uVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
    thunk_FUN_041cc6e2(uVar4,0,0,0,uVar2,0,8);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xe0));
    thunk_FUN_03ab0e43(uVar4,0);
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_00652a60(&PTR_FUN_0067b560,1,uVar4);
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
    plVar1 = *(longlong **)(param_1 + 0xd0);
    *(undefined1 *)(plVar1 + 0x92) = 1;
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    uVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
    uVar3 = (**(code **)(*plVar1 + 0x1a0))(plVar1,3);
    thunk_FUN_041cc6e2(uVar4,0,0,0,uVar2,uVar3,8);
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_03ab0e43(uVar4,0);
  }
  return;
}

