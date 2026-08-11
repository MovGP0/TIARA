/* Ghidra address: 00b3b0e0 */
/* Ghidra symbol: FUN_00b3b0e0 */


undefined8 FUN_00b3b0e0(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414bf0(param_1,"vertical-align:top;");
  }
  else if (param_2 == '\x01') {
    FUN_00414bf0(param_1,"vertical-align:center;");
  }
  else if (param_2 == '\x02') {
    FUN_00414bf0(param_1,"vertical-align:bottom;");
  }
  else if (param_2 == '\x03') {
    FUN_00414bf0(param_1,"vertical-align:justify;");
  }
  return param_1;
}

