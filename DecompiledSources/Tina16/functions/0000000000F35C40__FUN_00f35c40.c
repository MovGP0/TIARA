/* Ghidra address: 00f35c40 */
/* Ghidra symbol: FUN_00f35c40 */


void FUN_00f35c40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00f35e40(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00f34cf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

