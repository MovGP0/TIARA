/* Ghidra address: 01720f00 */
/* Ghidra symbol: FUN_01720f00 */


undefined8 FUN_01720f00(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

