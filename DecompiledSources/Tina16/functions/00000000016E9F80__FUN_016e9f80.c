/* Ghidra address: 016e9f80 */
/* Ghidra symbol: FUN_016e9f80 */


void FUN_016e9f80(longlong param_1,longlong param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined1 *)(param_2 + 0x331) = 1;
    *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_1 + 0x128);
  }
  return;
}

