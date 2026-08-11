/* Ghidra address: 00eb0a40 */
/* Ghidra symbol: FUN_00eb0a40 */


undefined8 FUN_00eb0a40(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

