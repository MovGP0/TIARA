/* Ghidra address: 013ee700 */
/* Ghidra symbol: FUN_013ee700 */


void FUN_013ee700(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x108c) = 3;
  plVar2 = (longlong *)
           FUN_013e70f0(&PTR_FUN_013e6408,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x10c0),0);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x6f8));
  }
  FUN_00410f20(plVar2);
  return;
}

