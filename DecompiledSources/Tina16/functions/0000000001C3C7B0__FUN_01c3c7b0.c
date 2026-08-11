/* Ghidra address: 01c3c7b0 */
/* Ghidra symbol: FUN_01c3c7b0 */


void FUN_01c3c7b0(undefined8 param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  if (*param_3 == 0xd) {
    FUN_01c3c530(param_1,&local_10);
    cVar1 = FUN_00440a20(local_10,1);
    if (cVar1 != '\0') {
      FUN_01c3c530(param_1,&local_20);
      FUN_00441b80(&local_18,local_20);
      FUN_01c3c5b0(param_1,local_18);
    }
  }
  FUN_00414560(&local_20,3);
  return;
}

