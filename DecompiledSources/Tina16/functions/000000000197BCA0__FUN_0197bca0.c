/* Ghidra address: 0197bca0 */
/* Ghidra symbol: FUN_0197bca0 */


void FUN_0197bca0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x78));
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

