/* Ghidra address: 01c2bce0 */
/* Ghidra symbol: FUN_01c2bce0 */


undefined1 FUN_01c2bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_9;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = FUN_004170c0(&LAB_01c2bda8,local_res10,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&LAB_01c2bda8,local_res18,1);
    if (0 < iVar1) {
      local_9 = 1;
      goto code_r0x01c2bd5c;
    }
  }
  iVar1 = FUN_00416db0(local_res10,local_res18);
  if (iVar1 == 0) {
    local_9 = 1;
  }
  else {
    local_9 = 0;
  }
code_r0x01c2bd5c:
  FUN_00414560(&local_res10,2);
  return local_9;
}

