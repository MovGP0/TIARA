/* Ghidra address: 014365e0 */
/* Ghidra symbol: FUN_014365e0 */


int FUN_014365e0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_20;
  
  local_20 = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0141b6c8,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*param_1 + 0x18))(param_1,&local_20);
  FUN_0141be80(plVar2,local_20);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,plVar2[0xdf]);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_20);
  return iVar1;
}

