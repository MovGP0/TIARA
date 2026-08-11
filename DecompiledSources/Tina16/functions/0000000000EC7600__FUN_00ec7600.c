/* Ghidra address: 00ec7600 */
/* Ghidra symbol: FUN_00ec7600 */


void FUN_00ec7600(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x90))(*(longlong **)(param_1 + 0x858));
  FUN_00ec0aa0(param_1);
  FUN_00ec0380(param_1);
  return;
}

