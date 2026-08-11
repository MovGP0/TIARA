/* Ghidra address: 00c7f220 */
/* Ghidra symbol: FUN_00c7f220 */


undefined8 FUN_00c7f220(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                      (*(longlong **)(param_1 + 0x30),local_res10[0]);
    if (iVar1 < 0) {
      local_20 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                         (*(longlong **)(param_1 + 0x30),iVar1);
      local_20 = *puVar2;
    }
  }
  FUN_00414480(local_res10);
  return local_20;
}

