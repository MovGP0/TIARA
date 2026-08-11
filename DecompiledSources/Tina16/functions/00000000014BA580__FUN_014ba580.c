/* Ghidra address: 014ba580 */
/* Ghidra symbol: FUN_014ba580 */


void FUN_014ba580(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_014b8418,1,*(undefined8 *)PTR_DAT_02004030);
  uVar2 = FUN_019a4600();
  FUN_014b8c20(plVar1,uVar2);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

