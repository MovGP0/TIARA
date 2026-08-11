/* Ghidra address: 019ddfe0 */
/* Ghidra symbol: FUN_019ddfe0 */


undefined8 * FUN_019ddfe0(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  int *local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_1c [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10);
  cVar1 = FUN_0043fc80(*param_1,local_1c);
  if (cVar1 == '\0') {
    cVar1 = FUN_008542c0(local_res20,*param_1);
    if (cVar1 == '\0') {
      FUN_00414480(&local_10);
      FUN_0043f750(&local_10,*local_res18);
      FUN_00853e30(local_res20,*param_1,local_10);
      FUN_00414480(&local_10);
      FUN_00414480(&local_18);
      FUN_0043f750(&local_18,*local_res18);
      FUN_00414ad0(param_1,local_18);
      FUN_00414480(&local_18);
      *local_res18 = *local_res18 + 1;
    }
    else {
      FUN_00853280(local_res20,&local_38,*param_1);
      FUN_00414ad0(param_1,local_38);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res10);
  return param_1;
}

