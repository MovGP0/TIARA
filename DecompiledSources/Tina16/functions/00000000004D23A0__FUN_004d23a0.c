/* Ghidra address: 004d23a0 */
/* Ghidra symbol: FUN_004d23a0 */


void FUN_004d23a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004d2c10(param_1);
  FUN_004d2640(param_1);
  FUN_004d2b60(param_1);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_004d2b10(*(longlong *)(param_1 + 8),param_1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

