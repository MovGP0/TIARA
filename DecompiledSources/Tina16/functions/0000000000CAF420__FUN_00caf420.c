/* Ghidra address: 00caf420 */
/* Ghidra symbol: FUN_00caf420 */


void FUN_00caf420(undefined8 param_1,longlong param_2)

{
  if (0 < *(int *)(param_2 + 0x7c)) {
    if (*(longlong *)(param_2 + 0xa8) != 0) {
      FUN_0086e8c0(&LAB_0086e608,*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x70),
                   *(undefined4 *)(param_2 + 0x7c),0);
    }
    if (*(char *)(param_2 + 0xb8) == '\0') {
      *(longlong *)(param_2 + 0x60) =
           *(longlong *)(param_2 + 0x60) - (longlong)*(int *)(param_2 + 0x7c);
    }
  }
  return;
}

