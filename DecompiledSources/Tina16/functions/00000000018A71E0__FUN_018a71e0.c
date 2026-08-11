/* Ghidra address: 018a71e0 */
/* Ghidra symbol: FUN_018a71e0 */


void FUN_018a71e0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xb) = 1;
  if (*(char *)(param_1 + 0x551) != '\0') {
    *(undefined1 *)(param_2 + 0xb) = 5;
  }
  return;
}

