/* Ghidra address: 016d4e80 */
/* Ghidra symbol: FUN_016d4e80 */


void FUN_016d4e80(longlong param_1)

{
  longlong *plVar1;
  
  FUN_0064cc50(param_1,0x1c);
  FUN_0064cbf0(param_1,0x1c);
  FUN_006604b0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x490);
  FUN_005fd4e0(plVar1[0xf],0xffffff);
  (**(code **)(*plVar1 + 200))(plVar1,0,0);
  (**(code **)(*plVar1 + 0xc0))(plVar1,*(int *)(param_1 + 0x98) + -1,0);
  FUN_005fd4e0(plVar1[0xf],0xff000010);
  (**(code **)(*plVar1 + 0xc0))(plVar1,*(int *)(param_1 + 0x98) + -1,*(int *)(param_1 + 0x9c) + -1);
  (**(code **)(*plVar1 + 0xc0))(plVar1,0,*(int *)(param_1 + 0x9c) + -1);
  FUN_005fd4e0(plVar1[0xf],0xffffff);
  (**(code **)(*plVar1 + 0xc0))(plVar1,0,0);
  FUN_0064dbe0(param_1,0);
  return;
}

