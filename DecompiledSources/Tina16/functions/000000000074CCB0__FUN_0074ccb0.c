/* Ghidra address: 0074ccb0 */
/* Ghidra symbol: FUN_0074ccb0 */


void FUN_0074ccb0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_0067f810(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_0073ea68);
  if (cVar2 != '\0') {
    lVar3 = FUN_004113f0(uVar1,&PTR_FUN_0073ea68);
    FUN_0074cfd0(lVar3,*(undefined1 *)(lVar3 + 0x4e0));
  }
  return;
}

