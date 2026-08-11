/* Ghidra address: 00e809f0 */
/* Ghidra symbol: FUN_00e809f0 */


void FUN_00e809f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x718) == '\0';
  *(undefined1 *)(param_1 + 0x718) = 0;
  return;
}

