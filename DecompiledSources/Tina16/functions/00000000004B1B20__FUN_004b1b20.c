/* Ghidra address: 004b1b20 */
/* Ghidra symbol: FUN_004b1b20 */


undefined8 FUN_004b1b20(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8) +
          (longlong)*(int *)(param_1 + 8) * 8);
}

