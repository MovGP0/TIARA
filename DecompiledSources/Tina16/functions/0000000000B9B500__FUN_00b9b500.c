/* Ghidra address: 00b9b500 */
/* Ghidra symbol: FUN_00b9b500 */


void FUN_00b9b500(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0047c7b0);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0047c498);
    if (cVar2 == '\0') {
      uVar1 = FUN_00b98560(&PTR_FUN_00b97e28,1,param_2,(longlong)*(int *)((longlong)param_1 + 0x1c))
      ;
      (**(code **)(*param_1 + 8))(param_1,uVar1,1,param_3);
      return;
    }
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,0,param_3);
  return;
}

