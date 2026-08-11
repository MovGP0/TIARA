/* Ghidra address: 01305490 */
/* Ghidra symbol: FUN_01305490 */


undefined8 FUN_01305490(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
    FUN_00414ad0(param_2,L"Gain margin");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"Phase margin");
  }
  else if (param_3 == 4) {
    FUN_00414ad0(param_2,L"Crossover");
  }
  else if (param_3 == 5) {
    FUN_00414ad0(param_2,L"Absolute Ripple");
  }
  else if (param_3 == 6) {
    FUN_00414ad0(param_2,L"Relative Ripple");
  }
  else if (param_3 == 7) {
    FUN_00414ad0(param_2,L"Average");
  }
  else if (param_3 == 8) {
    FUN_00414ad0(param_2,L"YMIN");
  }
  else if (param_3 == 9) {
    FUN_00414ad0(param_2,L"YMAX");
  }
  else if (param_3 == 10) {
    FUN_00414ad0(param_2,L"XMIN");
  }
  else if (param_3 == 0xb) {
    FUN_00414ad0(param_2,L"XMAX");
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

