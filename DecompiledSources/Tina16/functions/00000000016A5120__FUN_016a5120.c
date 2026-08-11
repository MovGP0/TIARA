/* Ghidra address: 016a5120 */
/* Ghidra symbol: FUN_016a5120 */


void FUN_016a5120(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00b95ce0(*(undefined8 *)(param_1 + 0x28));
  FUN_016a4e50(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

