/* Ghidra address: 004d5270 */
/* Ghidra symbol: FUN_004d5270 */


undefined4 FUN_004d5270(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  local_18 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x18));
  FUN_004b6e40(*(undefined8 *)(param_1 + 0x18),param_2);
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  if (lVar2 < local_18) {
    local_18 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  }
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x18),local_18);
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  if ((lVar2 < 0) || (param_2 != lVar2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_c = 0x80004005;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

