/* Ghidra address: 00da1000 */
/* Ghidra symbol: FUN_00da1000 */


undefined8 FUN_00da1000(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

