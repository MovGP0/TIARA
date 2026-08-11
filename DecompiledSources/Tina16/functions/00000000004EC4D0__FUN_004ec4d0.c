/* Ghidra address: 004ec4d0 */
/* Ghidra symbol: FUN_004ec4d0 */


undefined8 FUN_004ec4d0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

