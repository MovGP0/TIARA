/* Ghidra address: 01052690 */
/* Ghidra symbol: FUN_01052690 */


void FUN_01052690(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_30 [2];
  undefined1 local_1c [12];
  
  local_30[0] = 0;
  *(undefined1 *)(param_1 + 0x8ec) = 0;
  FUN_00f90ac0(*(undefined8 *)(param_1 + 0x9d8));
  cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8));
  if (cVar1 == '\0') {
    FUN_01052800(param_1,2);
  }
  iVar2 = FUN_00f8e670(*(undefined8 *)(param_1 + 0x9d8));
  if (iVar2 == 2) {
    uVar3 = _get_mcu_IP(*(undefined8 *)(param_1 + 0x970));
    FUN_00f8e800(*(undefined8 *)(param_1 + 0x9d8),uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x9d8);
    FUN_00f8d220(uVar4,local_30);
    FUN_00f8d280(uVar4,local_30[0]);
    uVar4 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
    lVar5 = FUN_00f753d0(uVar4,0,0,local_1c);
    if (lVar5 != 0) {
      FUN_00f6f900(lVar5,0x20);
    }
    FUN_010508e0(param_1);
  }
  FUN_00414480(local_30);
  return;
}

