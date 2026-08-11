/* Ghidra address: 00d7ba80 */
/* Ghidra symbol: FUN_00d7ba80 */


void FUN_00d7ba80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00d60be0);
  if (cVar2 == '\0') {
    FUN_00d75b60(param_1,param_2);
  }
  else {
    FUN_00d75b60(param_1,param_2);
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d60be0);
    FUN_00d7be10(param_1,*(undefined8 *)(lVar1 + 0x120));
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d60be0);
    FUN_00d7bdf0(param_1,*(undefined8 *)(lVar1 + 0x128));
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d60be0);
    FUN_00d7be30(param_1,*(undefined8 *)(lVar1 + 0x130));
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d60be0);
    FUN_00d7bdd0(param_1,*(undefined8 *)(lVar1 + 0x138));
  }
  return;
}

