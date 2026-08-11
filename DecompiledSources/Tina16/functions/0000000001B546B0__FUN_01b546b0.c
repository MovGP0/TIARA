/* Ghidra address: 01b546b0 */
/* Ghidra symbol: FUN_01b546b0 */


void FUN_01b546b0(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01b51e48,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01b522d0(plVar2,*(undefined8 *)(PTR_DAT_02004010 + 0x92c));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_01b52330(plVar2,local_20);
    FUN_00414ad0(PTR_DAT_02004010 + 0x92c,local_20[0]);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_20);
  return;
}

