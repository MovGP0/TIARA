/* Ghidra address: 01b21020 */
/* Ghidra symbol: FUN_01b21020 */


undefined8 FUN_01b21020(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = *param_2;
  local_res10[0] = param_2;
  FUN_004144d0(param_1);
  while (cVar1 != '\0') {
    FUN_004153d0(local_20,cVar1,0);
    FUN_004155b0(param_1,local_20[0]);
    FUN_01b1c960(local_res10,1);
    cVar1 = *local_res10[0];
  }
  FUN_004144d0(local_20);
  return param_1;
}

