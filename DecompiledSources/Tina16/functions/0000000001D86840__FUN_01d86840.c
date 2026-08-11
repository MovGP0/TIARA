/* Ghidra address: 01d86840 */
/* Ghidra symbol: FUN_01d86840 */


undefined8 FUN_01d86840(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_00805200(*(longlong *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    if (*(int *)(param_1 + 0x70) < 1) {
      *PTR_DAT_02003af8 = 0;
    }
  }
  return 0;
}

