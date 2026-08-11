/* Ghidra address: 0044dfb0 */
/* Ghidra symbol: FUN_0044dfb0 */


void FUN_0044dfb0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00452320(param_1 + 0x18);
  if (DAT_0200c438 != (code *)0x0) {
    (*DAT_0200c438)(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

