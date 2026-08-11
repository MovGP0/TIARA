/* Ghidra address: 010512f0 */
/* Ghidra symbol: FUN_010512f0 */


void FUN_010512f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_00fd8658,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00fd8d70(plVar2,param_2);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_01053e80(param_1,1);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),1);
  }
  FUN_00410f20(plVar2);
  return;
}

