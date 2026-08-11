/* Ghidra address: 01369410 */
/* Ghidra symbol: FUN_01369410 */


undefined8 FUN_01369410(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 0;
}

