/* Ghidra address: 00eb9d90 */
/* Ghidra symbol: FUN_00eb9d90 */


undefined8 FUN_00eb9d90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
                    (*(longlong **)(param_1 + 0x10),local_res10[0]);
  if (-1 < iVar1) {
    local_20 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                         (*(longlong **)(param_1 + 0x10),iVar1);
  }
  FUN_00414480(local_res10);
  return local_20;
}

