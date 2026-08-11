/* Ghidra address: 01776d30 */
/* Ghidra symbol: FUN_01776d30 */


undefined4 FUN_01776d30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x288))(param_2,&local_20);
  (**(code **)(*param_3 + 0x288))(param_3,&local_28);
  iVar1 = FUN_00416d10(local_20,local_28);
  if (iVar1 < 0) {
    local_2c = 0xffffffff;
  }
  else {
    iVar1 = FUN_00416db0(local_20,local_28);
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  FUN_00414560(&local_28,2);
  return local_2c;
}

