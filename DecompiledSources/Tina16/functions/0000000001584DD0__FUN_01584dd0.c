/* Ghidra address: 01584dd0 */
/* Ghidra symbol: FUN_01584dd0 */


undefined1 FUN_01584dd0(longlong param_1)

{
  return *(undefined1 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

