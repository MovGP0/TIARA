/* Ghidra address: 004bae00 */
/* Ghidra symbol: FUN_004bae00 */


void FUN_004bae00(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  thunk_FUN_041bb804(*(undefined8 *)(param_1 + 0x28));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

