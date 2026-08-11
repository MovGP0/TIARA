/* Ghidra address: 00727a10 */
/* Ghidra symbol: FUN_00727a10 */


void FUN_00727a10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_0041b800(param_1 + 0xe0);
  FUN_0041b800(param_1 + 0xe8);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

