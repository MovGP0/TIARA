/* Ghidra address: 01be3620 */
/* Ghidra symbol: FUN_01be3620 */


void FUN_01be3620(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_004d2d90(*(longlong *)(param_1 + 0x80),param_1);
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

