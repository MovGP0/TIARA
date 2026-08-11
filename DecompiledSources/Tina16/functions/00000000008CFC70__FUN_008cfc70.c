/* Ghidra address: 008cfc70 */
/* Ghidra symbol: FUN_008cfc70 */


undefined8 FUN_008cfc70(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM855");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp855");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008cfd34);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM855");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

