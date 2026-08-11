/* Ghidra address: 0060c580 */
/* Ghidra symbol: FUN_0060c580 */


void FUN_0060c580(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00607b30(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

