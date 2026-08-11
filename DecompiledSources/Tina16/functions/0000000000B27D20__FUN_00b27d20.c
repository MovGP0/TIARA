/* Ghidra address: 00b27d20 */
/* Ghidra symbol: FUN_00b27d20 */


undefined8 FUN_00b27d20(undefined8 param_1,byte param_2)

{
  if (param_2 < 9) {
    if (param_2 == 8) {
      FUN_00414b90(param_1,L"Print_Titles");
      return param_1;
    }
    if (param_2 < 5) {
      if (param_2 == 4) {
        FUN_00414b90(param_1,L"Extract");
        return param_1;
      }
      if (param_2 == 1) {
        FUN_00414b90(param_1,L"Consolidate_Area");
        return param_1;
      }
      if (param_2 == 2) {
        FUN_00414b90(param_1,L"Auto_Open");
        return param_1;
      }
      if (param_2 == 3) {
        FUN_00414b90(param_1,L"Auto_Close");
        return param_1;
      }
    }
    else {
      if (param_2 == 5) {
        FUN_00414b90(param_1,L"Database");
        return param_1;
      }
      if (param_2 == 6) {
        FUN_00414b90(param_1,L"Criteria");
        return param_1;
      }
      if (param_2 == 7) {
        FUN_00414b90(param_1,L"Print_Area");
        return param_1;
      }
    }
  }
  else if (param_2 < 0xd) {
    if (param_2 == 0xc) {
      FUN_00414b90(param_1,L"Auto_Deactivate");
      return param_1;
    }
    if (param_2 == 9) {
      FUN_00414b90(param_1,L"Recorder");
      return param_1;
    }
    if (param_2 == 10) {
      FUN_00414b90(param_1,L"Data_From");
      return param_1;
    }
    if (param_2 == 0xb) {
      FUN_00414b90(param_1,L"Auto_Activate");
      return param_1;
    }
  }
  else {
    if (param_2 == 0xd) {
      FUN_00414b90(param_1,L"Sheet_Title");
      return param_1;
    }
    if (param_2 == 0xe) {
      FUN_00414b90(param_1,L"_FilterDatabase");
      return param_1;
    }
  }
  FUN_00414520(param_1);
  return param_1;
}

