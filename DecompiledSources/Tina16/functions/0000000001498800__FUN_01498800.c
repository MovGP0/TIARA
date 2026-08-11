/* Ghidra address: 01498800 */
/* Ghidra symbol: FUN_01498800 */


void FUN_01498800(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)PTR_DAT_020025d8 == 0) {
    uVar2 = FUN_007fc180(&PTR_FUN_01115378,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020025d8 = uVar2;
    FUN_01115920(*(undefined8 *)PTR_DAT_020025d8,*(undefined8 *)(param_1 + 0x930));
  }
  FUN_00b95290(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550));
  FUN_016942f0(*(undefined8 *)(param_1 + 0x930));
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
  FUN_01115c40(*(undefined8 *)(param_1 + 0x930));
  iVar1 = FUN_007fd7d0(param_1);
  FUN_00806af0(*(undefined8 *)PTR_DAT_020025d8,
               iVar1 - *(int *)(*(longlong *)PTR_DAT_020025d8 + 0x98));
  FUN_008059a0(*(undefined8 *)PTR_DAT_020025d8);
  return;
}

