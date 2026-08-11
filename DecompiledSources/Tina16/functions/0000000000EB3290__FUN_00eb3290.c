/* Ghidra address: 00eb3290 */
/* Ghidra symbol: FUN_00eb3290 */


undefined8 FUN_00eb3290(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

