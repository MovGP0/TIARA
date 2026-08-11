/* Ghidra address: 004f6b60 */
/* Ghidra symbol: FUN_004f6b60 */


undefined8 FUN_004f6b60(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

