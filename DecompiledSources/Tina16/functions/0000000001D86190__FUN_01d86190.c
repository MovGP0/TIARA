/* Ghidra address: 01d86190 */
/* Ghidra symbol: FUN_01d86190 */


undefined8 FUN_01d86190(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_00805200(*(longlong *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    if (*(int *)(param_1 + 0x70) < 1) {
      *PTR_DAT_02003af8 = 0;
    }
  }
  return 0;
}

