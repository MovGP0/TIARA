/* Ghidra address: 010d6290 */
/* Ghidra symbol: FUN_010d6290 */


void FUN_010d6290(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_010d6980(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

