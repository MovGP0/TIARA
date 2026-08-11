/* Ghidra address: 00fadeb0 */
/* Ghidra symbol: FUN_00fadeb0 */


void FUN_00fadeb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x738) == '\0';
  *(undefined1 *)(param_1 + 0x738) = 0;
  return;
}

