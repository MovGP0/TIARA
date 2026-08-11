/* Ghidra address: 00bda1c0 */
/* Ghidra symbol: FUN_00bda1c0 */


ulonglong FUN_00bda1c0(longlong param_1)

{
  return (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x10) / 2 & 0xffffffff;
}

