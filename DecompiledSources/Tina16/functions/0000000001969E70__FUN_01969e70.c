/* Ghidra address: 01969e70 */
/* Ghidra symbol: FUN_01969e70 */


void FUN_01969e70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x158));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x160));
  FUN_0194f620(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

