/* Ghidra address: 00ed3d20 */
/* Ghidra symbol: FUN_00ed3d20 */


void FUN_00ed3d20(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_00ecbca0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x858);
  uVar2 = FUN_00eadf00(plVar1[0x9e],*(undefined8 *)(param_1 + 0x8e0));
  (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x840) + 0x268))(*(longlong **)(param_1 + 0x840),1);
  FUN_00ed5150(param_1,0);
  return;
}

