/* Ghidra address: 004ff4e0 */
/* Ghidra symbol: FUN_004ff4e0 */


undefined4 FUN_004ff4e0(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 4);
}

