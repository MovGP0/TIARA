/* Ghidra address: 0194e520 */
/* Ghidra symbol: FUN_0194e520 */


void FUN_0194e520(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  if ((*(char *)(param_1 + 0x1b5) == '\x02') &&
     (*(int *)(param_1 + 0x1b8) <= *(int *)(param_1 + 0x234))) {
    *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x1b8) + -1;
    *(undefined1 *)(param_1 + 0x1b2) = 1;
  }
  else if (*(longlong *)(param_1 + 0x1f0) != 0) {
    (**(code **)(param_1 + 0x1f0))(*(undefined8 *)(param_1 + 0x1f8),param_1);
  }
  return;
}

