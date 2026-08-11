/* Ghidra address: 00b9b2b0 */
/* Ghidra symbol: FUN_00b9b2b0 */


void FUN_00b9b2b0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  FUN_00b9bdb0(param_1);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x40) = param_3;
  uVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  FUN_00b9b0a0(param_1);
  local_c = *(int *)(param_1 + 0x30);
  uVar2 = FUN_00b9af60(*(undefined8 *)(param_1 + 0x20),param_1 + 0x30,
                       *(undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(bool *)(param_1 + 0x59) = (longlong)local_c < *(longlong *)(param_1 + 0x30);
  FUN_00b9be50(param_1);
  cVar1 = FUN_0045aee0(*(undefined8 *)(param_1 + 0x50));
  *(bool *)(param_1 + 0x58) = cVar1 == '\0';
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return;
}

