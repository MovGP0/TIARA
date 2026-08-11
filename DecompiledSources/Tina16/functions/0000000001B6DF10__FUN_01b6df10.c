/* Ghidra address: 01b6df10 */
/* Ghidra symbol: FUN_01b6df10 */


void FUN_01b6df10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x9d8))(*(undefined8 **)(param_1 + 0x9d8));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x910) + 0x268))(*(longlong **)(param_1 + 0x910),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x60));
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x268))(*(longlong **)(param_1 + 0x918),0);
  return;
}

