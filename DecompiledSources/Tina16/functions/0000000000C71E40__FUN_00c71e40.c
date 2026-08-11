/* Ghidra address: 00c71e40 */
/* Ghidra symbol: FUN_00c71e40 */


void FUN_00c71e40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x108));
  FUN_007d5230(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

