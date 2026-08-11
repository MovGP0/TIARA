/* Ghidra address: 00d7c820 */
/* Ghidra symbol: FUN_00d7c820 */


void FUN_00d7c820(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x60) + 0x88))(*(undefined8 *)(param_2 + 0x60));
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 0x38));
  *(undefined4 *)(*(longlong *)(param_2 + 0x60) + 0x114) = *(undefined4 *)(param_2 + 0x34);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

