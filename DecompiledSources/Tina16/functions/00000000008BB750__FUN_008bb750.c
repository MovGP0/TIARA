/* Ghidra address: 008bb750 */
/* Ghidra symbol: FUN_008bb750 */


undefined8 FUN_008bb750(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

