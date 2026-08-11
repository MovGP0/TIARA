/* Ghidra address: 013eb620 */
/* Ghidra symbol: FUN_013eb620 */


void FUN_013eb620(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x700) == '\0';
  *(undefined1 *)(param_1 + 0x700) = 0;
  return;
}

