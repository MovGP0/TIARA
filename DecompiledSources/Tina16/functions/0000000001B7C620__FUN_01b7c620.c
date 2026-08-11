/* Ghidra address: 01b7c620 */
/* Ghidra symbol: FUN_01b7c620 */


void FUN_01b7c620(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_01b75828,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

