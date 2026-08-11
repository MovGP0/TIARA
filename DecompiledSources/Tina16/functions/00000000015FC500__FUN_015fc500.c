/* Ghidra address: 015fc500 */
/* Ghidra symbol: FUN_015fc500 */


undefined8 FUN_015fc500(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00414ad0(param_1,&DAT_015fc5bc);
  }
  else if (param_2 == 7) {
    FUN_00414ad0(param_1,&DAT_015fc5d0);
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,&DAT_015fc5e4);
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,&PTR_DAT_015fc5f4);
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L"vams");
  }
  else if (((param_2 == 5) || (param_2 == 6)) || (param_2 == 8)) {
    FUN_00414ad0(param_1,&DAT_015fc5bc);
  }
  else {
    FUN_016fd940(L"Invalid file ext");
  }
  return param_1;
}

