/* Ghidra address: 01079d40 */
/* Ghidra symbol: FUN_01079d40 */


undefined8 FUN_01079d40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                    (*(longlong **)(param_1 + 0x58),local_res10[0]);
  if (iVar1 < 0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                         (*(longlong **)(param_1 + 0x58),iVar1);
  }
  FUN_00414480(local_res10);
  return local_20;
}

