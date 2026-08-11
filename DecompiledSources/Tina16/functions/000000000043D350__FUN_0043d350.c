/* Ghidra address: 0043d350 */
/* Ghidra symbol: FUN_0043d350 */


double FUN_0043d350(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  char cVar1;
  double local_18;
  double local_10;
  
  local_10 = 0.0;
  cVar1 = FUN_00448b70(param_2,param_3,param_4,&local_10);
  if (cVar1 != '\0') {
    cVar1 = FUN_00448a10(param_5,param_6,param_7,param_8,&local_18);
    if (cVar1 != '\0') {
      if (local_10 < 0.0) {
        local_10 = local_10 - local_18;
      }
      else {
        local_10 = local_10 + local_18;
      }
    }
  }
  return local_10;
}

