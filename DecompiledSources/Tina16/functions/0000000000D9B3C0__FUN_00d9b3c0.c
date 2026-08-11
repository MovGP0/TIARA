/* Ghidra address: 00d9b3c0 */
/* Ghidra symbol: FUN_00d9b3c0 */


void FUN_00d9b3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 in_stack_ffffffffffffffe8;
  uint7 uVar1;
  
  if (param_5 < 8) {
    uVar1 = (uint7)((ulonglong)in_stack_ffffffffffffffe8 >> 8);
    if (param_5 == 7) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryButtons",L"Face",CONCAT71(uVar1,6));
      return;
    }
    if (param_5 == 5) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryButtons",L"Face",(ulonglong)uVar1 << 8)
      ;
      return;
    }
    if (param_5 == 6) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryButtons",L"Face",CONCAT71(uVar1,5));
      return;
    }
  }
  else {
    if (param_5 == 8) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"CategoryButtons",L"ChevronOpened");
      return;
    }
    if (param_5 == 9) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"CategoryButtons",L"ChevronClosed");
      return;
    }
  }
  FUN_00784900();
  return;
}

