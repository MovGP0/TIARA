/* Ghidra address: 00c6e870 */
/* Ghidra symbol: FUN_00c6e870 */


void FUN_00c6e870(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00c6e750(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

