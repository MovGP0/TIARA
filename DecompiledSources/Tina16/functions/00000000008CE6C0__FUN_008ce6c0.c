/* Ghidra address: 008ce6c0 */
/* Ghidra symbol: FUN_008ce6c0 */


undefined8 FUN_008ce6c0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM275");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"EBCDIC-BR");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"cp275");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM275");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

