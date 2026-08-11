/* Ghidra address: 015dca70 */
/* Ghidra symbol: FUN_015dca70 */


void FUN_015dca70(longlong param_1,short param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined1 local_18;
  longlong local_10;
  
  local_10 = 0;
  *(undefined1 *)(param_1 + 0x231) = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_015bf710(&local_10,*(undefined8 *)(param_1 + 0x88));
    if (local_10 == 0) {
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,10,param_1);
      FUN_004134c0(uVar2);
    }
  }
  if (param_2 != -0x100) {
    cVar1 = FUN_015bf1b0(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x103) != '\x01')) {
      cVar1 = FUN_015c08c0(*(undefined8 *)(param_1 + 0x88));
      if (cVar1 == '\0') {
        local_20 = *(undefined8 *)(param_1 + 0x88);
        local_18 = 0x11;
        uVar2 = FUN_015b5d20(&PTR_FUN_015b5818,1,0xc,&local_20,0,param_1);
        FUN_004134c0(uVar2);
      }
    }
  }
  if ((param_2 != -0x100) && (*(char *)(param_1 + 0xe0) != '\0')) {
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_18 = 0x11;
    uVar2 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x1c,&local_20,0,param_1);
    FUN_004134c0(uVar2);
  }
  FUN_015dcd20(param_1);
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(short *)(param_1 + 0xa0) = param_2;
  FUN_015dad10(param_1);
  FUN_00414480(&local_10);
  return;
}

