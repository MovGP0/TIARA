/* Ghidra address: 004d2280 */
/* Ghidra symbol: FUN_004d2280 */


undefined8 FUN_004d2280(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) +
          (longlong)*(int *)(param_1 + 8) * 8);
}

