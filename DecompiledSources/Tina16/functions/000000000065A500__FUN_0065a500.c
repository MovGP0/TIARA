/* Ghidra address: 0065a500 */
/* Ghidra symbol: FUN_0065a500 */


void FUN_0065a500(longlong param_1)

{
  if (*(char *)(param_1 + 0x395) != '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_00659460(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x478));
    }
    *(undefined1 *)(param_1 + 0x395) = 1;
  }
  return;
}

