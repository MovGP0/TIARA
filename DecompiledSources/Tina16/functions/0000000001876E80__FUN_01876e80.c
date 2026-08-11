/* Ghidra address: 01876e80 */
/* Ghidra symbol: FUN_01876e80 */


int FUN_01876e80(longlong param_1,undefined8 param_2,char param_3,int param_4)

{
  int local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01876900(&local_10,param_2);
  local_1c = FUN_01876c80(*(undefined8 *)(param_1 + 8),local_10);
  *(bool *)(param_1 + 0x10) = local_1c == -1;
  if (local_1c == -1) {
    local_1c = param_4;
    if (param_3 == '\0') {
      local_1c = FUN_01876b40(*(undefined8 *)(param_1 + 8));
    }
    FUN_01876bf0(*(undefined8 *)(param_1 + 8),local_10,param_4);
  }
  else if (param_3 != '\0') {
    local_1c = FUN_01876cf0(*(undefined8 *)(param_1 + 8),local_1c);
  }
  FUN_00414480(&local_10);
  return local_1c;
}

