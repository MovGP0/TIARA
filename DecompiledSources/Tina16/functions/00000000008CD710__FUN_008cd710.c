/* Ghidra address: 008cd710 */
/* Ghidra symbol: FUN_008cd710 */


undefined8 FUN_008cd710(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"ISO-10646-UCS-4");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"csUCS4");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

