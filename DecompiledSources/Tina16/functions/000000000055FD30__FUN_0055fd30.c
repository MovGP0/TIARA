/* Ghidra address: 0055fd30 */
/* Ghidra symbol: FUN_0055fd30 */


undefined8 FUN_0055fd30(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

