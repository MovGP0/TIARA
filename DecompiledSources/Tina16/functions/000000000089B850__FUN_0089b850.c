/* Ghidra address: 0089b850 */
/* Ghidra symbol: FUN_0089b850 */


void FUN_0089b850(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(uVar1);
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

