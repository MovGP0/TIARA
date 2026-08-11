/* Ghidra address: 00de0690 */
/* Ghidra symbol: FUN_00de0690 */


void FUN_00de0690(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 local_40 [4];
  undefined8 local_38;
  
  local_40[0] = 8;
  iVar1 = FUN_00416420(param_3,0);
  if (iVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_00415f70(param_3);
  }
  FUN_00de0420(param_1,param_2,local_40);
  return;
}

