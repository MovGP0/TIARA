/* Ghidra address: 009a9760 */
/* Ghidra symbol: FUN_009a9760 */


undefined4 FUN_009a9760(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

