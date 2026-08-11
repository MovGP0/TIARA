/* Ghidra address: 0074d8a0 */
/* Ghidra symbol: FUN_0074d8a0 */


void FUN_0074d8a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    FUN_0074e130(param_1,2);
    FUN_004d6550(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
  FUN_004095f0(*(undefined8 *)(param_1 + 0xa0));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

