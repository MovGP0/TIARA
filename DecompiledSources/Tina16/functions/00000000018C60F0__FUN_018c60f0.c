/* Ghidra address: 018c60f0 */
/* Ghidra symbol: FUN_018c60f0 */


void FUN_018c60f0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_018c7c00(param_1);
  FUN_0196d380(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x170));
  *(undefined1 *)(param_1 + 0x48) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))(*(longlong **)(param_1 + 0x38));
  FUN_018cfa60(*(undefined8 *)(param_1 + 0x170));
  return;
}

