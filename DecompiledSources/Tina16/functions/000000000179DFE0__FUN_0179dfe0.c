/* Ghidra address: 0179dfe0 */
/* Ghidra symbol: FUN_0179dfe0 */


void FUN_0179dfe0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_0179c7c0(param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_017ac7a0);
    if (cVar1 != '\0') {
      FUN_017b8420(lVar2);
      (**(code **)(**(longlong **)(param_1 + 0x948) + 0x180))(*(longlong **)(param_1 + 0x948));
    }
  }
  return;
}

