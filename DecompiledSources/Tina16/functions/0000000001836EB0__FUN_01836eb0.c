/* Ghidra address: 01836eb0 */
/* Ghidra symbol: FUN_01836eb0 */


void FUN_01836eb0(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))(*(longlong **)(param_1 + 0x60));
  FUN_00414480(*(longlong *)(param_1 + 0x38) + 0x98);
  FUN_00414480(param_1 + 0x50);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))(*(longlong **)(param_1 + 0x58));
  FUN_0183da20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),
               *(undefined8 *)(param_1 + 0x38));
  FUN_00414480(*(longlong *)(param_1 + 0x38) + 0x90);
  return;
}

