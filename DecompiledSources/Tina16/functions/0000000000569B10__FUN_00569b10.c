/* Ghidra address: 00569b10 */
/* Ghidra symbol: FUN_00569b10 */


undefined8 FUN_00569b10(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

