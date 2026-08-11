/* Ghidra address: 00615ca0 */
/* Ghidra symbol: FUN_00615ca0 */


undefined8 FUN_00615ca0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

