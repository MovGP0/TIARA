/* Ghidra address: 004bd670 */
/* Ghidra symbol: FUN_004bd670 */


void FUN_004bd670(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b800(&local_10);
  if (param_2 != 0) {
    uVar2 = FUN_00589390(*(undefined8 *)**(undefined8 **)(param_1 + 0x18));
    FUN_005882e0(uVar2,local_20);
    uVar2 = FUN_0041b800(&local_10);
    cVar1 = FUN_00452370(param_2,local_20,uVar2);
    if (cVar1 == '\0') {
      FUN_0041b800(&local_10);
    }
  }
  FUN_0058f480(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),local_10);
  FUN_0041b800(&local_10);
  return;
}

