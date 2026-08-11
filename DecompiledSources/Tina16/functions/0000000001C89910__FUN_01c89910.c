/* Ghidra address: 01c89910 */
/* Ghidra symbol: FUN_01c89910 */


void FUN_01c89910(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_01b7c748,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

