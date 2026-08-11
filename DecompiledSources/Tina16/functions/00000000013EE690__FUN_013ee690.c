/* Ghidra address: 013ee690 */
/* Ghidra symbol: FUN_013ee690 */


void FUN_013ee690(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x108c) = 0;
  plVar2 = (longlong *)
           FUN_013eb320(&PTR_FUN_013eabe8,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x10d0));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x6f0));
  }
  FUN_00410f20(plVar2);
  return;
}

