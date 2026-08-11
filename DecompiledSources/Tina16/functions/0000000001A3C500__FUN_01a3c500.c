/* Ghidra address: 01a3c500 */
/* Ghidra symbol: FUN_01a3c500 */


undefined8 FUN_01a3c500(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00414ad0(param_1,L"NONE");
  }
  else if (param_2 == 1) {
    FUN_00414ad0(param_1,L"NVIDIA");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,&DAT_01a3c5b8);
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,L"INTEL");
  }
  else {
    FUN_00414ad0(param_1,L"<undef>");
  }
  return param_1;
}

