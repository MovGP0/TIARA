/* Ghidra address: 006aaee0 */
/* Ghidra symbol: FUN_006aaee0 */


void FUN_006aaee0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_004d2d90(*(longlong *)(param_1 + 0x178),param_1);
  }
  FUN_006aa7b0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

