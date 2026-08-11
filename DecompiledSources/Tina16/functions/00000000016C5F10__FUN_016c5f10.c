/* Ghidra address: 016c5f10 */
/* Ghidra symbol: FUN_016c5f10 */


void FUN_016c5f10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_016a0c30);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_016a0e58);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_3,&PTR_FUN_016a1088);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_3,&PTR_FUN_016a1500);
        if (cVar1 != '\0') {
          FUN_016c5e10(auStack_38,*(undefined8 *)(param_3 + 0x18));
          FUN_016c5e10(auStack_38,*(undefined8 *)(param_3 + 0x20));
        }
      }
      else {
        FUN_016c5e90(auStack_38,param_3);
      }
    }
    else {
      FUN_016c5e10(auStack_38,param_3);
    }
  }
  else {
    FUN_016c5d90(auStack_38,param_3);
  }
  return;
}

