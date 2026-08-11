/* Ghidra address: 01a92820 */
/* Ghidra symbol: FUN_01a92820 */


undefined4 FUN_01a92820(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0xc);
}

