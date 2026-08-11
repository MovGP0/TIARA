/* Ghidra address: 00745070 */
/* Ghidra symbol: FUN_00745070 */


void FUN_00745070(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  uVar1 = *(undefined8 *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  FUN_00410f20(uVar1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

