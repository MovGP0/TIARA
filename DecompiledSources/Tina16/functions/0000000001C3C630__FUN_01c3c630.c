/* Ghidra address: 01c3c630 */
/* Ghidra symbol: FUN_01c3c630 */


void FUN_01c3c630(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007fc180(&PTR_FUN_01c31b28,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01c32280(plVar1,*(undefined8 *)(param_1 + 3000));
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

