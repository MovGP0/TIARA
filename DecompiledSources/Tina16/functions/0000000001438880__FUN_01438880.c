/* Ghidra address: 01438880 */
/* Ghidra symbol: FUN_01438880 */


void FUN_01438880(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_01437450(&PTR_FUN_014369d8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01437560(plVar2,*(undefined8 *)(param_1 + 0xa3d),*(undefined8 *)(param_1 + 0xa45),
               *(undefined2 *)(param_1 + 0xa4d),*(undefined8 *)(param_1 + 0xa50));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x4e8),(longlong)*(short *)(param_1 + 0xa4d));
    FUN_01437590(plVar2,param_1 + 0xa4d,param_1 + 0xa50);
  }
  FUN_00410f20(plVar2);
  return;
}

