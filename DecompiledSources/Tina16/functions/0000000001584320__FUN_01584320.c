/* Ghidra address: 01584320 */
/* Ghidra symbol: FUN_01584320 */


void FUN_01584320(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01584590(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_01583310(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

