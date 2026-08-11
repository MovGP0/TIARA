/* Ghidra address: 00685a50 */
/* Ghidra symbol: FUN_00685a50 */


void FUN_00685a50(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  iVar1 = (**(code **)(*(longlong *)param_1[0x9e] + 0x28))((longlong *)param_1[0x9e]);
  if ((0 < iVar1) && ((*(uint *)((longlong)param_1 + 0xa4) & 0x2000) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x524) = uVar2;
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    param_1[0xaa] = (longlong)plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1[0x9e]);
  }
  FUN_00655750(param_1);
  return;
}

