/* Ghidra address: 0104f500 */
/* Ghidra symbol: FUN_0104f500 */


void FUN_0104f500(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_00f918b8,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x928) + 0x4c0);
  (**(code **)(*plVar1 + 0x180))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x928) + 0x4d8);
  (**(code **)(*plVar1 + 0x180))(plVar1);
  return;
}

