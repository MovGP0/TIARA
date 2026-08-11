/* Ghidra address: 01cc0640 */
/* Ghidra symbol: FUN_01cc0640 */


void FUN_01cc0640(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00442c30(*(undefined8 *)(param_1 + 0x10));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

