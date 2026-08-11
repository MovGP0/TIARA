/* Ghidra address: 004c6530 */
/* Ghidra symbol: FUN_004c6530 */


undefined1 FUN_004c6530(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  longlong *local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  local_19 = *(longlong *)(param_1 + 0x48) == 0;
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x7f) != '\0') {
    FUN_0058f450(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x70),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xb8));
    local_19 = *(longlong *)(param_1 + 0x48) == local_10;
    if (!(bool)local_19) {
      uVar2 = FUN_0041b800(&local_18);
      cVar1 = FUN_00452340(local_10,&DAT_004c6648,uVar2);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*local_18 + 0x18))(local_18);
        local_19 = FUN_004c63c0(*(undefined8 *)(param_1 + 0x60),uVar2,
                                *(undefined8 *)(param_1 + 0x40));
      }
    }
  }
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return local_19;
}

