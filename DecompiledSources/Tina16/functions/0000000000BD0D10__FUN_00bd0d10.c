/* Ghidra address: 00bd0d10 */
/* Ghidra symbol: FUN_00bd0d10 */


void FUN_00bd0d10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00bd0fa0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

