/* Ghidra address: 006ea3d0 */
/* Ghidra symbol: FUN_006ea3d0 */


void FUN_006ea3d0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x500));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x510));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x518));
  FUN_00682a40(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

