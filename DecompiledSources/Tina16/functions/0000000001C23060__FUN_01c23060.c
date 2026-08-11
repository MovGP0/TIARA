/* Ghidra address: 01c23060 */
/* Ghidra symbol: FUN_01c23060 */


void FUN_01c23060(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_01c23250(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x498));
  FUN_01c23370(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a0));
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

