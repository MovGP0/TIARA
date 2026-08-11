/* Ghidra address: 01369db0 */
/* Ghidra symbol: FUN_01369db0 */


undefined8 FUN_01369db0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x2a) != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 0;
}

