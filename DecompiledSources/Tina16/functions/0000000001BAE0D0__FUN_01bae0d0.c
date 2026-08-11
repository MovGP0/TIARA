/* Ghidra address: 01bae0d0 */
/* Ghidra symbol: FUN_01bae0d0 */


undefined8 FUN_01bae0d0(undefined8 param_1,int param_2)

{
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414ad0(param_1,L".simetrix.");
    }
    else if (param_2 == 0) {
      FUN_00414ad0(param_1,L".tina.");
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,L".pspice.");
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,L".ltspice.");
    }
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L".simplis.");
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,L".xyce.");
  }
  return param_1;
}

