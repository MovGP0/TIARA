/* Ghidra address: 01508dd0 */
/* Ghidra symbol: FUN_01508dd0 */


void FUN_01508dd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x4f0) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x4f0);
        uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
        FUN_00410f20(uVar3);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_010f6580(param_1,param_2);
  return;
}

