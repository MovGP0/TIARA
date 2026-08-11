/* Ghidra address: 00794e20 */
/* Ghidra symbol: FUN_00794e20 */


undefined8 FUN_00794e20(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x28);
}

