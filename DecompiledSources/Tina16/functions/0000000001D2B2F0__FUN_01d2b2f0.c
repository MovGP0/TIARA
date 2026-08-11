/* Ghidra address: 01d2b2f0 */
/* Ghidra symbol: FUN_01d2b2f0 */


void FUN_01d2b2f0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00409620(param_1 + 0x50,0);
  FUN_01d2aed0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

