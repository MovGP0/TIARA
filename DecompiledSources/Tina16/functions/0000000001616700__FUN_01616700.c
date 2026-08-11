/* Ghidra address: 01616700 */
/* Ghidra symbol: FUN_01616700 */


undefined8 FUN_01616700(undefined8 param_1,int param_2,int param_3)

{
  if (param_2 == 0x3ee) {
    FUN_00414ad0(param_1,L"lastval");
  }
  else if (param_2 == 0x3ef) {
    FUN_00414ad0(param_1,L"lastval");
  }
  else if (param_2 == 0x3f0) {
    if (param_3 == 0) {
      FUN_00414ad0(param_1,L"prevtime");
    }
    else if (param_3 == 1) {
      FUN_00414ad0(param_1,L"started");
    }
    else if (param_3 == 2) {
      FUN_00414ad0(param_1,L"flag");
    }
    else if (param_3 == 3) {
      FUN_00414ad0(param_1,L"periodassigned");
    }
    else {
      FUN_01613110(L"GetIdx invalid");
    }
  }
  else {
    FUN_01613110(L"GetOp invalid");
  }
  return param_1;
}

