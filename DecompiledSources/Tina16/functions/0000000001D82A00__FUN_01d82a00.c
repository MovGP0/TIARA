/* Ghidra address: 01d82a00 */
/* Ghidra symbol: FUN_01d82a00 */


void FUN_01d82a00(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x148))(*(longlong **)(param_1 + 0xa88),2);
  if (*(char *)(param_1 + 0xaa0) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x948) + 0x328) == '\0') {
      *(undefined1 *)(param_1 + 0xab8) = 0xf;
    }
    else {
      *(undefined1 *)(param_1 + 0xab8) = 4;
    }
  }
  return;
}

