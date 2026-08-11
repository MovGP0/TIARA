/* Ghidra address: 00bbc2c0 */
/* Ghidra symbol: FUN_00bbc2c0 */


void FUN_00bbc2c0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (param_2 / param_3) * param_3;
  iVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x10),iVar4,param_3);
  *(int *)(param_1 + 0x10) = iVar2;
  plVar1 = *(longlong **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
  uVar3 = thunk_FUN_03f3ed25(uVar3,iVar4,param_3);
  FUN_00bba3e0(plVar1,iVar2 * *(int *)(param_1 + 0x18),uVar3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}

