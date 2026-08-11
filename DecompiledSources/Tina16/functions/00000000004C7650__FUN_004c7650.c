/* Ghidra address: 004c7650 */
/* Ghidra symbol: FUN_004c7650 */


void FUN_004c7650(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  local_20 = 0;
  FUN_0058f450(&local_10,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  if (local_10 == 0) {
    FUN_004c6c50(param_1);
    FUN_004c8510(*(undefined8 *)(param_1 + 0x60),0xd);
  }
  else {
    uVar2 = FUN_0041b800(&local_18);
    cVar1 = FUN_00452340(local_10,&DAT_004c7760,uVar2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*local_18 + 0x18))(local_18);
      FUN_004c7160(param_1,&local_20,uVar2);
      FUN_004c6c50(param_1);
      FUN_004c55e0(*(undefined8 *)(param_1 + 0x60),local_20);
    }
  }
  FUN_00414480(&local_20);
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return;
}

