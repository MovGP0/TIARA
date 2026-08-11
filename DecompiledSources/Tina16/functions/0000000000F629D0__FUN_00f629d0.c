/* Ghidra address: 00f629d0 */
/* Ghidra symbol: FUN_00f629d0 */


void FUN_00f629d0(longlong param_1)

{
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x48));
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48));
  FUN_00f62990(param_1,0);
  FUN_00f629b0(param_1,1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

