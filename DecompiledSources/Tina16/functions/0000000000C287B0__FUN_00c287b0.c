/* Ghidra address: 00c287b0 */
/* Ghidra symbol: FUN_00c287b0 */


void FUN_00c287b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00c1ab80(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),param_1);
  }
  FUN_00c28830(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x28));
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

