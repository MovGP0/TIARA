/* Ghidra address: 013ee620 */
/* Ghidra symbol: FUN_013ee620 */


void FUN_013ee620(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x108c) = 2;
  plVar2 = (longlong *)
           FUN_013ea240(&PTR_FUN_013e90b8,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x10c8));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x700));
  }
  FUN_00410f20(plVar2);
  return;
}

