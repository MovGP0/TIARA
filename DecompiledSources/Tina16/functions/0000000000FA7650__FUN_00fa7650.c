/* Ghidra address: 00fa7650 */
/* Ghidra symbol: FUN_00fa7650 */


void FUN_00fa7650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x838) == '\0';
  *(undefined1 *)(param_1 + 0x838) = 0;
  return;
}

