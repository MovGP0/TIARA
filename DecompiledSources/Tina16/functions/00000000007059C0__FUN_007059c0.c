/* Ghidra address: 007059c0 */
/* Ghidra symbol: FUN_007059c0 */


void FUN_007059c0(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (((0 < *(int *)(*(longlong *)(param_1[0xb1] + 0x10) + 0x10)) && (param_1[0xae] == 0)) &&
     ((*(uint *)((longlong)param_1 + 0xa4) & 0x2000) != 0)) {
    plVar2 = (longlong *)FUN_004b1b60(&PTR_FUN_00475a40,1,&PTR_FUN_006d0410);
    param_1[0xae] = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0xb1]);
    uVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x57c) = uVar1;
  }
  FUN_00655750(param_1);
  return;
}

