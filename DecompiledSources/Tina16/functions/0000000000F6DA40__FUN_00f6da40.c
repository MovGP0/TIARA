/* Ghidra address: 00f6da40 */
/* Ghidra symbol: FUN_00f6da40 */


undefined8 FUN_00f6da40(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,&PTR_DAT_00f6da90);
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1,&LAB_00f6daa4);
  }
  else {
    FUN_00414480(param_1);
  }
  return param_1;
}

