/* Ghidra address: 01614d90 */
/* Ghidra symbol: FUN_01614d90 */


undefined8 FUN_01614d90(undefined8 param_1,int param_2)

{
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414ad0(param_1,&DAT_01614e74);
    }
    else if (param_2 == 0) {
      FUN_00414ad0(param_1,&DAT_01614e40);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,&DAT_01614e50);
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,&DAT_01614e60);
    }
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,&PTR_DAT_01614e84);
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,&DAT_01614e98);
  }
  return param_1;
}

