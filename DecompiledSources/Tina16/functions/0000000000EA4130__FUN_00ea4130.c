/* Ghidra address: 00ea4130 */
/* Ghidra symbol: FUN_00ea4130 */


void FUN_00ea4130(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00e81da0(*(undefined8 *)(param_1 + 0x510),*(undefined8 *)(param_1 + 0x518),
               *(undefined8 *)(param_1 + 0x520));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

