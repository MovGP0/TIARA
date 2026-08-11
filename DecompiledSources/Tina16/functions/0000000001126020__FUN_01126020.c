/* Ghidra address: 01126020 */
/* Ghidra symbol: FUN_01126020 */


void FUN_01126020(longlong param_1,undefined8 *param_2)

{
  FUN_017e3010(*(undefined8 *)(param_1 + 0xde0),param_2);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0xb8),0xff);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x818),*param_2);
  (**(code **)(**(longlong **)(param_1 + 0x808) + 600))(*(longlong **)(param_1 + 0x808));
  thunk_FUN_03f3ed6d(0x30);
  return;
}

