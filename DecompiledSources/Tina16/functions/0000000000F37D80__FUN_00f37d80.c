/* Ghidra address: 00f37d80 */
/* Ghidra symbol: FUN_00f37d80 */


undefined8 FUN_00f37d80(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

