/* Ghidra address: 01ac8200 */
/* Ghidra symbol: FUN_01ac8200 */


void FUN_01ac8200(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_01ac6e00(&PTR_FUN_01ac6388,1,*(undefined8 *)PTR_DAT_02004030,param_1);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

