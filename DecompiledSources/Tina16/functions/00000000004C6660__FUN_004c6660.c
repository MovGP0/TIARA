/* Ghidra address: 004c6660 */
/* Ghidra symbol: FUN_004c6660 */


undefined1 FUN_004c6660(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30 [2];
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_30[0] = 0;
  local_10 = 0;
  local_20 = (longlong *)0x0;
  local_31 = 1;
  FUN_0058f450(&local_10,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (local_10 != 0) {
    uVar2 = FUN_0041b800(&local_20);
    cVar1 = FUN_00452340(local_10,&DAT_004c6790,uVar2);
    if (cVar1 != '\0') {
      local_18 = (**(code **)(*local_20 + 0x18))(local_20);
      cVar1 = FUN_004c6530(auStack_58);
      if ((cVar1 == '\0') && (*(longlong *)(local_18 + 0x10) != 0)) {
        local_31 = 0;
      }
      goto code_r0x004c6733;
    }
  }
  if (*(char *)(param_1 + 0x7f) != '\0') {
    FUN_0058f450(local_30,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    if (local_30[0] != 0) {
      local_31 = 0;
    }
  }
code_r0x004c6733:
  FUN_0041b800(local_30);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_10);
  return local_31;
}

