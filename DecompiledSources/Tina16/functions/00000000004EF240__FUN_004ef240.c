/* Ghidra address: 004ef240 */
/* Ghidra symbol: FUN_004ef240 */


void FUN_004ef240(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004ef3d0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_004ee480(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

