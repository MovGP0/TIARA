/* Ghidra address: 00d99c00 */
/* Ghidra symbol: FUN_00d99c00 */


void FUN_00d99c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_5 < 0x24) {
    if (param_5 == 0x23) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"DBGrid",L"curInsert");
      return;
    }
    if (param_5 == 0x21) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"DBGrid",L"curArrow");
      return;
    }
    if (param_5 == 0x22) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"DBGrid",L"curEdit");
      return;
    }
  }
  else {
    if (param_5 == 0x24) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"DBGrid",L"curMultiDot");
      return;
    }
    if (param_5 == 0x25) {
      FUN_00d8eef0(param_2,param_3,param_6,param_7,L"DBGrid",L"curMultiArrow");
      return;
    }
  }
  FUN_007838b0();
  return;
}

