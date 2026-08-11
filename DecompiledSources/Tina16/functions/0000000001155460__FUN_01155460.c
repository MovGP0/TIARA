/* Ghidra address: 01155460 */
/* Ghidra symbol: FUN_01155460 */


void FUN_01155460(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_01437450(&PTR_FUN_014369d8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01437560(plVar2,*(undefined8 *)(param_1 + 0xbe8),*(undefined8 *)(param_1 + 0xbf0),
               *(undefined2 *)(param_1 + 0xbe6),*(undefined8 *)(param_1 + 0xbf8));
  *(undefined1 *)((longlong)plVar2 + 0x71c) = 1;
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0x730),(longlong)*(short *)(param_1 + 0xbe6));
    FUN_01437590(plVar2,(undefined2 *)(param_1 + 0xbe6),param_1 + 0xbf8);
  }
  FUN_00410f20(plVar2);
  return;
}

