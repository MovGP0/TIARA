/* Ghidra address: 01bfc8c0 */
/* Ghidra symbol: FUN_01bfc8c0 */


void FUN_01bfc8c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_01bfc690(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf0478);
  if (cVar1 != '\0') {
    uVar2 = FUN_01bfc9f0(param_2);
    FUN_01bfca10(param_1,uVar2);
    uVar2 = FUN_01bfca00(param_2);
    FUN_01bfca20(param_1,uVar2);
    FUN_01bfca40(param_1,*(undefined1 *)(param_2 + 0x38));
  }
  return;
}

