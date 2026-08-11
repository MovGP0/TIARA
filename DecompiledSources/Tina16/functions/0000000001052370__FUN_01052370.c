/* Ghidra address: 01052370 */
/* Ghidra symbol: FUN_01052370 */


void FUN_01052370(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),0);
  cVar1 = FUN_010527b0(param_1);
  if (cVar1 == '\0') {
    FUN_00f8d0e0(*(undefined8 *)(param_1 + 0x9d8),param_2);
  }
  else if (param_2 == '\0') {
    FUN_00f8d0e0(*(undefined8 *)(param_1 + 0x9d8),0);
  }
  else {
    _get_mcu_IP(*(undefined8 *)(param_1 + 0x970));
    FUN_00f8d0e0(*(undefined8 *)(param_1 + 0x9d8),*(undefined1 *)(param_1 + 0x8ec));
  }
  FUN_00414560(&local_18,2);
  return;
}

