/* Ghidra address: 01a4b730 */
/* Ghidra symbol: FUN_01a4b730 */


void FUN_01a4b730(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 600))(*(longlong **)(param_1 + 0x6b8));
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  uVar2 = FUN_0064dc90(plVar1);
  (**(code **)(*plVar1 + 0x290))(plVar1,uVar2);
  FUN_0064fca0(*(undefined8 *)(param_1 + 0x6b8),0x431,0,0);
  return;
}

