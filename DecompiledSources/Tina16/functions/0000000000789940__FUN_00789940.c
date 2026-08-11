/* Ghidra address: 00789940 */
/* Ghidra symbol: FUN_00789940 */


void FUN_00789940(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0xb8) + 8) == 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x18) + 0x18),
                       *(undefined8 *)(param_2 + 0x80));
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x78),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x18) + 0x18),
                     param_2 + 0x30);
  return;
}

