/* Ghidra address: 01831800 */
/* Ghidra symbol: FUN_01831800 */


void FUN_01831800(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  FUN_01847380(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

