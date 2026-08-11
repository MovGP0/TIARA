/* Ghidra address: 017b67a0 */
/* Ghidra symbol: FUN_017b67a0 */


void FUN_017b67a0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x7c8) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x780) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5d) = 2;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x788) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5d) = 1;
  }
  if (*(char *)(*(longlong *)(param_2 + 2000) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 0x5d) = 3;
  }
  *(undefined1 *)(param_1 + 100) = 0;
  if (*(char *)(*(longlong *)(param_2 + 0x7a8) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 100) = 2;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x7b0) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x7d8) + 0x328) != '\0') {
    *(undefined1 *)(param_1 + 100) = 3;
  }
  return;
}

