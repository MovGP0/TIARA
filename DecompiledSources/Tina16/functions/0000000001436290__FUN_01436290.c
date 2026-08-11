/* Ghidra address: 01436290 */
/* Ghidra symbol: FUN_01436290 */


int FUN_01436290(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_20;
  
  local_20 = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01419dc8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0141a6a0(plVar2,(char)param_1[0xe]);
  FUN_0141a6b0(plVar2,*(undefined1 *)((longlong)param_1 + 0x71));
  *(undefined2 *)(plVar2 + 0xdc) = *(undefined2 *)((longlong)param_1 + 0x72);
  (**(code **)(*param_1 + 0x18))(param_1,&local_20);
  FUN_0141ab10(plVar2,local_20);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,plVar2[0xdb]);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_20);
  return iVar1;
}

