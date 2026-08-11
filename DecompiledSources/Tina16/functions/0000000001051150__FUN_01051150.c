/* Ghidra address: 01051150 */
/* Ghidra symbol: FUN_01051150 */


void FUN_01051150(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_00f97498,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00f97f90(plVar2,param_2);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((longlong)plVar2 + 0x6e4);
    *(char *)((longlong)param_2 + 0x125) = (char)plVar2[0xdd];
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_01053e80(param_1,1);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),1);
  }
  FUN_00410f20(plVar2);
  return;
}

