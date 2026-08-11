/* Ghidra address: 008d1440 */
/* Ghidra symbol: FUN_008d1440 */


undefined8 FUN_008d1440(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"EBCDIC-US");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"csEBCDICUS");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

