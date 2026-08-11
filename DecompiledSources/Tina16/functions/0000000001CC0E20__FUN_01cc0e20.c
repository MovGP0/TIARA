/* Ghidra address: 01cc0e20 */
/* Ghidra symbol: FUN_01cc0e20 */


void FUN_01cc0e20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00442c30(*(undefined8 *)(param_1 + 0x40));
  FUN_01cc0640(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

