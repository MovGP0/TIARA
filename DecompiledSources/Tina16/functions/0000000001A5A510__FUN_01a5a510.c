/* Ghidra address: 01a5a510 */
/* Ghidra symbol: FUN_01a5a510 */


undefined4 FUN_01a5a510(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(param_1 + 0x2968) + 0x68 +
          (longlong)*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) * 4);
}

