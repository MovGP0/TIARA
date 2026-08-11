/* Ghidra address: 00d595d0 */
/* Ghidra symbol: FUN_00d595d0 */


void FUN_00d595d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d56720);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 8);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(lVar2 + 0x20));
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar2 + 0x2a);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(lVar2 + 0x28);
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00d56720);
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(lVar2 + 0x29);
  }
  return;
}

