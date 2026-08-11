/* Ghidra address: 00607c60 */
/* Ghidra symbol: FUN_00607c60 */


void FUN_00607c60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00607750(*(longlong *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 0x28)) {
      thunk_FUN_0416f828(*(longlong *)(param_1 + 0x10));
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00607750(*(longlong *)(param_1 + 0x18));
    thunk_FUN_0416f828(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_005fb100(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

