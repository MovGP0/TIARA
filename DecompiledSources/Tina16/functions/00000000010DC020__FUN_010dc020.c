/* Ghidra address: 010dc020 */
/* Ghidra symbol: FUN_010dc020 */


void FUN_010dc020(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_010dbcf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

