/* Ghidra address: 018cb4a0 */
/* Ghidra symbol: FUN_018cb4a0 */


void FUN_018cb4a0(longlong param_1)

{
  FUN_01978870(param_1);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x48))(*(longlong **)(param_1 + 0x98));
  *(undefined1 *)(param_1 + 0xf2) = 0;
  return;
}

