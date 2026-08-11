/* Ghidra address: 0083ede0 */
/* Ghidra symbol: FUN_0083ede0 */


void FUN_0083ede0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x510));
  *(undefined8 *)(param_1 + 0x510) = 0;
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x528));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x530));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x538));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

