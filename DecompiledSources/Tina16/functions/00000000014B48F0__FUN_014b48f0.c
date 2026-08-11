/* Ghidra address: 014b48f0 */
/* Ghidra symbol: FUN_014b48f0 */


void FUN_014b48f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x895) != '\0') {
    *(undefined1 *)(param_1 + 0x895) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x860) + 0x180))(*(longlong **)(param_1 + 0x860));
  }
  return;
}

