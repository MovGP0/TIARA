/* Ghidra address: 00f39050 */
/* Ghidra symbol: FUN_00f39050 */


undefined8 FUN_00f39050(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

