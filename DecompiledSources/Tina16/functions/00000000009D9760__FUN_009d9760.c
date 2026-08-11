/* Ghidra address: 009d9760 */
/* Ghidra symbol: FUN_009d9760 */


void FUN_009d9760(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0041d5d0(*(undefined8 *)(param_1 + 0x68));
  FUN_009d4be0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

