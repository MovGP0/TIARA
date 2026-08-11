/* Ghidra address: 014b8c20 */
/* Ghidra symbol: FUN_014b8c20 */


void FUN_014b8c20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_19;
  
  *(longlong *)(param_1 + 0x710) = param_2;
  FUN_01779060(*(undefined8 *)(param_2 + 0x1f8),param_1 + 0x718,&local_19);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x718));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700),local_19);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x718));
  return;
}

