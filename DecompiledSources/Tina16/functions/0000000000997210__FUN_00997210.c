/* Ghidra address: 00997210 */
/* Ghidra symbol: FUN_00997210 */


void FUN_00997210(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_008b8290(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

