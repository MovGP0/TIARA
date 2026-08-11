/* Ghidra address: 019560b0 */
/* Ghidra symbol: FUN_019560b0 */


void FUN_019560b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01920e40);
  if (cVar1 != '\0') {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_01920e40);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar2 + 8);
    FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(lVar2 + 0x10));
    FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(lVar2 + 0x18));
    FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(lVar2 + 0x28));
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(lVar2 + 0x20));
    FUN_00414ad0(param_1 + 0x30,*(undefined8 *)(lVar2 + 0x30));
    FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(lVar2 + 0x38));
    FUN_00414ad0(param_1 + 0x40,*(undefined8 *)(lVar2 + 0x40));
  }
  return;
}

