/* Ghidra address: 004e8410 */
/* Ghidra symbol: FUN_004e8410 */


undefined8 FUN_004e8410(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

