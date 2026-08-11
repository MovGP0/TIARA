/* Ghidra address: 00b1ab90 */
/* Ghidra symbol: FUN_00b1ab90 */


void FUN_00b1ab90(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + -0x20))(*(longlong **)(param_1 + 0x30),1);
  FUN_00b1a620(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

