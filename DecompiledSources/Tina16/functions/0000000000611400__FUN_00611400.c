/* Ghidra address: 00611400 */
/* Ghidra symbol: FUN_00611400 */


void FUN_00611400(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004ae7a0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

