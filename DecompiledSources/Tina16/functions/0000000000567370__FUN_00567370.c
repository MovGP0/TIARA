/* Ghidra address: 00567370 */
/* Ghidra symbol: FUN_00567370 */


undefined8 FUN_00567370(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

