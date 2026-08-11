/* Ghidra address: 018d7500 */
/* Ghidra symbol: FUN_018d7500 */


void FUN_018d7500(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (iVar3 != 0) {
    if (param_2 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0xa0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      (**(code **)(*plVar1 + 0x48))(plVar1,0,(longlong)(int)(uVar4 & 0xfffffffe));
    }
    if (param_3 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0xa0);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      plVar2 = *(longlong **)(param_1 + 0xa0);
      iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar5 + -1);
      (**(code **)(*plVar1 + 0x48))(plVar1,iVar3 + -1,(longlong)(int)(uVar4 & 0xfffffffd));
    }
  }
  return;
}

