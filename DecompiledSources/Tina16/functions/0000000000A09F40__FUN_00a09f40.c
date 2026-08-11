/* Ghidra address: 00a09f40 */
/* Ghidra symbol: FUN_00a09f40 */


void FUN_00a09f40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x60));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

