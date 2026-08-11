/* Ghidra address: 01886f20 */
/* Ghidra symbol: FUN_01886f20 */


void FUN_01886f20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018872f0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00452320(param_1 + 0x30);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

