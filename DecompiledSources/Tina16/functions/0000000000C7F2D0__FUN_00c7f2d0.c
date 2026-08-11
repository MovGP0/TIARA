/* Ghidra address: 00c7f2d0 */
/* Ghidra symbol: FUN_00c7f2d0 */


undefined4 FUN_00c7f2d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_res18 [2];
  undefined4 local_1c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] == 0) {
    local_1c = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                         (*(longlong **)(param_1 + 0x28),param_2);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                      (*(longlong **)(param_1 + 0x30),local_res18[0]);
    if (iVar1 < 0) {
      local_1c = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                           (*(longlong **)(param_1 + 0x28),param_2);
    }
    else {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                        (*(longlong **)(param_1 + 0x30),iVar1);
      local_1c = (**(code **)(**(longlong **)(lVar2 + 8) + 0xb0))(*(longlong **)(lVar2 + 8),param_2)
      ;
    }
  }
  FUN_00414480(local_res18);
  return local_1c;
}

