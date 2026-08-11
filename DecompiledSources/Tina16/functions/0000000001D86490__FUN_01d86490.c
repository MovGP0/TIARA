/* Ghidra address: 01d86490 */
/* Ghidra symbol: FUN_01d86490 */


undefined8 FUN_01d86490(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x8d8) = 0;
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x8d8) = 0;
    }
    FUN_00805200(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    if (*(int *)(param_1 + 0x70) < 1) {
      *PTR_DAT_02003af8 = 0;
    }
  }
  return 0;
}

