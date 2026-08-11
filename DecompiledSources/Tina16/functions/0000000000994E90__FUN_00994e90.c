/* Ghidra address: 00994e90 */
/* Ghidra symbol: FUN_00994e90 */


void FUN_00994e90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416420(param_2,*(undefined8 *)(param_1 + 0x98));
  if (iVar1 != 0) {
    FUN_00414b90(param_1 + 0x98,param_2);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))(*(longlong **)(param_1 + 0xa0));
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}

