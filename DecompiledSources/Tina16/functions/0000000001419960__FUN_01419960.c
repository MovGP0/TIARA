/* Ghidra address: 01419960 */
/* Ghidra symbol: FUN_01419960 */


void FUN_01419960(longlong param_1)

{
  if (*(int *)(param_1 + 0xf88) == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x760) + 8))(*(longlong **)(param_1 + 0x760),0);
  }
  return;
}

