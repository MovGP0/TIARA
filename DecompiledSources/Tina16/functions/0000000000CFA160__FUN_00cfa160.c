/* Ghidra address: 00cfa160 */
/* Ghidra symbol: FUN_00cfa160 */


void FUN_00cfa160(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    (**(code **)*param_1)(param_1);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

