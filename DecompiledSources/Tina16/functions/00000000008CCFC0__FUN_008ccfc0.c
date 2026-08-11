/* Ghidra address: 008ccfc0 */
/* Ghidra symbol: FUN_008ccfc0 */


undefined8 FUN_008ccfc0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"ISO-8859-13");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"ISO_8859-13");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"latin7");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,&LAB_008cd0b4);
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

