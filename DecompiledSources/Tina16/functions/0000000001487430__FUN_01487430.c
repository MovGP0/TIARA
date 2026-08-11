/* Ghidra address: 01487430 */
/* Ghidra symbol: FUN_01487430 */


void FUN_01487430(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_014875c0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_01486500(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

