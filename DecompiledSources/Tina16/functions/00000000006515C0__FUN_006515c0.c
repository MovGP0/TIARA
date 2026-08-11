/* Ghidra address: 006515c0 */
/* Ghidra symbol: FUN_006515c0 */


void FUN_006515c0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0xab) != '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_0064df10(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0xb8));
    }
    else {
      FUN_0064df10(param_1,*(undefined8 *)(param_2 + 0x10));
    }
    *(undefined1 *)(param_1 + 0xab) = 1;
  }
  return;
}

