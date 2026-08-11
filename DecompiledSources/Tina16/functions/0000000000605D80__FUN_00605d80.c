/* Ghidra address: 00605d80 */
/* Ghidra symbol: FUN_00605d80 */


void FUN_00605d80(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

