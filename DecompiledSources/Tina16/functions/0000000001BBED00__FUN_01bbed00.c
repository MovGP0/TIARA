/* Ghidra address: 01bbed00 */
/* Ghidra symbol: FUN_01bbed00 */


undefined8 FUN_01bbed00(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_0043f750(param_2,param_3);
  if (param_3 == 100) {
    FUN_00414ad0(param_2,L"Input");
  }
  else if (param_3 == 4) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x28));
  }
  else if (param_3 == 300) {
    FUN_00414ad0(param_2,&DAT_01bbedbc);
  }
  else if (param_3 == 400) {
    FUN_00414ad0(param_2,&DAT_01bbedd0);
  }
  else if (param_3 == 500) {
    FUN_00414ad0(param_2,L"Enable");
  }
  return param_2;
}

