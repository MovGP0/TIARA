/* Ghidra address: 006dfc90 */
/* Ghidra symbol: FUN_006dfc90 */


void FUN_006dfc90(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 8) + 0x58d) = 0;
  if (*(char *)(param_2 + 0x4f) != '\0') {
    FUN_006df710(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

