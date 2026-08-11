/* Ghidra address: 00744360 */
/* Ghidra symbol: FUN_00744360 */


void FUN_00744360(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  uVar1 = *(undefined8 *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  FUN_00410f20(uVar1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

