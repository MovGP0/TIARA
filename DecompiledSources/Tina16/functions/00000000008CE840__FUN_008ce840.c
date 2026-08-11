/* Ghidra address: 008ce840 */
/* Ghidra symbol: FUN_008ce840 */


undefined8 FUN_008ce840(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM277");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"EBCDIC-CP-DK");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"EBCDIC-CP-NO");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM277");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

