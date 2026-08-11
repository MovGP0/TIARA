/* Ghidra address: 01cb1d30 */
/* Ghidra symbol: FUN_01cb1d30 */


void FUN_01cb1d30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x18),
               (longlong)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x24)));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

