/* Ghidra address: 00f6dab0 */
/* Ghidra symbol: FUN_00f6dab0 */


undefined8 FUN_00f6dab0(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,&DAT_00f6dc20);
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1,&DAT_00f6dc30);
  }
  else if (param_2 == '\x02') {
    FUN_00414ad0(param_1,&DAT_00f6dc40);
  }
  else if (param_2 == '\x03') {
    FUN_00414ad0(param_1,&DAT_00f6dc50);
  }
  else if (param_2 == '\x04') {
    FUN_00414ad0(param_1,L"swap");
  }
  else if (param_2 == '\x05') {
    FUN_00414ad0(param_1,&DAT_00f6dc78);
  }
  else if (param_2 == '\x06') {
    FUN_00414ad0(param_1,&PTR_s_B_00f6dc8c);
  }
  else if (param_2 == '\a') {
    FUN_00414ad0(param_1,&DAT_00f6dca0);
  }
  else if (param_2 == '\b') {
    FUN_00414ad0(param_1,&PTR_DAT_00f6dcb4);
  }
  else if (param_2 == '\t') {
    FUN_00414ad0(param_1,&PTR_s__00f6dcc8);
  }
  else if (param_2 == '\n') {
    FUN_00414ad0(param_1,&DAT_00f6dcdc);
  }
  else if (param_2 == '\v') {
    FUN_00414ad0(param_1,&DAT_00f6dcf0);
  }
  else if (param_2 == '\f') {
    FUN_00414ad0(param_1,&DAT_00f6dd04);
  }
  else if (param_2 == '\r') {
    FUN_00414ad0(param_1,&DAT_00f6dd18);
  }
  else {
    FUN_00414480(param_1);
  }
  return param_1;
}

