/* Ghidra address: 01bff0c0 */
/* Ghidra symbol: FUN_01bff0c0 */


void FUN_01bff0c0(longlong param_1,longlong param_2)

{
  if ((param_1 != 0) && (*(int *)(*(longlong *)(param_1 + 0xb8) + 0x28) != *(int *)(param_2 + 0x9c))
     ) {
    FUN_005fc860(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_2 + 0x9c));
  }
  return;
}

