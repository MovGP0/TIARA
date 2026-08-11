/* Ghidra address: 00fac7b0 */
/* Ghidra symbol: FUN_00fac7b0 */


void FUN_00fac7b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x700) == '\0';
  *(undefined1 *)(param_1 + 0x700) = 0;
  return;
}

