/* Ghidra address: 00452be0 */
/* Ghidra symbol: FUN_00452be0 */


undefined4 FUN_00452be0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00456970(local_res10,&local_10,0x5f,0x2d);
  iVar1 = FUN_00452cd0(param_1,local_10);
  if (iVar1 < 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_00452a10(param_1,iVar1);
  }
  FUN_00414480(&local_10);
  return local_14;
}

