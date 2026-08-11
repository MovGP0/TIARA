/* Ghidra address: 01742870 */
/* Ghidra symbol: FUN_01742870 */


undefined8 FUN_01742870(undefined8 param_1,double param_2)

{
  if (param_2 <= 780.0) {
    if (param_2 <= 632.0) {
      if (param_2 <= 597.0) {
        if (param_2 <= 577.0) {
          if (param_2 <= 492.0) {
            if (param_2 <= 455.0) {
              FUN_00414ad0(param_1,L"white");
            }
            else {
              FUN_00414ad0(param_1,L"blue");
            }
          }
          else {
            FUN_00414ad0(param_1,L"green");
          }
        }
        else {
          FUN_00414ad0(param_1,L"yellow");
        }
      }
      else {
        FUN_00414ad0(param_1,L"orange");
      }
    }
    else {
      FUN_00414ad0(param_1,&DAT_0174296c);
    }
  }
  else {
    FUN_00414480(param_1);
  }
  return param_1;
}

