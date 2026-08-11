/* Ghidra address: 008b01a0 */
/* Ghidra symbol: FUN_008b01a0 */


undefined1 FUN_008b01a0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_29 = 0;
  FUN_008af330(&local_20,param_1);
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      cVar1 = FUN_008b0080(local_20,*param_2);
      if (cVar1 != '\0') {
        local_29 = 1;
        break;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414480(&local_20);
  return local_29;
}

