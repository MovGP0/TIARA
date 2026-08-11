/* Ghidra address: 01892220 */
/* Ghidra symbol: FUN_01892220 */


void FUN_01892220(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_01817280(uVar1);
  if (iVar2 != *(int *)((longlong)param_1 + 0x5ac)) {
    (**(code **)(*param_1 + 800))(param_1,iVar2);
    *(int *)((longlong)param_1 + 0x5ac) = iVar2;
  }
  return;
}

