/* Ghidra address: 01a9fd10 */
/* Ghidra symbol: FUN_01a9fd10 */


void FUN_01a9fd10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x178);
    thunk_FUN_0415fcd2(*(undefined8 *)(param_1 + 0x148),*(int *)(param_1 + 0x188),
                       *(int *)(param_1 + 0x18c),
                       (*(int *)(param_1 + 400) - *(int *)(param_1 + 0x188)) + 1,
                       (*(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x18c)) + 1,
                       *(undefined8 *)(param_1 + 0x180),0,0,0xcc0020);
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x198));
    thunk_FUN_041a2fd8(*(undefined8 *)(param_1 + 0x180));
    thunk_FUN_0416f828(*(undefined8 *)(param_1 + 0x1a0));
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  return;
}

