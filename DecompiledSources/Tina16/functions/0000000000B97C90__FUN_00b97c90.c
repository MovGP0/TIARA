/* Ghidra address: 00b97c90 */
/* Ghidra symbol: FUN_00b97c90 */


undefined8 FUN_00b97c90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_0043bb30);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_0043c580);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_0043c890);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x4b1;
      }
    }
    else {
      uVar2 = 0x4b0;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  return uVar2;
}

