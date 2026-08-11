/* Ghidra address: 01052290 */
/* Ghidra symbol: FUN_01052290 */


void FUN_01052290(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  uVar3 = _get_mcu_IP(*(undefined8 *)(param_1 + 0x970));
  cVar1 = FUN_00f8e800(*(undefined8 *)(param_1 + 0x9d8),uVar3);
  if (cVar1 != '\0') {
    FUN_00f8d220(*(undefined8 *)(param_1 + 0x9d8),&local_10);
    FUN_00f8d250(*(undefined8 *)(param_1 + 0x9d8),&local_18);
    uVar2 = FUN_00f8e7d0(*(undefined8 *)(param_1 + 0x9d8));
    *(undefined1 *)(param_1 + 0x8ec) = uVar2;
  }
  FUN_00414560(&local_18,2);
  return;
}

