/* Ghidra address: 0105fba0 */
/* Ghidra symbol: FUN_0105fba0 */


void FUN_0105fba0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x170) != '\0') &&
     (*(longlong *)(*(longlong *)(param_2 + 0x160) + 0x10) != 0)) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x10));
    *(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x10) = 0;
  }
  return;
}

