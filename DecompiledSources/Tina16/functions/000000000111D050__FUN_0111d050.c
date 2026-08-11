/* Ghidra address: 0111d050 */
/* Ghidra symbol: FUN_0111d050 */


void FUN_0111d050(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x168));
  FUN_00bc1470(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

