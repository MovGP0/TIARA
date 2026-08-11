/* Ghidra address: 00974330 */
/* Ghidra symbol: FUN_00974330 */


void FUN_00974330(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))(*(longlong **)(param_1 + 0x88));
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x90))(*(longlong **)(param_1 + 0x98));
  return;
}

