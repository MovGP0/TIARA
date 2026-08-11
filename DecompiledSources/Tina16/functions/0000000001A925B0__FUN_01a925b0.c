/* Ghidra address: 01a925b0 */
/* Ghidra symbol: FUN_01a925b0 */


undefined4 FUN_01a925b0(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0xc);
}

