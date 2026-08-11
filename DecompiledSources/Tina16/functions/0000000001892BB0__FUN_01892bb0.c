/* Ghidra address: 01892bb0 */
/* Ghidra symbol: FUN_01892bb0 */


int FUN_01892bb0(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  uVar3 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
  uVar1 = FUN_01891060(*(undefined2 *)((longlong)param_1 + 0x49c),uVar3);
  iVar2 = iVar2 * (uint)uVar1;
  if (0 < *(int *)((longlong)param_1 + 0x49c)) {
    iVar4 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
    if (iVar4 != 0) goto LAB_01892c1d;
  }
  iVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
LAB_01892c1d:
  return iVar2 + 2;
}

