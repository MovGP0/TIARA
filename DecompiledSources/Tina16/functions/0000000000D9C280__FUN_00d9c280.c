/* Ghidra address: 00d9c280 */
/* Ghidra symbol: FUN_00d9c280 */


void FUN_00d9c280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 in_stack_ffffffffffffffe8;
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)in_stack_ffffffffffffffe8 >> 8);
  if (param_5 < 7) {
    if (param_5 == 6) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOn",CONCAT71(uVar1,5));
      return;
    }
    if (param_5 == 2) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOff",(ulonglong)uVar1 << 8
                  );
      return;
    }
    if (param_5 == 3) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOff",CONCAT71(uVar1,5));
      return;
    }
    if (param_5 == 4) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOff",CONCAT71(uVar1,8));
      return;
    }
    if (param_5 == 5) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOn",(ulonglong)uVar1 << 8)
      ;
      return;
    }
  }
  else {
    if (param_5 == 7) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"TrackOn",CONCAT71(uVar1,8));
      return;
    }
    if (param_5 == 8) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"Thumb",(ulonglong)uVar1 << 8);
      return;
    }
    if (param_5 == 9) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"Thumb",CONCAT71(uVar1,5));
      return;
    }
    if (param_5 == 10) {
      FUN_00d8eda0(param_2,param_3,param_6,param_7,L"ToggleSwitch",L"Thumb",CONCAT71(uVar1,8));
      return;
    }
  }
  FUN_007837f0();
  return;
}

