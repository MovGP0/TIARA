/* Ghidra address: 017efb70 */
/* Ghidra symbol: FUN_017efb70 */


void FUN_017efb70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_017ea8e8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_017ebb80(plVar1,*(undefined8 *)(param_1 + 0xb48));
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

