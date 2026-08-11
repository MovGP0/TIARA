/* Ghidra address: 010b2f90 */
/* Ghidra symbol: FUN_010b2f90 */


undefined8 FUN_010b2f90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),param_3);
  FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x30));
  return param_2;
}

