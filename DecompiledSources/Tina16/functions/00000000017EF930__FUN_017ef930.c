/* Ghidra address: 017ef930 */
/* Ghidra symbol: FUN_017ef930 */


void FUN_017ef930(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_017ebca8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_017ec230(plVar1,PTR_DAT_02004808);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

