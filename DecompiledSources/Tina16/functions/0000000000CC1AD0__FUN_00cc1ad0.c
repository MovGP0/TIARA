/* Ghidra address: 00cc1ad0 */
/* Ghidra symbol: FUN_00cc1ad0 */


undefined1 FUN_00cc1ad0(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_30 = *(undefined8 **)(param_1 + 0x50);
  if (local_30 == (undefined8 *)0x0) {
    local_21 = 1;
  }
  else {
    (**(code **)*local_30)(local_30);
    if (((*(char *)(param_1 + 0x1a) == '\0') && ((*(byte *)(param_1 + 0x69) & 1) == 0)) &&
       (*(char *)(param_1 + 0x1b) == '\0')) {
      local_21 = 0;
    }
    else {
      local_21 = 1;
    }
    local_20 = *(longlong **)(param_1 + 0x50);
    (**(code **)(*local_20 + 8))(local_20);
  }
  return local_21;
}

