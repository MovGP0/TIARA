/* Ghidra address: 010e7580 */
/* Ghidra symbol: FUN_010e7580 */


void FUN_010e7580(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x60));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

