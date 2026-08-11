/* Ghidra address: 008cd5e0 */
/* Ghidra symbol: FUN_008cd5e0 */


undefined8 FUN_008cd5e0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"ISO-10646-UCS-2");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"csUnicode");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

