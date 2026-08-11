/* Ghidra address: 00f6dd20 */
/* Ghidra symbol: FUN_00f6dd20 */


undefined8 FUN_00f6dd20(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,&DAT_00f6ddc8);
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1,&DAT_00f6ddd8);
  }
  else if (param_2 == '\x02') {
    FUN_00414ad0(param_1,&DAT_00f6dde8);
  }
  else if (param_2 == '\x03') {
    FUN_00414ad0(param_1,&DAT_00f6ddf8);
  }
  else if (param_2 == '\x04') {
    FUN_00414ad0(param_1,&DAT_00f6de0c);
  }
  else if (param_2 == '\x05') {
    FUN_00414ad0(param_1,&LAB_00f6de20);
  }
  else {
    FUN_00414480(param_1);
  }
  return param_1;
}

