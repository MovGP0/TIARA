/* Ghidra address: 0108da80 */
/* Ghidra symbol: FUN_0108da80 */


void FUN_0108da80(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01073268,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01073870(plVar3,*(undefined4 *)(param_1 + 0xaa8));
  iVar1 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar1 == 1) {
    uVar2 = FUN_01073900(plVar3);
    *(undefined4 *)(param_1 + 0xaa8) = uVar2;
  }
  FUN_00410f20(plVar3);
  return;
}

