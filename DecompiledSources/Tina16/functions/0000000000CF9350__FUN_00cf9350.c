/* Ghidra address: 00cf9350 */
/* Ghidra symbol: FUN_00cf9350 */


void FUN_00cf9350(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00cf8eb0(param_1);
  thunk_FUN_041c8c2f(*(undefined8 *)(param_1 + 0x18));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

