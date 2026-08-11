/* Ghidra address: 019f3230 */
/* Ghidra symbol: FUN_019f3230 */


undefined8 FUN_019f3230(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 6) {
    if (param_3 == 5) {
      FUN_00414ad0(param_2,L"IO_HCT");
    }
    else if (param_3 == 1) {
      FUN_00414ad0(param_2,L"IO_STD");
    }
    else if (param_3 == 2) {
      FUN_00414ad0(param_2,L"IO_LS");
    }
    else if (param_3 == 3) {
      FUN_00414ad0(param_2,L"IO_HC");
    }
    else if (param_3 == 4) {
      FUN_00414ad0(param_2,L"IO_4000");
    }
  }
  else if (param_3 == 6) {
    FUN_00414ad0(param_2,L"IO_S");
  }
  else if (param_3 == 7) {
    FUN_00414ad0(param_2,L"IO_AS");
  }
  else if (param_3 == 8) {
    FUN_00414ad0(param_2,L"IO_ALS");
  }
  return param_2;
}

