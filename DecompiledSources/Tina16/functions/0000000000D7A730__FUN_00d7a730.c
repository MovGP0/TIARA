/* Ghidra address: 00d7a730 */
/* Ghidra symbol: FUN_00d7a730 */


void FUN_00d7a730(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d60198);
  if (cVar1 == '\0') {
    FUN_00d7a2a0(param_1,param_2);
  }
  else {
    FUN_00d7a2a0(param_1,param_2);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d60198);
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))
              (*(longlong **)(param_1 + 0x150),*(undefined8 *)(lVar2 + 0x150));
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d60198);
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))
              (*(longlong **)(param_1 + 0x148),*(undefined8 *)(lVar2 + 0x148));
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d60198);
    *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(lVar2 + 0x140);
  }
  return;
}

