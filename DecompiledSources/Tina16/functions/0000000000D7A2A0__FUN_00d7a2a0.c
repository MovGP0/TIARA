/* Ghidra address: 00d7a2a0 */
/* Ghidra symbol: FUN_00d7a2a0 */


void FUN_00d7a2a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5fcd8);
  if (cVar1 == '\0') {
    FUN_00d78880(param_1,param_2);
  }
  else {
    FUN_00d78880(param_1,param_2);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d5fcd8);
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))
              (*(longlong **)(param_1 + 0x130),*(undefined8 *)(lVar2 + 0x130));
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d5fcd8);
    FUN_00d7a4a0(param_1,*(undefined8 *)(lVar2 + 0x138));
  }
  return;
}

