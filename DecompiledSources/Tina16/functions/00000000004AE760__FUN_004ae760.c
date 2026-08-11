/* Ghidra address: 004ae760 */
/* Ghidra symbol: FUN_004ae760 */


undefined8 FUN_004ae760(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)*(int *)(param_1 + 8) * 8);
}

