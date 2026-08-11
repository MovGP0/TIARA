/* Ghidra address: 013c4610 */
/* Ghidra symbol: FUN_013c4610 */


void FUN_013c4610(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x280));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x300));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x328));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

