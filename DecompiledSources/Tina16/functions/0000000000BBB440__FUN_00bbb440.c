/* Ghidra address: 00bbb440 */
/* Ghidra symbol: FUN_00bbb440 */


void FUN_00bbb440(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (param_2 / param_3) * param_3;
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,(longlong)param_2 % (longlong)param_3 & 0xffffffff);
  uVar2 = thunk_FUN_03f3ed25(uVar2,iVar4,param_3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10));
  uVar3 = thunk_FUN_03f3ed25(uVar3,iVar4,param_3);
  FUN_00bba3e0(plVar1,uVar2,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
  uVar2 = thunk_FUN_03f3ed25(uVar2,iVar4,param_3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))(*(longlong **)(param_1 + 0x18));
  uVar3 = thunk_FUN_03f3ed25(uVar3,iVar4,param_3);
  FUN_00bba3e0(plVar1,uVar2,uVar3);
  return;
}

