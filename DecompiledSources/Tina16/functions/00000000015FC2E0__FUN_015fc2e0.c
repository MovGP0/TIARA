/* Ghidra address: 015fc2e0 */
/* Ghidra symbol: FUN_015fc2e0 */


undefined8 FUN_015fc2e0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00414ad0(param_1,L"VHDLTyp");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"VerilogDTyp");
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,L"VerilogATyp");
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L"VerilogAMSTyp");
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,L"SystemCTyp");
  }
  else if (param_2 == 6) {
    FUN_00414ad0(param_1,L"SystemCAMSTyp");
  }
  else if (param_2 == 7) {
    FUN_00414ad0(param_1,L"VHDLAMSTyp");
  }
  else if (param_2 == 8) {
    FUN_00414ad0(param_1,L"TFLITETyp");
  }
  else {
    FUN_016fd940(L"Invalid file mode");
  }
  return param_1;
}

