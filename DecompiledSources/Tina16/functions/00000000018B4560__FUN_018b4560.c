/* Ghidra address: 018b4560 */
/* Ghidra symbol: FUN_018b4560 */


void FUN_018b4560(longlong param_1)

{
  if (*(char *)(param_1 + 0xa9) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x748) + 600))(*(longlong **)(param_1 + 0x748));
  }
  return;
}

