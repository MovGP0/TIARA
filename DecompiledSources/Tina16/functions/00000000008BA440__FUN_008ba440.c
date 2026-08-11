/* Ghidra address: 008ba440 */
/* Ghidra symbol: FUN_008ba440 */


undefined8 FUN_008ba440(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

