/* Ghidra address: 018930b0 */
/* Ghidra symbol: FUN_018930b0 */


void FUN_018930b0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_01817280(uVar1);
  if (iVar2 != (int)param_1[0x9c]) {
    (**(code **)(*param_1 + 0x278))(param_1,iVar2);
    *(int *)(param_1 + 0x9c) = iVar2;
  }
  return;
}

