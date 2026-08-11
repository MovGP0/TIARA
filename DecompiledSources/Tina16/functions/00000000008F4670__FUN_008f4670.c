/* Ghidra address: 008f4670 */
/* Ghidra symbol: FUN_008f4670 */


void FUN_008f4670(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_008f37a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

