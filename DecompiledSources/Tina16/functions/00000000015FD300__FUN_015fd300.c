/* Ghidra address: 015fd300 */
/* Ghidra symbol: FUN_015fd300 */


undefined1 FUN_015fd300(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_res10 [3];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    if ((*(int *)(param_1 + 0x30) == 0) &&
       ((*(int *)(param_1 + 0x54) == 1 || (*(int *)(param_1 + 0x54) == 3)))) {
      local_9 = 1;
    }
    else {
      local_9 = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 0) &&
          (((*(int *)(param_1 + 0x54) == 1 || (*(int *)(param_1 + 0x54) == 3)) &&
           (cVar1 = FUN_015fd240(local_res10[0]), cVar1 != '\0')))) {
    local_9 = 1;
  }
  else {
    local_9 = 0;
  }
  FUN_00414480(local_res10);
  return local_9;
}

