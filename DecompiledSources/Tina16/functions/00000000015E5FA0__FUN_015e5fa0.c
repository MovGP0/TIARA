/* Ghidra address: 015e5fa0 */
/* Ghidra symbol: FUN_015e5fa0 */


void FUN_015e5fa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_015e4c18,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_015e5710(plVar3,1);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,plVar3[0xdf]);
  }
  FUN_00410f20(plVar3);
  return;
}

