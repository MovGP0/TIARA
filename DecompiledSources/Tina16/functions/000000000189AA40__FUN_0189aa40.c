/* Ghidra address: 0189aa40 */
/* Ghidra symbol: FUN_0189aa40 */


void FUN_0189aa40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_01899410(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

