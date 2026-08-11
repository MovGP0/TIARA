/* Ghidra address: 00cf9c40 */
/* Ghidra symbol: FUN_00cf9c40 */


void FUN_00cf9c40(undefined8 *param_1)

{
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    (**(code **)*param_1)(param_1);
    *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  }
  return;
}

