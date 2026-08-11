/* Ghidra address: 010b41b0 */
/* Ghidra symbol: FUN_010b41b0 */


void FUN_010b41b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                 longlong param_5,longlong param_6,longlong param_7)

{
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  if (local_res10 != 0) {
    FUN_004b9f40(*(undefined8 *)(param_1 + 8),local_res10);
  }
  if (local_res18 != 0) {
    FUN_004b9f40(*(undefined8 *)(param_1 + 0x10),local_res18);
  }
  if (local_res20 != 0) {
    FUN_004b9f40(*(undefined8 *)(param_1 + 0x18),local_res20);
  }
  if (param_5 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))(*(longlong **)(param_1 + 0x20),param_5);
  }
  if (param_7 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd8))(*(longlong **)(param_1 + 0x30),param_7);
  }
  if (param_6 != 0) {
    FUN_004b9f40(*(undefined8 *)(param_1 + 0x28),param_6);
  }
  FUN_00414560(&local_res10,6);
  return;
}

