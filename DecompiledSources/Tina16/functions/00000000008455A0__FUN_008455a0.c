/* Ghidra address: 008455a0 */
/* Ghidra symbol: FUN_008455a0 */


void FUN_008455a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x3f) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x198))(*(longlong **)(param_1 + 0xd0));
    *(undefined1 *)(param_1 + 0x3f) = 1;
  }
  return;
}

