/* Ghidra address: 01bea860 */
/* Ghidra symbol: FUN_01bea860 */


void FUN_01bea860(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  cVar1 = FUN_004113d0(param_1[0xf],&PTR_FUN_01bf3cc0);
  if (cVar1 != '\0') {
    lVar3 = FUN_01c07120(param_1);
    if (*(char *)(lVar3 + 0x4f8) == '\0') {
      FUN_00414b50(&local_res20,param_1[0x71]);
    }
  }
  FUN_01c05800(param_1,param_2,param_3,local_res20);
  cVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_006520b0(param_1,2);
    *param_3 = uVar2;
    local_28 = *(undefined8 *)((longlong)param_1 + 0x374);
    uStack_20 = *(undefined8 *)((longlong)param_1 + 0x37c);
    FUN_00423b50(&local_28,((int)param_1[0x13] - *(int *)((longlong)param_1 + 0x37c)) + -0x15,0);
    FUN_01c05800(param_1,&local_28,param_3,*(undefined8 *)(param_1[100] + 0x98));
  }
  FUN_00414480(&local_res20);
  return;
}

