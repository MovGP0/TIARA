/* Ghidra address: 00f961f0 */
/* Ghidra symbol: FUN_00f961f0 */


void FUN_00f961f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  FUN_00414ad0(param_1 + 0x700,*(undefined8 *)(param_2 + 0x110));
  FUN_00414ad0(param_1 + 0x708,*(undefined8 *)(param_2 + 0x118));
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x124);
  return;
}

