/* Ghidra address: 00615c80 */
/* Ghidra symbol: FUN_00615c80 */


undefined8 FUN_00615c80(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

