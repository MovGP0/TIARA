/* Ghidra address: 00792be0 */
/* Ghidra symbol: FUN_00792be0 */


undefined8 FUN_00792be0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

