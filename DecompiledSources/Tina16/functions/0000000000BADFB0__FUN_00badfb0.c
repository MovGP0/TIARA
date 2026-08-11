/* Ghidra address: 00badfb0 */
/* Ghidra symbol: FUN_00badfb0 */


undefined8 FUN_00badfb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_0041b800(param_2);
  iVar1 = FUN_00bade20(param_1);
  if (*(int *)(param_1 + 0x30) < iVar1) {
    FUN_00badd50(param_1,param_2,*(undefined4 *)(param_1 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return param_2;
}

