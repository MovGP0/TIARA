/* Ghidra address: 0179fce0 */
/* Ghidra symbol: FUN_0179fce0 */


void FUN_0179fce0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  if (-1 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar2 + 1 < (int)uVar4) {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      goto LAB_0179fd3a;
    }
  }
  uVar3 = 0;
LAB_0179fd3a:
  (**(code **)(**(longlong **)(param_1 + 0xc30) + 0xe8))(*(longlong **)(param_1 + 0xc30),uVar3);
  return;
}

