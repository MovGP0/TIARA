/* Ghidra address: 01894860 */
/* Ghidra symbol: FUN_01894860 */


void FUN_01894860(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006e0ec0(&PTR_FUN_018939c8,1,0);
  *(undefined8 *)(param_1 + 0x718) = uVar2;
  plVar1 = *(longlong **)(param_1 + 0x718);
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
  FUN_0064cb30(plVar1,0);
  FUN_0064cb90(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x9c));
  FUN_0064cbf0(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x98));
  FUN_0064cc50(plVar1,0xe7);
  FUN_0064c650(plVar1,5);
  FUN_006e1f40(plVar1,1);
  FUN_006e2350(plVar1,0x13);
  FUN_0065bcb0(plVar1,1);
  FUN_0064dbe0(plVar1,0);
  return;
}

