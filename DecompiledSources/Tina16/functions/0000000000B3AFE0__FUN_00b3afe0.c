/* Ghidra address: 00b3afe0 */
/* Ghidra symbol: FUN_00b3afe0 */


undefined8 FUN_00b3afe0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    FUN_00414bf0(param_1,"text-align: left;");
  }
  else if (param_2 == '\x02') {
    FUN_00414bf0(param_1,"text-align: center;");
  }
  else if (param_2 == '\x03') {
    FUN_00414bf0(param_1,"text-align: right;");
  }
  else if (param_2 == '\x05') {
    FUN_00414bf0(param_1,"text-align: justify;");
  }
  return param_1;
}

