/* Ghidra address: 008cdeb0 */
/* Ghidra symbol: FUN_008cdeb0 */


undefined8 FUN_008cdeb0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM862");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp862");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008cdf74);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csPC862LatinHebrew");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

