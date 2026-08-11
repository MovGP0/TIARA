/* Ghidra address: 0082e030 */
/* Ghidra symbol: FUN_0082e030 */


void FUN_0082e030(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_0059b550(param_1 + 8,0);
  }
  FUN_0059b400(param_1 + 8,0);
  FUN_019b2bd0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

