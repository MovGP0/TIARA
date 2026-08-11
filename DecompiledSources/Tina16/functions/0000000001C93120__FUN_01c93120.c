/* Ghidra address: 01c93120 */
/* Ghidra symbol: FUN_01c93120 */


void FUN_01c93120(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01c48e98,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  FUN_00410f20(plVar2);
  if (iVar1 == 1) {
    FUN_01c92e80(param_1);
  }
  return;
}

