/* Ghidra address: 00a34e50 */
/* Ghidra symbol: FUN_00a34e50 */


void FUN_00a34e50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_041a2fd8(*(longlong *)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x480));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x470));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  return;
}

