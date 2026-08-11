/* Ghidra address: 012f56c0 */
/* Ghidra symbol: FUN_012f56c0 */


void FUN_012f56c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x70));
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  }
  if (*(longlong *)PTR_DAT_020026a0 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020026a0);
    FUN_0072d440(L"Finished",2,4,0);
  }
  return;
}

