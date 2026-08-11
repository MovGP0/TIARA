/* Ghidra address: 009ab800 */
/* Ghidra symbol: FUN_009ab800 */


void FUN_009ab800(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0059b7b0(param_1 + 8);
  FUN_009ab3b0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

