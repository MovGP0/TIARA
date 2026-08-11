/* Ghidra address: 01bea6d0 */
/* Ghidra symbol: FUN_01bea6d0 */


void FUN_01bea6d0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_2;
  uStack_20 = param_2[1];
  local_res20 = param_4;
  FUN_00414610(param_4);
  cVar1 = FUN_004113d0(param_1[0xf],&PTR_FUN_01bf3cc0);
  if (cVar1 != '\0') {
    lVar3 = FUN_01c07120(param_1);
    if (*(char *)(lVar3 + 0x4f8) == '\0') {
      FUN_00414b50(&local_res20,param_1[0x71]);
    }
  }
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    uVar4 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar4);
    param_6 = *(undefined4 *)(lVar3 + 0xa0);
  }
  FUN_01c05900(param_1,&local_28,param_3,local_res20,param_5,param_6);
  cVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_006520b0(param_1,2);
    local_38 = *(undefined8 *)((longlong)param_1 + 0x374);
    uStack_30 = *(undefined8 *)((longlong)param_1 + 0x37c);
    FUN_00423b50(&local_38,((int)param_1[0x13] - *(int *)((longlong)param_1 + 0x37c)) + -0x15,0);
    FUN_01c05900(param_1,&local_38,uVar2,*(undefined8 *)(param_1[100] + 0x98),param_5,param_6);
  }
  FUN_00414480(&local_res20);
  return;
}

