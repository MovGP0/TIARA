/* Ghidra address: 01bbbb10 */
/* Ghidra symbol: FUN_01bbbb10 */


void FUN_01bbbb10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x10));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

