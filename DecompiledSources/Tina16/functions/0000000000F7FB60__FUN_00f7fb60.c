/* Ghidra address: 00f7fb60 */
/* Ghidra symbol: FUN_00f7fb60 */


undefined8 FUN_00f7fb60(undefined8 param_1,int param_2)

{
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414ad0(param_1,&DAT_00f7fc30);
    }
    else if (param_2 == 0) {
      FUN_00414ad0(param_1,&DAT_00f7fc10);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,&DAT_00f7fc20);
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,&DAT_00f7fc30);
    }
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,&DAT_00f7fc40);
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,&LAB_00f7fc50);
  }
  return param_1;
}

