/* Ghidra address: 00ec7640 */
/* Ghidra symbol: FUN_00ec7640 */


void FUN_00ec7640(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_00ec0380(param_1);
  plVar1 = *(longlong **)(param_1 + 0x818);
  uVar2 = FUN_00eadf00(plVar1[0x9e],*(undefined8 *)(param_1 + 0x898));
  (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))(*(longlong **)(param_1 + 0x808),1);
  FUN_00ec80c0(param_1,0);
  return;
}

