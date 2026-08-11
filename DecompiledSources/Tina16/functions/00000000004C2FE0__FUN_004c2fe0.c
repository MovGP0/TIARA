/* Ghidra address: 004c2fe0 */
/* Ghidra symbol: FUN_004c2fe0 */


longlong FUN_004c2fe0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_30 [2];
  
  local_30[0] = FUN_004be960(param_1,*(undefined8 *)(param_1 + 0x30),param_2);
  if (((local_30[0] == 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_1 + 0x30))) {
    local_30[0] = FUN_004be960(param_1,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0xd8),param_1,param_2,local_30);
  }
  if ((local_30[0] != 0) && (cVar1 = FUN_00411580(local_30[0],&PTR_FUN_00486f38), cVar1 != '\0')) {
    return local_30[0];
  }
  FUN_004a0910(param_2);
  return local_30[0];
}

