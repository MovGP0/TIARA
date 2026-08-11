/* Ghidra address: 011173b0 */
/* Ghidra symbol: FUN_011173b0 */


void FUN_011173b0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x73c) = param_2;
  if (param_2 == 8) {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x6e0));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x700),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x640));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6f0),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x730) + 0x648));
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x730) + 0x64c));
  }
  else {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x6e8));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),DAT_02030140);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x728),DAT_02030148);
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),DAT_02030150);
  }
  return;
}

