/* Ghidra address: 015eb760 */
/* Ghidra symbol: FUN_015eb760 */


void FUN_015eb760(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    FUN_004095f0(**(undefined8 **)(param_1 + 0x10));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

