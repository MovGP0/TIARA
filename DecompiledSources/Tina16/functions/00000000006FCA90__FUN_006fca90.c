/* Ghidra address: 006fca90 */
/* Ghidra symbol: FUN_006fca90 */


void FUN_006fca90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4dd) != param_2) {
    *(char *)(param_1 + 0x4dd) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x4a0) = 0;
    }
    FUN_00655b90();
  }
  return;
}

