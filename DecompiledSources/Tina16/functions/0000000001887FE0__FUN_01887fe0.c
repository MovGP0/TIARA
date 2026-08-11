/* Ghidra address: 01887fe0 */
/* Ghidra symbol: FUN_01887fe0 */


void FUN_01887fe0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [36];
  int local_24;
  undefined1 *local_20;
  int local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_1 + 0x40) = 1;
  local_24 = FUN_018873c0(*(undefined8 *)(param_1 + 0x18));
  local_14 = 1;
  if (0 < local_24) {
    do {
      cVar1 = FUN_01887290(*(undefined8 *)(param_1 + 0x20),local_14);
      if (cVar1 == '\0') {
        local_10 = FUN_01886fb0(*(undefined8 *)(param_1 + 0x18),local_14);
        if (local_10 == 0) {
          FUN_018880d0(0,local_20);
          return;
        }
        FUN_01887e40(param_1,local_10,*(undefined8 *)(param_1 + 0x20));
        FUN_00410f20(local_10);
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

