/* Ghidra address: 01052470 */
/* Ghidra symbol: FUN_01052470 */


void FUN_01052470(longlong param_1)

{
  char cVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00f8e500(*(undefined8 *)(param_1 + 0x9d8));
  _get_mcu_IP(*(undefined8 *)(param_1 + 0x970));
  cVar1 = FUN_010527b0(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x8ec) != '\0')) {
    FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_18);
    FUN_00f8d250(*(undefined8 *)(param_1 + 0x9d8),&local_20);
    cVar1 = FUN_010521e0(param_1,local_18);
    if (cVar1 != '\0') {
      FUN_00f8d0e0(*(undefined8 *)(param_1 + 0x9d8),1);
      FUN_00f8d2f0(*(undefined8 *)(param_1 + 0x9d8),0);
      FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),0);
    }
    *(undefined1 *)(param_1 + 0x8ec) = 0;
    FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_10);
    FUN_00f65450(*(undefined8 *)(param_1 + 0x980),local_10);
    FUN_010508e0(param_1);
  }
  FUN_00414560(&local_20,3);
  return;
}

