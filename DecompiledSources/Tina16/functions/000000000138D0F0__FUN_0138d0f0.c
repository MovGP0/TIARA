/* Ghidra address: 0138d0f0 */
/* Ghidra symbol: FUN_0138d0f0 */


void FUN_0138d0f0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0xd80) + 0x328) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xe0))(*(longlong **)(param_1 + 0xe88),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xe0))(*(longlong **)(param_1 + 0xe88),1);
  }
  return;
}

