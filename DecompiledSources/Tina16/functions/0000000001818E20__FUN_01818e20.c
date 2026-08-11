/* Ghidra address: 01818e20 */
/* Ghidra symbol: FUN_01818e20 */


void FUN_01818e20(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_01817280(uVar1);
  if (iVar2 != (int)param_1[0x96]) {
    (**(code **)(*param_1 + 0x268))(param_1,iVar2);
    *(int *)(param_1 + 0x96) = iVar2;
  }
  return;
}

