/* Ghidra address: 0140e650 */
/* Ghidra symbol: FUN_0140e650 */


void FUN_0140e650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x780) == '\0';
  *(undefined1 *)(param_1 + 0x780) = 0;
  return;
}

