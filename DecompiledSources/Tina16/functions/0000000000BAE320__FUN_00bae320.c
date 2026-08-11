/* Ghidra address: 00bae320 */
/* Ghidra symbol: FUN_00bae320 */


void FUN_00bae320(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0041b800(param_1 + 0x28);
  FUN_0041b800(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

