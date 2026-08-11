/* Ghidra address: 010716d0 */
/* Ghidra symbol: FUN_010716d0 */


void FUN_010716d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x71e) == '\0';
  *(undefined1 *)(param_1 + 0x71e) = 0;
  return;
}

