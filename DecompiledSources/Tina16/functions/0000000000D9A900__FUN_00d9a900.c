/* Ghidra address: 00d9a900 */
/* Ghidra symbol: FUN_00d9a900 */


void FUN_00d9a900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 in_stack_ffffffffffffffe8;
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)in_stack_ffffffffffffffe8 >> 8);
  if (param_5 < 0x11) {
    if (param_5 == 0x10) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronOpened",
                   CONCAT71(uVar1,6));
      return;
    }
    if (param_5 == 4) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"Header");
      return;
    }
    if (param_5 == 0xe) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronOpened",
                   (ulonglong)uVar1 << 8);
      return;
    }
    if (param_5 == 0xf) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronOpened",
                   CONCAT71(uVar1,5));
      return;
    }
  }
  else {
    if (param_5 == 0x11) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronClosed",
                   (ulonglong)uVar1 << 8);
      return;
    }
    if (param_5 == 0x12) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronClosed",
                   CONCAT71(uVar1,5));
      return;
    }
    if (param_5 == 0x13) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"CategoryPanelGroup",L"ChevronClosed",
                   CONCAT71(uVar1,6));
      return;
    }
  }
  FUN_00784bf0();
  return;
}

