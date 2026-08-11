/* Ghidra address: 0146a460 */
/* Ghidra symbol: FUN_0146a460 */


void FUN_0146a460(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01465710,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01466720(plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90));
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 2) {
    FUN_00410f20(plVar3);
  }
  else {
    FUN_01d11f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90),plVar3[0xf3]);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0x80);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(plVar3[0xf3] + 0x80));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0xb8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(plVar3[0xf3] + 0x80));
    FUN_00410f20(plVar3);
  }
  return;
}

