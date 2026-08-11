/* Ghidra address: 00fa1540 */
/* Ghidra symbol: FUN_00fa1540 */


void FUN_00fa1540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x840) == '\0';
  *(undefined1 *)(param_1 + 0x840) = 0;
  return;
}

