/* Ghidra address: 00fbde90 */
/* Ghidra symbol: FUN_00fbde90 */


void FUN_00fbde90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x790) == '\0';
  *(undefined1 *)(param_1 + 0x790) = 0;
  return;
}

