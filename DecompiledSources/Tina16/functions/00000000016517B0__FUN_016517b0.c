/* Ghidra address: 016517b0 */
/* Ghidra symbol: FUN_016517b0 */


undefined8 FUN_016517b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined1 *local_20;
  char *local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  local_38 = (char *)FUN_016ea6c0(param_1,1);
  local_18 = local_38;
  if ((local_38[0x40] == '\x03') && (*local_38 == '\x01')) {
    local_10 = FUN_01b0ff70(&PTR_FUN_016505d0,1,param_1,param_2);
  }
  else if ((local_38[0x40] == '\x02') && (*local_38 == '\x01')) {
    lVar1 = FUN_01650ac0(*(undefined8 *)(local_38 + 0x28),0x32);
    if (lVar1 != 0) {
      local_38 = local_18;
      local_10 = FUN_01b0ff70(&PTR_FUN_01650890,1,param_1,param_2);
    }
  }
  return local_10;
}

