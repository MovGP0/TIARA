/* Ghidra address: 007e63e0 */
/* Ghidra symbol: FUN_007e63e0 */


undefined1 FUN_007e63e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  char local_14;
  undefined1 local_13;
  undefined2 local_12;
  longlong local_10;
  
  local_30 = auStack_58;
  local_13 = 0;
  cVar1 = FUN_007e6100();
  if (cVar1 == '\0') {
    local_12 = FUN_007e6150(param_2);
    local_20 = *(longlong *)(param_1 + 0x80);
    FUN_00611620(DAT_020125c8,&local_20);
    do {
      local_14 = '\0';
      local_10 = FUN_007e5b00(param_1,local_12,2);
      if (local_10 != 0) {
        FUN_00611620(DAT_020125c8,&local_10);
        local_14 = FUN_007e61e0(auStack_58,&local_10,0);
        (**(code **)(*DAT_020125c8 + 8))(DAT_020125c8);
      }
    } while ((local_20 != 0) && (local_14 == '\x02'));
    (**(code **)(*DAT_020125c8 + 8))(DAT_020125c8);
    if ((local_10 == 0) && (local_20 != 0)) {
      local_13 = 0;
    }
    else {
      local_13 = 1;
    }
  }
  return local_13;
}

