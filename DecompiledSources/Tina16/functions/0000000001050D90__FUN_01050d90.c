/* Ghidra address: 01050d90 */
/* Ghidra symbol: FUN_01050d90 */


void FUN_01050d90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_00f940b8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00f94900(plVar2,param_2);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00414ad0(param_2 + 0x22,plVar2[0xe0]);
    FUN_00414ad0(param_2 + 0x23,plVar2[0xe1]);
    *(int *)(param_2 + 0x24) = (int)plVar2[0xe2];
    *(undefined1 *)((longlong)param_2 + 0x126) = *(undefined1 *)((longlong)plVar2 + 0x714);
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_01053e80(param_1,1);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),1);
  }
  FUN_00410f20(plVar2);
  return;
}

