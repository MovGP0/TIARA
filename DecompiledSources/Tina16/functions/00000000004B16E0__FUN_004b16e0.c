/* Ghidra address: 004b16e0 */
/* Ghidra symbol: FUN_004b16e0 */


void FUN_004b16e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),*(longlong *)(param_1 + 0x10));
  }
  return;
}

