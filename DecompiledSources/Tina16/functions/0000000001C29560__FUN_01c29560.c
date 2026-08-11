/* Ghidra address: 01c29560 */
/* Ghidra symbol: FUN_01c29560 */


undefined8 FUN_01c29560(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
    if (param_3 == 2) {
      FUN_00414ad0(param_2,&PTR_DAT_01c2962c);
    }
    else if (param_3 == 0) {
      FUN_00414ad0(param_2,&DAT_01c29608);
    }
    else if (param_3 == 1) {
      FUN_00414ad0(param_2,&PTR_DAT_01c29618);
    }
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,&DAT_01c29640);
  }
  else if (param_3 == 4) {
    FUN_00414ad0(param_2,&LAB_01c29654);
  }
  return param_2;
}

