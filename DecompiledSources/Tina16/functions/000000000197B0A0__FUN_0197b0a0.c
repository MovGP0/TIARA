/* Ghidra address: 0197b0a0 */
/* Ghidra symbol: FUN_0197b0a0 */


void FUN_0197b0a0(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    FUN_01979a90(param_1);
    FUN_0197afe0(param_1);
    FUN_018d0f40(*(undefined8 *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return;
}

