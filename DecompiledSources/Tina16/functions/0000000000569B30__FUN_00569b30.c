/* Ghidra address: 00569b30 */
/* Ghidra symbol: FUN_00569b30 */


undefined8 FUN_00569b30(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

