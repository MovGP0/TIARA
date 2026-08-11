/* Ghidra address: 01be7720 */
/* Ghidra symbol: FUN_01be7720 */


void FUN_01be7720(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x690));
  FUN_01be58d0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

