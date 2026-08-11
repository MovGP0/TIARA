/* Ghidra address: 01ca6f60 */
/* Ghidra symbol: FUN_01ca6f60 */


undefined8 FUN_01ca6f60(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

