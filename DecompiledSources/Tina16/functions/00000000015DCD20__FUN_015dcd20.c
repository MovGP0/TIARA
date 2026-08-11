/* Ghidra address: 015dcd20 */
/* Ghidra symbol: FUN_015dcd20 */


void FUN_015dcd20(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(char *)(param_1 + 0x84) == '\0') {
    local_10 = auStack_38;
    if ((*(longlong *)(param_1 + 0x250) != 0) &&
       (local_10 = auStack_38, *(char *)(param_1 + 0x86) == '\0')) {
      local_10 = auStack_38;
      FUN_00410f20(*(undefined8 *)(param_1 + 0x250));
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  else {
    FUN_015d2020(param_1);
    if (*(longlong *)(param_1 + 0x250) != 0) {
      lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x250))(*(undefined8 **)(param_1 + 0x250));
      if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x238) + 0xa0)) {
        FUN_015c8e90(*(undefined8 *)(param_1 + 0x238),1,0);
      }
    }
    *(undefined1 *)(param_1 + 0x84) = 0;
    if ((*(char *)(param_1 + 0x86) == '\0') && (*(longlong *)(param_1 + 0x250) != 0)) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x250));
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  return;
}

