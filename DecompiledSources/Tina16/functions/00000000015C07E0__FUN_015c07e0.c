/* Ghidra address: 015c07e0 */
/* Ghidra symbol: FUN_015c07e0 */


undefined1 FUN_015c07e0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_20 = 0;
  local_18 = 0;
  FUN_00441820(&local_20,param_1);
  FUN_015bf2d0(&local_18,local_20);
  iVar1 = FUN_00416db0(local_18,&DAT_015c0898);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_18,&LAB_015c08ac);
    if (iVar1 != 0) {
      local_9 = 0;
      goto LAB_015c0845;
    }
  }
  local_9 = 1;
LAB_015c0845:
  FUN_00414560(&local_20,2);
  return local_9;
}

