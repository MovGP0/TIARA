/* Ghidra address: 010a5730 */
/* Ghidra symbol: FUN_010a5730 */


void FUN_010a5730(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_010a07d8,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    *(longlong *)(param_1 + 0xa38) = plVar2[0xdb];
    FUN_010a5680(param_1,param_2);
  }
  FUN_00410f20(plVar2);
  return;
}

