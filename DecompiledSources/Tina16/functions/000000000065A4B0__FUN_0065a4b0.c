/* Ghidra address: 0065a4b0 */
/* Ghidra symbol: FUN_0065a4b0 */


void FUN_0065a4b0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_0065bb80(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x390));
    }
    else {
      FUN_0065bb80(param_1,*(longlong *)(param_2 + 0x10) != 0);
    }
    *(undefined1 *)(param_1 + 0x394) = 1;
  }
  return;
}

