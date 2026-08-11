/* Ghidra address: 00aa1cc0 */
/* Ghidra symbol: FUN_00aa1cc0 */


void FUN_00aa1cc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FUN_00a74eb0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x298),
                 *(undefined8 *)(param_1 + 0x580),*(undefined8 *)(param_1 + 0x568));
  }
  return;
}

