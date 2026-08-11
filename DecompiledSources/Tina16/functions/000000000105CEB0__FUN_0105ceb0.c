/* Ghidra address: 0105ceb0 */
/* Ghidra symbol: FUN_0105ceb0 */


undefined8 FUN_0105ceb0(undefined8 param_1,undefined8 param_2,int param_3,char param_4)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"systemlib");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"standardlib");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"userlib");
  }
  if (param_4 != '\0') {
    FUN_00416ad0(param_2,&LAB_0105cf88);
  }
  return param_2;
}

