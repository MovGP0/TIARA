/* Ghidra address: 00b04590 */
/* Ghidra symbol: FUN_00b04590 */


void FUN_00b04590(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00b02670(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_00440a20(local_res10[0],1);
    if (cVar1 == '\0') {
      FUN_00441a10(&local_10,local_res10[0]);
      if (local_10 == 0) {
        FUN_004414c0(&local_18,local_res10[0],L".htm");
        FUN_00414b50(local_res10,local_18);
      }
    }
    cVar1 = FUN_00440a20(local_res10[0],1);
    if (cVar1 == '\0') {
      FUN_00416ba0(local_res10,*(undefined8 *)(param_1 + 0x20),local_res10[0]);
    }
    cVar1 = FUN_00440a20(local_res10[0],1);
    if (cVar1 == '\0') {
      FUN_00b01560(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),1);
    }
    else {
      FUN_00b01560(*(undefined8 *)(param_1 + 0x18),local_res10[0],1);
    }
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

