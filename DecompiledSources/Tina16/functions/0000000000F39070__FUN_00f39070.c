/* Ghidra address: 00f39070 */
/* Ghidra symbol: FUN_00f39070 */


undefined8 FUN_00f39070(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

