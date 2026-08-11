/* Ghidra address: 00bf2c20 */
/* Ghidra symbol: FUN_00bf2c20 */


undefined8 FUN_00bf2c20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x4cc);
  if ((0 < iVar1) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8)), iVar1 <= iVar2)) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),param_2,*(int *)(param_1 + 0x4cc) + -1);
    return param_2;
  }
  FUN_00414480(param_2);
  return param_2;
}

