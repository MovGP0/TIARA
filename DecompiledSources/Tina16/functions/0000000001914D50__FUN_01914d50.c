/* Ghidra address: 01914d50 */
/* Ghidra symbol: FUN_01914d50 */


void FUN_01914d50(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if ((param_2 != 0) && (param_3 != 0)) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d5a90);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d4e78);
      if (cVar1 == '\0') {
        return;
      }
    }
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d5a90);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d4e78);
      if (cVar1 != '\0') {
        FUN_005dcf20(param_2,local_20);
      }
    }
    else {
      (**(code **)(*local_20 + 0xd8))(local_20,*(undefined8 *)(param_2 + 8));
    }
    (**(code **)(*local_20 + 0x110))(local_20,param_3);
    FUN_00410f20(local_20);
  }
  return;
}

